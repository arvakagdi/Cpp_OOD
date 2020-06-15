#include<iostream>
#include<string>


class Animal{
public:
std::string color{};
std::string name{};
int age{};
};

class Snake: public Animal{
public:
    int length{};
    std::string MakeSound(){return "Hisss!!!";}
};

class Cat: public Animal{
public:
int height{};
std::string MakeSound(){return "Meow!!!";}

};

int main(){
    Snake parikshit;
    parikshit.age = 100;
    parikshit.color = "Black";
    parikshit.length = 120;
    std::cout << parikshit.MakeSound();

    Cat cat;
    std::cout << cat.MakeSound();
}