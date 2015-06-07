#include <iostream>
#include "agent.h"

Agent::Agent()
{
vehicle = new SteeringBehaviors(this);
}

Agent::~Agent()
{
}

void Agent::Update()
{

}

void Agent::changeState(State<Agent> * state)
{

}
