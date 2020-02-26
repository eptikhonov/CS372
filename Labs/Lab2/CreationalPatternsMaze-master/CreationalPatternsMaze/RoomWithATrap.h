#pragma once

#include "Room.h"
#include "Trap.h"

class Bomb;

class RoomWithATrap : public Room
{
public:
    RoomWithATrap(int roomNo = 0, Trap* trap = NULL);
    RoomWithATrap(const RoomWithATrap& other);
    ~RoomWithATrap();

    virtual void Initialize(int roomNo);
    virtual Room* Clone() const;


private:
    Trap* trap;
};



