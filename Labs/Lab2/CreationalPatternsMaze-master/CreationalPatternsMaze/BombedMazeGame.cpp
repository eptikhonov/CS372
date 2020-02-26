#include "stdafx.h"
#include "BombedMazeGame.h"
#include "BombedWall.h"
#include "RoomWithABomb.h"
#include "Bomb.h"

BombedMazeGame::BombedMazeGame()
{
}


BombedMazeGame::~BombedMazeGame()
{
}

Room* BombedMazeGame::MakeRoom(int roomNo) const
{
    return new RoomWithABomb(roomNo, new Bomb());
}

Wall* BombedMazeGame::MakeWall() const
{
    return new BombedWall();
}
