#ifndef MINESTATE_H
#define MINESTATE_H
#include "state.h"
#include "dwarf.h"

class MineState : public State<Dwarf>
{
protected:
    MineState();
    ~MineState();
    static MineState* instance;
public:
    static MineState* Instance();
    /*virtual void Update(Agent *);
    virtual void OnEnter(Agent *);
    virtual void OnExit(Agent *);*/
    virtual void Update(Dwarf * d);
    virtual void OnEnter(Dwarf *);
    virtual void OnExit(Dwarf *);
};

#endif // MINESTATE_H
