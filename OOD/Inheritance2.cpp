/*Multi-level inheritance is term used for chained classes in an inheritance tree. */

#include <cassert>
#include <iostream>
#include <string>

// TODO: Declare Vehicle as the base class
class Vehicle{
    public:
    int wheels{};
    int seats{};
};

// TODO: Derive Car from Vehicle
class Car: public Vehicle{
    public:
    std::string color = "Black";
};
// TODO: Derive Sedan from Car  
class Sedan : public Car{
    public:
    bool trunk{};
};

// TODO: Update main to pass the tests
int main() {
  Sedan sedan;
  sedan.trunk = true;
  sedan.seats = 4;
  sedan.wheels = 4;
  assert(sedan.trunk == true);
  assert(sedan.seats == 4);
  assert(sedan.wheels == 4);
}