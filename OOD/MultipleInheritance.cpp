#include <iostream>
#include <string>
#include <assert.h>

class Living{
    public:
    virtual void Speak () = 0;
};

class Animal: public Living {
public:
    double age;
    void Speak() override {}
};

class Pet : public Living{
public:
    std::string name;
    void Speak() override {}

};

// Dog derives from *both* Animal and Pet
class Dog : public Animal, public Pet {
public:
    std::string breed;
};

class Cat : public Animal, public Pet{
  public:
    std::string  color {"Black"};
};

int main()
{
    Cat cat;
    cat.age = 50;
    cat.name = "Nalayak Rishi";
    assert(cat.color == "Black");
    assert(cat.age == 50);
    assert(cat.name == "Nalayak Rishi");
}