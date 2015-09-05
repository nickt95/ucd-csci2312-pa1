//
// Created by Nick Thomason on 9/4/15.
//

#include "Point.h"
#include <cmath>
#include <iostream>
#include <iomanip>

using namespace std;

double computeArea(Point &a,Point &b,Point &c){
    //Find side lengths
    double sideA = b.distanceTo(c);
    double sideB = c.distanceTo(a);
    double sideC = a.distanceTo(b);

    //Find semiperimeter
    double semiPer = (sideA+sideB+sideC)/2.0;

    //Return area as found by Heron's formula
    return sqrt(semiPer*(semiPer-sideA)*(semiPer-sideB)*(semiPer-sideC));
}

int main(void) {
    //set precision of double
    cout << fixed << setprecision(2);

    //initialize temporary variables
    double tempX, tempY, tempZ;

    //ask user for the first point of the triangle
    cout << "What is the X-position of point A?" << endl;
    cin >> tempX;
    cout << "What is the Y-position of point A?" << endl;
    cin >> tempY;
    cout << "What is the Z-position of point A?" << endl;
    cin >> tempZ;
    Point a(tempX, tempY, tempZ);

    //ask user for the second point of the triangle
    cout << "What is the X-position of point B?" << endl;
    cin >> tempX;
    cout << "What is the Y-position of point B?" << endl;
    cin >> tempY;
    cout << "What is the Z-position of point B?" << endl;
    cin >> tempZ;
    Point b(tempX, tempY, tempZ);

    //ask user for the third point of the triangle
    cout << "What is the X-position of point C?" << endl;
    cin >> tempX;
    cout << "What is the Y-position of point C?" << endl;
    cin >> tempY;
    cout << "What is the Z-position of point C?" << endl;
    cin >> tempZ;
    Point c(tempX, tempY, tempZ);

    //print the area of the triangle
    cout << "The area of the triangle is " << computeArea(a,b,c) << "unit(s)." << endl;

    //end program
    return 0;
}
