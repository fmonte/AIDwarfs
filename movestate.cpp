#include <iostream>
#include "movestate.h"
#include "sleepstate.h"
#include "minestate.h"
#include "dwarf.h"

MoveState* MoveState::instance = 0;

MoveState* MoveState::Instance(){
    if(instance == 0){
        instance = new MoveState();
    }
    return instance;
}

MoveState::MoveState()
{

}

MoveState::~MoveState()
{

}

/*void MoveState::OnEnter(Agent * d)
{
    this->OnEnter((Dwarf*)d);
}

void MoveState::OnExit(Agent * d)
{
    this->OnExit((Dwarf*)d);
}

void MoveState::Update(Agent * d)
{
    this->Update((Dwarf*)d);
}*/

void MoveState::OnEnter(Dwarf * d)
{
    d->getQuestText()->setString("Dwarf's journey starts.");
}

void MoveState::OnExit(Dwarf * d)
{
    d->getQuestText()->setString("Dwarf's journey ends.");
}

void MoveState::Update(Dwarf * d)
{
    switch(d->getStep()){
        case(journey::still):
            d->setStep(journey::is);
            d->getQuestText()->setString("Dwarf just left.");
            break;
        case(journey::is):
            d->setStep(journey::almost);
            d->getQuestText()->setString("Dwarf is going.");
            break;
        case(journey::almost):
            d->setStep(journey::there);
            d->getQuestText()->setString("Dwarf almost there.");
            break;
        case(journey::there):
            d->setStep(journey::still);
            if(d->getPlace() == places::home){
                d->getQuestText()->setString("Dwarf arrived home.");
                d->changeState(SleepState::Instance());
            }
            else{
                d->getQuestText()->setString("Dwarf arrived to mine.");
                d->changeState(MineState::Instance());
            }
            break;
    }

}
