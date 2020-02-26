#pragma once

#include "MazeBuilder.h"
#include "Room.h"

class Maze;

class StandardMazeBuilder : public MazeBuilder
{
public:
    StandardMazeBuilder();
    ~StandardMazeBuilder();

    virtual void BuildMaze();
    virtual void BuildRoom(int roomNo);
    virtual void BuildDoor(int roomFrom, int roomTo);
    
    virtual Maze* GetMaze();

private:
    Direction CommonWall(Room* r1, Room* r2);
    Maze* currentMaze;
};

