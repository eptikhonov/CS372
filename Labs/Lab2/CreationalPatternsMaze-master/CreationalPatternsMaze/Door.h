#pragma once

#include "Mapsite.h"

class Room;

class Door : public Mapsite
{
public:
    Door(Room* room1 = NULL, Room* room2 = NULL);
    Door(const Door& other);
    ~Door();

    virtual void Initialize(Room* r1, Room* r2);
    virtual Door* Clone() const;
    virtual void Enter() {};
    Room* OtherSideFrom(Room* room);

private:
    Room* room1;
    Room* room2;
    bool isOpen;
};

