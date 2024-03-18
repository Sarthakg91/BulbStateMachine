#include "bulb.h"
#include "offstate.h"
#include <QDebug>

Bulb::Bulb():m_currState(OffState::getInstance())
{
    qDebug()<<"Created a bulb. Current state is OffState";
    this->m_currState->enter();
}

void Bulb::onToggle()
{
    this->m_currState->toggle(this);
}

void Bulb::setState(State& newState)
{
    this->m_currState->exit();
    this->m_currState = &newState;
    this->m_currState->enter();
}

