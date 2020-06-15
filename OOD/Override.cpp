/*
"Overriding" a function occurs when a derived class defines the 
implementation of a virtual function that it inherits from a base class.
*/

// Vehicle motion model

#include <assert.h>
#include <cmath>

#define PI 3.14159
#define LOG(x) std::cout << x << std::endl;


// Declare abstract class VehicleModel
class VehicleMOdel{
    public:
    virtual double Move(double,double) = 0;
};

// Derive class ParticleModel from VehicleModel
class ParticleModel: public VehicleMOdel{
public:
double Move(double v, double phi) override{

theta += phi;
x += v * cos(theta);
y += v * cos(theta);

}
double x;
double y;
double theta;

};


//Derive class BicycleModel from ParticleModel
class BicycleModel : public ParticleModel{
public:
double Move(double v, double phi) override{
theta += v / L * tan(phi);
x += v * cos(theta);
y += v * cos(theta);   
}

double L = 1;

};
  // TODO: Override the Move() function
  // TODO: Define L

// TODO: Pass the tests
int main() {
  // Test function overriding
  ParticleModel particle;
  BicycleModel bicycle;
  particle.Move(10, PI / 9);
  bicycle.Move(10, PI / 9);
  assert(particle.x != bicycle.x);
  assert(particle.y != bicycle.y);
  assert(particle.theta != bicycle.theta);
}