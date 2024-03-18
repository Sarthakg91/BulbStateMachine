#include "offstate.h"
#include <QDebug>
#include <bulb.h>
#include "onstate.h"

OffState* OffState::m_instance = nullptr;

OffState::OffState()
{
    qDebug()<<"Creating new instance of OffState"<<endl;
}

void OffState::enter()
{
    qDebug()<<"Enterred OffState"<<endl;
}

void OffState::exit()
{
    qDebug()<<"Exitted OffState"<<endl;
    delete this;
}

void OffState::toggle(Bulb* bulbObj)
{
    qDebug()<<"Inside Toggle of OffState"<<endl;

    //State *newState = new OnState();
    bulbObj->setState(OnState::getInstance());
}

