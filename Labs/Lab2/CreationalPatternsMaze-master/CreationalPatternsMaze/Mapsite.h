#pragma once

enum Direction {North, South, East, West};

class Mapsite
{
public:
    virtual ~Mapsite() {};

    virtual void Enter() = 0;
};

