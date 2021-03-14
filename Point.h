#include <iostream>
#ifndef EX1QUE3_POINT_H
#define EX1QUE3_POINT_H
#include<cmath>


using namespace std;



#pragma once
class Point
{
private:
    int x;
    int y;
public:
    void setX(int myX);
    void setY(int myY);
    int getX();
    int getY();

    float distance(Point second);
};



#endif //EX2QUE1_POINT_H
