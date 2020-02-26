#include "stdafx.h"
#include "Room.h"


Room::Room(int roomNo):roomNumber(roomNo)
{
}

Room::Room(const Room& other)
{
    //note that this is a shallow copy
    roomNumber = other.roomNumber;
    for (int i = 0; i < 4; i++)
    {
        sides[i] = other.sides[i];
    }
}

Room::~Room()
{
}

void Room::Initialize(int roomNo)
{
    roomNumber = roomNo;
}

Room* Room::Clone() const
{
    return new Room(*this);
}

int Room::GetRoomNumber() const
{
    return roomNumber;
}

Mapsite* Room::GetSide(Direction direction) const
{
    return sides[direction];
}

void Room::SetSide(Direction direction, Mapsite* mapsite)
{
    sides[direction] = mapsite;
}
