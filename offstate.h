#ifndef OFFSTATE_H
#define OFFSTATE_H

#include "state.h"



class OffState: public State
{
public:
    static OffState* getInstance(){
        if(m_instance == nullptr)
        {
            m_instance = new OffState(); // create a new instance if it doesn't exist
        }
        return m_instance;
    }

    void enter() override;
    void exit() override;
    void toggle(Bulb* bulbObj) override;

private:
    OffState();
    static OffState* m_instance;
    OffState(const OffState&) = delete;
};

#endif // OFFSTATE_H
