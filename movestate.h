#ifndef MOVESTATE_H
#define MOVESTATE_H
#include "state.h"
#include "dwarf.h"

class MoveState : public State<Dwarf>
{
protected:
    MoveState();
    ~MoveState();
    static MoveState* instance;
public:
    static MoveState* Instance();
    /*virtual void Update(Agent *);
    virtual void OnEnter(Agent *);
    virtual void OnExit(Agent *);*/
    virtual void Update(Dwarf * d);
    virtual void OnEnter(Dwarf *);
    virtual void OnExit(Dwarf *);
};

#endif // MOVESTATE_H
