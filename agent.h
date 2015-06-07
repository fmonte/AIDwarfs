#ifndef AGENT_H
#define AGENT_H
#include "statemachine.h"
#include "state.h"
#include "Vector2.h"
#include "SteeringBehaviors.h"
#include "graphicfigure.h"

class SteeringBehaviors;

class Agent
{
protected:

    Vector2 velocity;
    float acceleration;
    Vector2 target;
    Vector2 position;
    SteeringBehaviors* vehicle;
    GraphicFigure* graphics;


public:
    Agent();
    ~Agent();
    virtual void Update(); //of every agent's characteristics
    virtual void changeState(State<Agent> * state); //only it's brain state
    const Vector2 getVelocity() const {return velocity;}
    const float getAcceleration() const {return acceleration;}
    const Vector2 getTarget() const {return target;}
    const Vector2 getPosition() const {return position;}
    const GraphicFigure* getFigure() const {return graphics;}
    void setVelocity(Vector2 v) {velocity = v;}
    void setAcceleration(float a) {acceleration = a;}
    void setTarget(Vector2 t) {target = t;}
    void setPosition(Vector2 p) {position = p;}
    void setGraphicFigure(GraphicFigure* f) {graphics = f;}

};

#endif // AGENT_H
