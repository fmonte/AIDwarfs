#include <iostream>
#include <string>
#include "sleepstate.h"
#include "movestate.h"


SleepState* SleepState::instance = 0;

SleepState* SleepState::Instance(){
    if(instance == 0){
        instance = new SleepState();
    }
    return instance;
}

SleepState::SleepState()
{

}

SleepState::~SleepState()
{

}

/*void SleepState::OnEnter(Agent * d)
{
    this->OnEnter((Dwarf*)d);
}

void SleepState::OnExit(Agent * d)
{
    this->OnExit((Dwarf*)d);
}

void SleepState::Update(Agent * d)
{
    this->Update((Dwarf*)d);
}*/

void SleepState::OnEnter(Dwarf * d)
{
    d->getQuestText()->setString("Dwarf went to sleep.");
}

void SleepState::OnExit(Dwarf * d)
{
    d->getQuestText()->setString("Dwarf stamina full. Moving towards mine.");
}

void SleepState::Update(Dwarf * d)
{
    if(d->getStamina()<d->getMaxStamina()){
        d->setStamina(d->getStamina()+5.0f);
        d->getQuestText()->setString("Dwarf sleeping. Stamina: " + std::to_string((int)d->getStamina()));
    }
    else{
        d->setPlace(places::mine);
        d->changeState(MoveState::Instance());

    }

}
