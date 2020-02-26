#pragma once

#include "MazeFactory.h"
#include "Room.h"

class Room;

//class to demonstrate Abstract Factory pattern

class TrappedMazeFactory : public MazeFactory
{
public:
    TrappedMazeFactory();
    ~TrappedMazeFactory();

    virtual Room* MakeRoom(int roomNo) const;
    virtual Wall* MakeWall() const;

};

