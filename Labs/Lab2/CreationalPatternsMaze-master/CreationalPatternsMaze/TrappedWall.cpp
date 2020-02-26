#include "stdafx.h"
#include "TrappedWall.h"

TrappedWall::TrappedWall() :
    trap(true)
{
}

TrappedWall::~TrappedWall()
{
}

TrappedWall::TrappedWall(const TrappedWall& other) :
    Wall(other)
{
    trap = other.trap;
}

Wall* TrappedWall::Clone() const
{
    return new TrappedWall(*this);
}

bool TrappedWall::HasTrap()
{
    return trap;
}
