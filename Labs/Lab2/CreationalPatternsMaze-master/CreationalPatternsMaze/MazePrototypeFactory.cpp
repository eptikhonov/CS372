#include "stdafx.h"
#include "MazePrototypeFactory.h"
#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"

MazePrototypeFactory::MazePrototypeFactory(Maze* maze, Wall* wall, Room* room, Door* door):
    prototypeMaze(maze),
    prototypeWall(wall),
    prototypeRoom(room),
    prototypeDoor(door)
{
}


MazePrototypeFactory::~MazePrototypeFactory()
{
    delete prototypeDoor;
    delete prototypeRoom;
    delete prototypeWall;
    delete prototypeMaze;
}

Maze* MazePrototypeFactory::MakeMaze() const
{
    return prototypeMaze->Clone();
}

Wall* MazePrototypeFactory::MakeWall() const
{
    return prototypeWall->Clone();
}

Room* MazePrototypeFactory::MakeRoom(int roomNo) const
{
    Room* room = prototypeRoom->Clone();
    room->Initialize(roomNo);
    return room;
}

Door* MazePrototypeFactory::MakeDoor(Room* r1, Room* r2) const
{
    Door* door = prototypeDoor->Clone();
    door->Initialize(r1, r2);
    return door;
}
