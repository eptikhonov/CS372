#pragma once

class Maze;

class MazeBuilder
{
public:
    virtual ~MazeBuilder();

    virtual void BuildMaze() {};
    virtual void BuildRoom(int roomNo) {};
    virtual void BuildDoor(int roomFrom, int roomTo) {};
    
    virtual Maze* GetMaze() {return 0;};

protected:
    MazeBuilder();
};

