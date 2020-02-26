#pragma once

#include "MazeFactory.h"

class Room;
class Door;

//class to demonstrate Abstract Factory pattern

class BombedMazeFactory : public MazeFactory
{
public:
    BombedMazeFactory();
    ~BombedMazeFactory();

    virtual Room* MakeRoom(int roomNo) const;
    virtual Wall* MakeWall() const;
};

