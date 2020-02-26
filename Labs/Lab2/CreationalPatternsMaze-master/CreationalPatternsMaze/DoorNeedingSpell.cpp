#include "stdafx.h"
#include "DoorNeedingSpell.h"

DoorNeedingSpell::DoorNeedingSpell(Room* room1, Room* room2, bool hasSpell):
    Door(room1, room2),
    hasSpell(hasSpell)
{
}

DoorNeedingSpell::DoorNeedingSpell(const DoorNeedingSpell& other):
    Door(other)
{
    hasSpell = other.hasSpell;
}

void DoorNeedingSpell::Initialize(Room* r1, Room* r2)
{
    Door::Initialize(r1, r2);
    hasSpell = true;
}

Door* DoorNeedingSpell::Clone() const
{
    return new DoorNeedingSpell(*this);
}
