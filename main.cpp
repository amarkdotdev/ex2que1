#include <iostream>
#include<cmath>
#include "PlanarPolygon.h"
using namespace std;

int main() {

    int numOfSides = 0;//starting out with zero
    char garbage;//for my char collection and sepration
    cout << "enter number of sides:" << endl;
    cin >> numOfSides;

    while (numOfSides < 3) {
        cout << "ERROR" << endl;
        cin >> numOfSides;                      //error checking, polygon must have at least 2 sides
    }


    //getting 1st polygon
    PlanarPolygon first(numOfSides);

    Point a;
    int x, y;
    cout << "enter the point values:" << endl;
    for (int i = 0; i < numOfSides; ++i) {
        cin >> garbage;
        cin>>x;
        cin>>garbage;
        cin>>y;
        cin >> garbage;

        a.setX(x);
        a.setY(y);
        first.addPoint(i, a);

    }



    cout << "enter number of sides:" << endl;
    cin >> numOfSides;

    while (numOfSides < 3) {
        cout << "ERROR" << endl;
        cin >> numOfSides;                      //error checking, polygon must have at least 2 sides
    }


    PlanarPolygon second(numOfSides);   //getting second polygon

    cout << "enter the point values:" << endl;
    for (int i = 0; i < numOfSides; ++i) {

        cin >> garbage;
        cin>>x;
        cin>>garbage;
        cin>>y;
        cin >> garbage;

        cin.ignore();
        a.setX(x);
        a.setY(y);

        second.addPoint(i, a);
    }


    if (first.compare(second))      //if this is true
        {
        cout << "perimeter.equal: " << round(first.PerimiterCalc()) << endl;
        }
    else
        {
        cout << "perimeter: " << round(first.PerimiterCalc()) << endl;
        cout << "perimeter: " << round(second.PerimiterCalc()) << endl;
        }


    return 0;
}