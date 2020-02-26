#pragma once

#include "MazeBuilder.h"
#include "Room.h"

class Maze;

class CountingMazeBuilder : public MazeBuilder
{
public:
    CountingMazeBuilder();
    ~CountingMazeBuilder();

    virtual void BuildMaze();
    virtual void BuildRoom(int roomNo);
    virtual void BuildDoor(int roomFrom, int roomTo);
    
    void GetCounts(int& rooms, int& doors) const;

private:
    int doors;
    int rooms;
};

