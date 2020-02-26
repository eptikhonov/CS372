#pragma once

#include "MazeGame.h"

class Room;
class Wall;
class Spell;

//class to demonstrate Factory Method pattern

class EnchantedMazeGame : public MazeGame
{
public:
    EnchantedMazeGame();
    ~EnchantedMazeGame();

    virtual Room* MakeRoom(int roomNo) const;
    virtual Door* MakeDoor(Room*r1, Room* r2) const;

protected:
    Spell* CastSpell() const;
};

