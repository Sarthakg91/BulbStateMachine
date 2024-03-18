#ifndef ONSTATE_H
#define ONSTATE_H

#include "state.h"

class OnState : public State {
public:
    static OnState& getInstance() {
        // Static local variable onStateInstance
        static OnState onStateInstance;
        return onStateInstance; // Return a reference to the same instance
    }

    void enter() override;
    void exit() override;
    void toggle(Bulb* bulbObj) override;

private:
    OnState(); // Private constructor to prevent direct instantiation
    OnState(const OnState&) = delete;
};

// No need to initialize m_instance separately; handled by static local variable

#endif // ONSTATE_H
