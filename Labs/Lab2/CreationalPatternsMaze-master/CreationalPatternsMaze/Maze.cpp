#include "stdafx.h"
#include "Maze.h"
#include "Room.h"

Maze::Maze()
{
}

Maze::~Maze()
{
    for (auto it = rooms.begin(); it != rooms.end(); it++)
    {
        delete it->second;
    }
    rooms.erase(rooms.begin(), rooms.end());
}

Maze::Maze(const Maze& other)
{
    //note that this is shallow copy - the rooms are not actually copied
    rooms = other.rooms;
}

void Maze::AddRoom(Room* room)
{
    rooms[room->GetRoomNumber()] = room;
}

Room* Maze::RoomNo(int roomNo) const
{
    std::map<int, Room*>::const_iterator it = rooms.find(roomNo);
    if (it == rooms.end())
        return NULL;
    else
        return it->second;
}

Maze* Maze::Clone() const
{
    return new Maze(*this);
}