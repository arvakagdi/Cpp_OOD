/*Classes are the building blocks of object oriented programming in C++. 
Templates support the creation of generic classes!

Class templates can declare and implement generic attributes for use by generic methods. 
These templates can be very useful when building classes that will serve multiple purposes.*/

#include <assert.h>
#include <string>
#include <sstream>
#include <iostream>

// Add the correct template specification "KeyType and ValueType"
template <typename KeyType, typename ValueType> 

class Mapping {
public:
  Mapping(KeyType key, ValueType value) : key(key), value(value) {}
  std::string Print() const {
    std::ostringstream stream;
    stream << key << ": " << value;
    return stream.str();
  }
  KeyType key;
  ValueType value;
};

// Test
int main() {
  Mapping<std::string, int> mapping("age", 20);
  Mapping<std::string, std::string> mapping2("Arva says", "hello");
  std::cout << mapping2.Print();
  assert(mapping.Print() == "age: 20");
}