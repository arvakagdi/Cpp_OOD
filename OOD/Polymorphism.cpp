/*
Polymorphism is means "assuming many forms".

In the context of object-oriented programming, 
polymorphism) describes a paradigm in which a function may behave differently depending on how it is called. 
In particular, the function will perform differently based on its inputs.

Polymorphism can be achieved in two ways in C++: overloading and overriding. 
In this exercise we will focus on overloading.
*/
/*
    Create a function hello() that outputs, "Hello, World!"
    Create a class Human.
    Overload hello() by creating a function hello(Human human). This function should output, "Hello, Human!"
    Create 2 more classes and use those classes to further overload the hello() function.

*/
#include <iostream>

void hello(){std::cout << "Hello, World!\n";}

class Human{};

class Cat{};

class Table{
    public:
    void hello(){std::cout << "Hello Table Wablee\n";}
};

void hello(Human human){std::cout << "Hello, you stupid human!\n";}
void hello(Cat cat){std::cout << "Hello cattiiee!!\n";}


int main(){
    hello();
    hello(Human());
    hello(Cat());
    Table table;
    table.hello();

}