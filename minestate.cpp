#include <iostream>
#include <string>
#include "minestate.h"
#include "movestate.h"
#include "dwarf.h"

MineState* MineState::instance = 0;

MineState* MineState::Instance(){
    if(instance == 0){
        instance = new MineState();
    }
    return instance;
}

MineState::MineState()
{

}

MineState::~MineState()
{

}

/*void MineState::OnEnter(Agent * d)
{
    this->OnEnter((Dwarf*)d);
}

void MineState::OnExit(Agent * d)
{
    this->OnExit((Dwarf*)d);
}

void MineState::Update(Agent * d)
{
    this->Update((Dwarf*)d);
}*/

void MineState::OnEnter(Dwarf * d)
{
    d->getQuestText()->setString("Dwarf starts mining.");
}

void MineState::OnExit(Dwarf * d)
{
    d->getQuestText()->setString("Dwarf stamina low. Moving towards home.");
}

void MineState::Update(Dwarf * d)
{
    if(d->getStamina()>5){
        d->setStamina(d->getStamina()-5.0f);
        d->setOreSack(d->getOreSack()+d->getGatheringSpeed());
        std::string s = "Ores: " + std::to_string((int)d->getOreSack());
        std::cout << s << std::endl;
        d->getOreText()->setString(s);
    }
    else{
        d->setPlace(places::home);
        d->changeState(MoveState::Instance());

    }

}


