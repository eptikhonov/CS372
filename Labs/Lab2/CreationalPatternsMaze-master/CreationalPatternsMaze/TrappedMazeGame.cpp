#include "stdafx.h"
#include "TrappedMazeGame.h"
#include "TrappedWall.h"
#include "RoomWithATrap.h"
#include "Trap.h"

TrappedMazeGame::TrappedMazeGame()
{
}


TrappedMazeGame::~TrappedMazeGame()
{
}

Room* TrappedMazeGame::MakeRoom(int roomNo) const
{
    return new RoomWithATrap(roomNo, new Trap());
}

Wall* TrappedMazeGame::MakeWall() const
{
    return new TrappedWall();
}
