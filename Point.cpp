#include "Point.h"


using namespace std;

void Point::setX(int myX){
    x=myX;          //regular initialization of a setter
}

void Point::setY(int myY) {
    y=myY;           //regular initialization of a setter
}

int Point::getX(){
    return x;   //regular initialization of a getter
}
int Point::getY() {
    return y;       //regular initialization of a getter
}

float Point::distance(Point second) {

   return sqrt(pow(x-second.getX(),2)+pow(y-second.getY(),2));
    //this is the distance calculation


}

