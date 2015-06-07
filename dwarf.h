#ifndef DWARF_H
#define DWARF_H
#include "agent.h"
#include "statemachine.h"
#include "SFML/Graphics.hpp"
#include "SteeringBehaviors.h"

enum places{
    mine,
    home
};

enum journey{
    still,
    is,
    almost,
    there
};

class Dwarf : public Agent
{
private:
    float gatheringSpeed;
    float stamina;
    float maxStamina;
    float oreSack;
    float capacity;
    sf::Text* questText;
    sf::Text* oreText;
    places place; //where the dwarf is directed
    journey step;
    StateMachine<Dwarf> * brain;

public:
    Dwarf(sf::Text* qText, sf::Text* oText, float gatherSpeed = 1.0f, float moveSpeed = 1.0f,
          float oreCapacity = 50.0f, float MaxStamina = 100.0f, places Place = places::home);
    ~Dwarf();
    void changeState(State<Dwarf> * state); //only it's brain state
    const float getGatheringSpeed() const {return gatheringSpeed;}
    const float getStamina() const {return stamina;}
    const float getOreSack() const {return oreSack;}
    const places getPlace() const {return place;}
    const journey getStep() const {return step;}
    const float getMaxStamina() const {return maxStamina;}
    sf::Text* getQuestText() const {return questText;}
    sf::Text* getOreText() const {return oreText;}    
    void setGatheringSpeed(const float s) {gatheringSpeed = s;}
    void setStamina(const float s) {stamina = s;}
    void setOreSack(const float s) {oreSack = s;}
    void setPlace(const places p) {place = p;}
    void setStep (const journey j) {step = j;}
    virtual void Update();
};

#endif // DWARF_H
