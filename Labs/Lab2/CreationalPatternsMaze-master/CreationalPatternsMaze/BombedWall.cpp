#include "stdafx.h"
#include "BombedWall.h"


BombedWall::BombedWall():
    bomb(true)
{
}

BombedWall::~BombedWall()
{
}

BombedWall::BombedWall(const BombedWall& other):
    Wall(other)
{
    bomb = other.bomb;
}

Wall* BombedWall::Clone() const
{
    return new BombedWall(*this);
}

bool BombedWall::HasBomb()
{
    return bomb;
}
