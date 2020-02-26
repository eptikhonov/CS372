#include "stdafx.h"
#include "RoomWithABomb.h"
#include "Bomb.h"

RoomWithABomb::RoomWithABomb(int roomNo, Bomb* bomb):
    Room(roomNo),
    bomb(bomb)
{
}

RoomWithABomb::~RoomWithABomb()
{
    delete bomb;
}

RoomWithABomb::RoomWithABomb(const RoomWithABomb& other):
    Room(other)
{
    bomb = other.bomb;
}

void RoomWithABomb::Initialize(int roomNo)
{
    Room::Initialize(roomNo);
    bomb = new Bomb();
}

Room* RoomWithABomb::Clone() const
{
    return new RoomWithABomb(*this);
}
