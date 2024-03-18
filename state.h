#ifndef STATE_H
#define STATE_H

class Bulb;
class State
{
public:
    State();
    virtual ~State(){}

    virtual void enter(){}
    virtual void doWork(){}
    virtual void exit(){}
    virtual void toggle(Bulb*){}

    virtual void handleExternalInput(int){}
    virtual void handleInternalInput(int){}
};

#endif // STATE_H
