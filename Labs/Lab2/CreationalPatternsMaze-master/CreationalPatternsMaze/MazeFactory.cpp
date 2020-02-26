#include "stdafx.h"
#include "MazeFactory.h"
#include "Maze.h"
#include "Room.h"
#include "Wall.h"
#include "Door.h"

MazeFactory::MazeFactory()
{
}


MazeFactory::~MazeFactory()
{
}

Maze* MazeFactory::MakeMaze() const
{
    return new Maze();
}

Wall* MazeFactory::MakeWall() const
{
    return new Wall();
}

Room* MazeFactory::MakeRoom(int roomNo) const
{
    return new Room(roomNo);
}

Door* MazeFactory::MakeDoor(Room* r1, Room* r2) const
{
    return new Door(r1, r2);
}
