#include "stdafx.h"
#include "RoomWithATrap.h"
#include "Trap.h"

RoomWithATrap::RoomWithATrap(int roomNo, Trap* trap) :
    Room(roomNo),
    trap(trap)
{
}

RoomWithATrap::~RoomWithATrap()
{
    delete trap;
}

RoomWithATrap::RoomWithATrap(const RoomWithATrap& other) :
    Room(other)
{
    trap = other.trap;
}

void RoomWithATrap::Initialize(int roomNo)
{
    Room::Initialize(roomNo);
    trap = new Trap();
}

Room* RoomWithATrap::Clone() const
{
    return new RoomWithATrap(*this);
}
