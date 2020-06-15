// Example solution for Shape inheritance


#include <assert.h>
#include <cmath>
#define pi 3.14159;

// TODO: Define the abstract class Shape
class Shape{
public:
//public virtual functions Area() and Perimeter()
virtual double Area() const = 0;
virtual double Perimeter() const = 0;   //the declarations with = 0 to specify pure virtual functions
};
 
// TODO: Define Rectangle to inherit publicly from Shape
class Rectangle:public Shape{
public:
Rectangle(int width, int height): width_(width),height_(height){}   //constructor

//Overriding virtual base class functions Area() and Perimeter()
double Area()const override{          //writing override is not necessary, just a good practise
    return width_*height_;
}

double Perimeter()const override{
    return 2*(width_ + height_);
}

private:
int width_{};
int height_{};
};


class Circle:public Shape{
public:
Circle(double radius): radius_(radius){} //constructor

//Overriding virtual base class functions Area() and Perimeter()
double Area() const override{
    return pow(radius_,2)*pi;
}

double Perimeter()const override{
    return 2*radius_* pi;
}
private:
double radius_{};
};
 
// Test in main()
int main() {
  double epsilon = 0.1; // useful for floating point equality

  // Test circle
  Circle circle(12.31);
  assert(abs(circle.Perimeter() - 77.35) < epsilon);
  assert(abs(circle.Area() - 476.06) < epsilon);

  // Test rectangle
  Rectangle rectangle(10, 6);
  assert(rectangle.Perimeter() == 32);
  assert(rectangle.Area() == 60);
}