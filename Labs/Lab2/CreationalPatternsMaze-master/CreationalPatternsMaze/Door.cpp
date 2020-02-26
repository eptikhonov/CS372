#include "stdafx.h"
#include "Door.h"


Door::Door(Room* room1, Room* room2):
    room1(room1), 
    room2(room2)
{
}

Door::~Door()
{
}

Door::Door(const Door& other)
{
    //note that this is a shallow copy
    room1 = other.room1;
    room2 = other.room2;
    isOpen = other.isOpen;
}

void Door::Initialize(Room* r1, Room* r2)
{
    room1 = r1;
    room2 = r2;
}

Door* Door::Clone() const
{
    return new Door(*this);
}
