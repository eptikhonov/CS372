#include "stdafx.h"
#include "EnchantedRoom.h"
#include "Spell.h"

EnchantedRoom::EnchantedRoom(int roomNo, Spell* spell):
    Room(roomNo), 
    spell(spell)
{
}


EnchantedRoom::~EnchantedRoom()
{
    delete spell;
}
