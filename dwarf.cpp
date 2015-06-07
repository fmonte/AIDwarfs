#include "dwarf.h"
#include "statemachine.h"
#include "sleepstate.h"

Dwarf::Dwarf(sf::Text* qText, sf::Text* oText, float gatherSpeed, float moveSpeed, float oreCapacity, float MaxStamina, places Place)
    :questText(qText), oreText(oText), gatheringSpeed(gatherSpeed), movingSpeed(moveSpeed), capacity(oreCapacity),
      maxStamina(MaxStamina), stamina(MaxStamina), oreSack(0.0f), place(Place), step(journey::still)
{
    brain = new StateMachine<Dwarf>(this, SleepState::Instance());
}

Dwarf::~Dwarf()
{

}

void Dwarf::Update(){
    brain->Update();
}

void Dwarf::changeState(State<Dwarf> *state)
{
brain->ChangeState(state);
}
