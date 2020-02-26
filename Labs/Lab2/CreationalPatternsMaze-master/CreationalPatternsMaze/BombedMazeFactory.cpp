#include "stdafx.h"
#include "BombedMazeFactory.h"
#include "RoomWithABomb.h"
#include "BombedWall.h"
#include "Bomb.h"

BombedMazeFactory::BombedMazeFactory()
{
}


BombedMazeFactory::~BombedMazeFactory()
{
}

Room* BombedMazeFactory::MakeRoom(int roomNo) const
{
    return new RoomWithABomb(roomNo, new Bomb());
}

Wall* BombedMazeFactory::MakeWall() const
{
    return new BombedWall();
}

