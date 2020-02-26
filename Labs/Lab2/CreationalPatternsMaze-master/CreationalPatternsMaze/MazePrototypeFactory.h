#pragma once

#include "MazeFactory.h"

class Maze;
class Room;
class Door;
class Wall;

//class to demonstrate Prototype pattern


class MazePrototypeFactory : public MazeFactory
{
public:
    MazePrototypeFactory(Maze* maze, Wall* wall, Room* room, Door* door);
    ~MazePrototypeFactory();

    virtual Maze* MakeMaze() const;
    virtual Room* MakeRoom(int roomNo) const;
    virtual Wall* MakeWall() const;
    virtual Door* MakeDoor(Room* r1, Room* r2) const;

private:
    Maze* prototypeMaze;
    Room* prototypeRoom;
    Wall* prototypeWall;
    Door* prototypeDoor;
};

