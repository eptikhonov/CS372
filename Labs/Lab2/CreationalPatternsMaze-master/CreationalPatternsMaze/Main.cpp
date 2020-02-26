// Main.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

#include <iostream>

#include "MazeGame.h"
#include "BombedMazeGame.h"
#include "TrappedMazeGame.h"
#include "StandardMazeBuilder.h"
#include "CountingMazeBuilder.h"
#include "MazePrototypeFactory.h"
#include "BombedMazeFactory.h"
#include "Maze.h"
#include "Wall.h"
#include "Room.h"
#include "Door.h"
#include "Bomb.h"
#include "Trap.h"

using namespace std;

void TrappedMazGameTest()
{
    TrappedMazeGame game;
    Maze* maze = game.CreateMazeUsingTraps();

    //clean up
    delete maze;
}

void AbstractFactoryTest()
{
    MazeGame game;
    BombedMazeFactory factory;
    Maze* maze = game.CreateMaze(factory);

    //clean up
    delete maze;
}

void StandardMazeBuilderTest()
{
    Maze* maze;
    MazeGame game;
    StandardMazeBuilder builder;
    game.CreateMaze(builder);
    maze = builder.GetMaze();

    //clean up
    delete maze;
}

void CountingMazeBuilderTest()
{
    int rooms, doors;
    MazeGame game;
    CountingMazeBuilder builder;
    Maze* maze = game.CreateMaze(builder);
    builder.GetCounts(rooms, doors);

    cout<< "The maze has "
        << rooms << " rooms and "
        << doors << " doors" << endl;

    //clean up
    delete maze;
}

void PrototypeTest ()
{
    MazeGame game;
    MazePrototypeFactory simpleMazeFactory(
        new Maze(), new Wall(), new Room(), new Door());
    Maze* maze = game.CreateMaze(simpleMazeFactory);

    //clean up
    delete maze;
}


int _tmain(int argc, _TCHAR* argv[])
{
    TrappedMazGameTest();
    //AbstractFactoryTest();
    //StandardMazeBuilderTest();
    //CountingMazeBuilderTest();
    //PrototypeTest();

	return 0;
}

