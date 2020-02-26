#include "stdafx.h"
#include "TrappedMazeFactory.h"
#include "RoomWithATrap.h"
#include "TrappedWall.h"
#include "Trap.h"

TrappedMazeFactory::TrappedMazeFactory()
{
}


TrappedMazeFactory::~TrappedMazeFactory()
{
}

Room* TrappedMazeFactory::MakeRoom(int trapNo) const
{
    return new RoomWithATrap(trapNo, new Trap());
}

Wall* TrappedMazeFactory::MakeWall() const
{
    return new TrappedWall();
}
