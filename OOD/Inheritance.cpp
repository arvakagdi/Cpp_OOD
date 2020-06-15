/* Inheritance class*/
/*
TODO:
    Add a new member variable to class Vehicle.
    Output that new member in main().
    Derive a new class from Vehicle, alongside Car and Bicycle.
    Instantiate an object of that new class.
    Print the object.
*/

#include <iostream>
#include <string>
using std::string;

class Vehicle {
public:
    int wheels = 0;
    string color = "blue";
    int doors{};
    
    void Print() const
    {
        std::cout << "This " << color << " vehicle has " << wheels << " wheels!\n";
    }
};

class Car : public Vehicle {
public: 
    bool sunroof = false;
};

class Scooter : private Vehicle {
public:
    string whatcolor(){return color = "Jamuni scooter";}
    bool electric = false;
};

class Bicycle : protected Vehicle {
public:
    bool kickstand = true;
    void Says(){Print();}
};

class Truck: private Vehicle{
    public:
    bool sound = true;
    void Says(){Print();}

};

int main() 
{
    Car car;
    car.wheels = 4;
    car.sunroof = true;
    car.Print();
    if(car.sunroof)
        std::cout << "And a sunroof!\n";
    
    Truck truck;
    // truck.wheels = 6;     //can be used if Vehicle is not private to truck
    // truck.doors = 2;
    // truck.color = "brown";
    truck.sound = true;
    truck.Says();
    if (truck.sound){
        std::cout << "My truck makes sound!!\n";
    }
    Scooter scooter;
    std::cout<< scooter.whatcolor() << "\n";
    Bicycle bi;
    bi.Says();

};