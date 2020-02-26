#pragma once

#include "Door.h"

class DoorNeedingSpell : public Door
{
public:
    DoorNeedingSpell(Room* room1 = NULL, Room* room2 = NULL, bool hasSpell = false);
    DoorNeedingSpell(const DoorNeedingSpell& other);
    ~DoorNeedingSpell() {};

    virtual void Initialize(Room* r1, Room* r2);
    virtual Door* Clone() const;

private:
    bool hasSpell;
};

