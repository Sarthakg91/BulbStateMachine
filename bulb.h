#ifndef BULB_H
#define BULB_H

#include "state.h"

class Bulb
{
public:
    Bulb();


    void onToggle();

    void setState(State& newState);

    State* getCurrentState(){return m_currState;}

    State* m_currState;

};

#endif // BULB_H
