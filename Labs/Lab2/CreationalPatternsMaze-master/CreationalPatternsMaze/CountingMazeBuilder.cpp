#include "stdafx.h"
#include "CountingMazeBuilder.h"
#include "Maze.h"
#include "Door.h"
#include "Wall.h"

CountingMazeBuilder::CountingMazeBuilder():
    rooms(0),
    doors(0)
{
}


CountingMazeBuilder::~CountingMazeBuilder()
{
}

void CountingMazeBuilder::BuildMaze() 
{
}

void CountingMazeBuilder::BuildRoom(int roomNo) 
{
    rooms++;
}

void CountingMazeBuilder::BuildDoor(int roomFrom, int roomTo) 
{
    doors++;
}

void CountingMazeBuilder::GetCounts(int& nRooms, int& nDoors) const
{
    nRooms = rooms;
    nDoors = doors;
}