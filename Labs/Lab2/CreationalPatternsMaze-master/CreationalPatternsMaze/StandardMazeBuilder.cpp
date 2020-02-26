#include "stdafx.h"
#include "StandardMazeBuilder.h"
#include "Maze.h"
#include "Door.h"
#include "Wall.h"

StandardMazeBuilder::StandardMazeBuilder():
    currentMaze(NULL)
{
}


StandardMazeBuilder::~StandardMazeBuilder()
{
}

void StandardMazeBuilder::BuildMaze() 
{
    currentMaze = new Maze();
}

Maze* StandardMazeBuilder::GetMaze() 
{
    return currentMaze;
}

void StandardMazeBuilder::BuildRoom(int roomNo) 
{
    if (currentMaze->RoomNo(roomNo) == NULL)
    {
        Room* room = new Room(roomNo);
        currentMaze->AddRoom(room);

        room->SetSide(North, new Wall());
        room->SetSide(South, new Wall());
        room->SetSide(East, new Wall());
        room->SetSide(West, new Wall());
    }
}

void StandardMazeBuilder::BuildDoor(int roomFrom, int roomTo) 
{
    Room* r1 = currentMaze->RoomNo(roomFrom);
    Room* r2 = currentMaze->RoomNo(roomTo);
    Door* door = new Door(r1, r2);

    //using CommonWall() as shown in the book would require
    //a change in the way rooms are built and since the point
    //of this exercise is to show creational design patterns
    //at work, we are going to keep things really simple
    r1->SetSide(East, door);
    r2->SetSide(West, door); 
}

