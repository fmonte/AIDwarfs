#ifndef SLEEPSTATE_H
#define SLEEPSTATE_H
#include "state.h"
#include "dwarf.h"

class SleepState : public State<Dwarf>
{
protected:
    SleepState();
    ~SleepState();
    static SleepState* instance;
public:
    static SleepState* Instance();
    /*virtual void Update(Agent *);
    virtual void OnEnter(Agent *);
    virtual void OnExit(Agent *);*/
    virtual void Update(Dwarf * d);
    virtual void OnEnter(Dwarf *);
    virtual void OnExit(Dwarf *);
};

#endif // SLEEPSTATE_H
