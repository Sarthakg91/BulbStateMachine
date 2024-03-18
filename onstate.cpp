#include "onstate.h"
#include <QDebug>
#include <bulb.h>
#include "offstate.h"

OnState::OnState()
{
    qDebug()<<"Inside OnState's constructor";
}


void OnState::enter()
{
    qDebug() << "Enterred On State";
}

void OnState::exit()
{
    qDebug() << "Exiting On State";
    //delete this;
}

void OnState::toggle(Bulb* bulbObj)
{
    qDebug() << "Inside Toggle of On State";
    State *newState = OffState::getInstance();
    bulbObj->setState(*newState);
}
