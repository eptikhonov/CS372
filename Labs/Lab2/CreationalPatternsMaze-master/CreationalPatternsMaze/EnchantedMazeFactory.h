#pragma once

#include "MazeFactory.h"

class Spell;
class Room;
class Door;

//class to demonstrate Abstract Factory pattern


class EnchantedMazeFactory : public MazeFactory
{
public:
    EnchantedMazeFactory();
    ~EnchantedMazeFactory();

    virtual Room* MakeRoom(int roomNo) const;
    virtual Door* MakeDoor(Room* r1, Room* r2) const;

protected:
    Spell* CastSpell() const;
};

