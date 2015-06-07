#ifndef STATEMACHINE_H
#define STATEMACHINE_H
#include "agent.h"
#include "state.h"
#include <vector>

template <class T>
class StateMachine
{
private:
    T * agent;
    State<T> * prevState;
    State<T> * currentState;

public:
    StateMachine(T *a, State<T> *s): agent(a), currentState(s){}
    ~StateMachine(){}
    void ChangeState(State<T> *newState){
        prevState = currentState;
        currentState = newState;
        prevState->OnExit(agent);
        currentState->OnEnter(agent);
    }
    void Update(){currentState->Update(agent);}

};

#endif // STATEMACHINE_H
