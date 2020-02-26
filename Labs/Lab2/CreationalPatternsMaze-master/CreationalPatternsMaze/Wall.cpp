#include "stdafx.h"
#include "Wall.h"


Wall::Wall()
{
}

Wall::~Wall()
{
}

Wall::Wall(const Wall& other)
{
}

Wall* Wall::Clone() const
{
    return new Wall(*this);
}

