#pragma once

#include "Room.h"

class Bomb;

class RoomWithABomb : public Room
{
public:
    RoomWithABomb(int roomNo = 0, Bomb* bomb = NULL);
    RoomWithABomb(const RoomWithABomb& other);
    ~RoomWithABomb();

    virtual void Initialize(int roomNo);
    virtual Room* Clone() const;


private:
    Bomb* bomb;
};

