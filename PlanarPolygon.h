//
// Created by Aaron Mark on 10/03/2021.
//

#ifndef EX2QUE1_PLANARPOLYGON_H
#define EX2QUE1_PLANARPOLYGON_H
#include "Point.h"
using namespace std;


class PlanarPolygon {

    Point * arrayOfPoints;
    int numOfPoints;

public:

    PlanarPolygon();
    PlanarPolygon(int nop);//defalt constructor
    PlanarPolygon(const PlanarPolygon &obj);// copy constructor
    ~PlanarPolygon();//destructor



    void addPoint(int index, Point pnt);

    float PerimiterCalc();

    bool compare(PlanarPolygon poly2);

};


#endif //EX2QUE1_PLANARPOLYGON_H
