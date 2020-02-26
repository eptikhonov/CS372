#pragma once

class Maze;
class MazeFactory;
class MazeBuilder;
class Room;
class Wall;
class Door;

class MazeGame
{
public:
    MazeGame();
    virtual ~MazeGame();

    Maze* CreateMaze();

    //for Abstract Factory pattern
    Maze* CreateMaze(MazeFactory& factory);

    //for Builder pattern
    Maze* CreateMaze(MazeBuilder& builder);

    //for Factory Method pattern
    virtual Maze* MakeMaze() const;
    virtual Room* MakeRoom(int roomNo) const;
    virtual Wall* MakeWall() const;
    virtual Door* MakeDoor(Room*r1, Room* r2) const;

    Maze* CreateMazeUsingFactoryMethods();
};

