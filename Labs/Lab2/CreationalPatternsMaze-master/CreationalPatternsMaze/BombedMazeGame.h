#pragma once

#include "MazeGame.h"

class Room;
class Wall;

//class to demonstrate Factory Method pattern

class BombedMazeGame : public MazeGame
{
public:
    BombedMazeGame();
    ~BombedMazeGame();

    virtual Room* MakeRoom(int roomNo) const;
    virtual Wall* MakeWall() const;

};

