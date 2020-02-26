#include "stdafx.h"
#include "EnchantedMazeGame.h"
#include "EnchantedRoom.h"
#include "DoorNeedingSpell.h"
#include "Spell.h"

EnchantedMazeGame::EnchantedMazeGame()
{
}


EnchantedMazeGame::~EnchantedMazeGame()
{
}

Room* EnchantedMazeGame::MakeRoom(int roomNo) const
{
    return new EnchantedRoom(roomNo, CastSpell());
}

Door* EnchantedMazeGame::MakeDoor(Room*r1, Room* r2) const
{
    return new DoorNeedingSpell(r1, r2);
}

Spell* EnchantedMazeGame::CastSpell() const
{
    return new Spell();
}