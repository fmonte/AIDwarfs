#ifndef AGENT_H
#define AGENT_H
#include "statemachine.h"
#include "state.h"

class Agent
{
protected:

public:
    Agent();
    ~Agent();
    virtual void Update(); //of every agent's characteristics
    virtual void changeState(State<Agent> * state); //only it's brain state

};

#endif // AGENT_H
