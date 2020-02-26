#pragma once

#include "Wall.h"

class BombedWall : public Wall
{
public:
    BombedWall();
    BombedWall(const BombedWall& other);
    ~BombedWall();

    virtual Wall* Clone() const;
    bool HasBomb();

private:
    bool bomb;
};

