#pragma once

#include "Mapsite.h"

class Wall : public Mapsite
{
public:
    Wall();
    Wall(const Wall& other);
    ~Wall();

    virtual Wall* Clone() const;
    virtual void Enter() {};
};

