#pragma once

#include "MazeGame.h"

class Room;
class Wall;

//class to demonstrate Factory Method pattern

class TrappedMazeGame : public MazeGame
{
public:
    TrappedMazeGame();
    ~TrappedMazeGame();

    virtual Room* MakeRoom(int roomNo) const;
    virtual Wall* MakeWall() const;

};

