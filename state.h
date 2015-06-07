#ifndef STATE_H
#define STATE_H

template <class T>
class State
{
protected:
    State(){}
    virtual ~State(){}

public:
    virtual void Update(T*) = 0;
    virtual void OnEnter(T*) = 0;
    virtual void OnExit(T*) = 0;
};

#endif // STATE_H
