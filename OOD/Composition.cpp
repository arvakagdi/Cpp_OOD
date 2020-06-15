/*
Composition is a closely related alternative to inheritance. 
Composition involves constructing ("composing") classes from other classes, 
instead of inheriting traits from a parent class.

A common way to distinguish "composition" from "inheritance" is to think 
about what an object can do, rather than what it is. 
This is often expressed as "has a" versus "is a". 
*/


#include<iostream>
#include <math.h>
#include<cassert>

#define pi 3.14159

class LineSegment{
public:
LineSegment(): length(3){}
    float length{};
};

class Circle{
public:
    Circle(): radius(LineSegment()){}
    LineSegment radius;
    
    double Area(){
        return pow(radius.length,2)*pi;
    }

};

int main() 
{
    Circle circle;
    std:: cout<< circle.Area(); 
}

