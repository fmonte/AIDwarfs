#ifndef PLACE_H
#define PLACE_H
#include "Vector2.h"

class Place
{
public:
    Place(Vector2 pos = Vector2::ZERO);
    ~Place();

    void setPosition(){}
    const Vector2 getPosition()const{return m_position;}

    Vector2 m_position;
};

#endif // PLACE_H
