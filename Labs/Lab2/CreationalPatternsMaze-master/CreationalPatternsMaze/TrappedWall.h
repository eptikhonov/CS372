#pragma once

#include "Wall.h"

class TrappedWall : public Wall
{
public:
    TrappedWall();
    TrappedWall(const TrappedWall& other);
    ~TrappedWall();

    virtual Wall* Clone() const;
    bool HasTrap();

private:
    bool trap;
};

