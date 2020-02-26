#include "stdafx.h"
#include "EnchantedMazeFactory.h"
#include "EnchantedRoom.h"
#include "DoorNeedingSpell.h"
#include "Spell.h"

EnchantedMazeFactory::EnchantedMazeFactory()
{
}


EnchantedMazeFactory::~EnchantedMazeFactory()
{
}

Room* EnchantedMazeFactory::MakeRoom(int roomNo) const
{
    return new EnchantedRoom(roomNo, CastSpell());
}

Door* EnchantedMazeFactory::MakeDoor(Room* r1, Room* r2) const
{
    return new DoorNeedingSpell(r1, r2);
}

Spell* EnchantedMazeFactory::CastSpell() const
{
    return new Spell();
}