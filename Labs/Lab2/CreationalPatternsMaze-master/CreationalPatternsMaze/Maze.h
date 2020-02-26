#pragma once

#include <map>

class Room;

class Maze
{
public:
    Maze();
    Maze(const Maze& other);
    virtual ~Maze();

    virtual Maze* Clone() const;
    void AddRoom(Room* room);
    Room* RoomNo(int roomNo) const;

private:
    std::map<int, Room*> rooms;
};

