//
// Created by Aaron Mark on 10/03/2021.
//

#include "PlanarPolygon.h"


using namespace std;
PlanarPolygon::PlanarPolygon(int nop){ //  ctor


    arrayOfPoints=new Point[nop];
    cout << "in constructor" << endl;
    numOfPoints=nop;
}




void PlanarPolygon::addPoint(int index, Point pnt) {

    int x,y;
    x=pnt.getX();
    y=pnt.getY();

    arrayOfPoints[index].setX(x);
    arrayOfPoints[index].setY(y);

}

float PlanarPolygon::PerimiterCalc() {
    float dist=0;

    for (int i = 0; i < numOfPoints-1; ++i) {

        dist=dist+arrayOfPoints[i].distance(arrayOfPoints[i+1]);
    }

    return dist;

}


PlanarPolygon::PlanarPolygon(const PlanarPolygon &obj) {

    cout << "in copy-constructor"<<endl;
    numOfPoints=obj.numOfPoints;

    arrayOfPoints=new Point[numOfPoints];

    for (int i = 0; i < numOfPoints; ++i) {
        arrayOfPoints[i]=obj.arrayOfPoints[i];
    }

}

PlanarPolygon::~PlanarPolygon() {
cout<<"in destructor"<<endl;

if (numOfPoints!=0)
{
    delete[]arrayOfPoints;
}

}


bool PlanarPolygon ::compare(PlanarPolygon poly2) {

    //check if polygons are the same

    int counter=0;
    if(numOfPoints==poly2.numOfPoints){
    for (int i = 0; i < numOfPoints; ++i) {
        for (int j = 0; j < numOfPoints; ++j) {
            if (arrayOfPoints[i].getX()==poly2.arrayOfPoints[j].getX() && arrayOfPoints[i].getY()==poly2.arrayOfPoints[j].getY())
            {
                //we have a match
                counter++;
                break;
            }
        }
        }

    if (counter==numOfPoints)
        return true;
    return false;

    }


}

PlanarPolygon::PlanarPolygon() {

}



