#pragma once

#include "Mapsite.h"

class Room : public Mapsite
{
public:
    Room(int roomNo = 0);
    Room(const Room& other);
    virtual ~Room();

    virtual void Initialize(int roomNo);
    virtual Room* Clone() const;
    int GetRoomNumber () const;
    Mapsite* GetSide(Direction direction) const;
    void SetSide(Direction direction, Mapsite* mapsite);

    virtual void Enter() {};

private:
    Mapsite* sides[4];
    int roomNumber;
};

