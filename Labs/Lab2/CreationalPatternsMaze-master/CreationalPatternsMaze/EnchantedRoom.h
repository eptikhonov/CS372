#pragma once

#include "Room.h"

class Spell;

class EnchantedRoom : public Room
{
public:
    EnchantedRoom(int roomNo, Spell* spell);
    virtual ~EnchantedRoom();

private:
    Spell* spell;
};

