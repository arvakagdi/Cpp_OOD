// Example solution for Rectangle and Square friend classes
#include <assert.h> 

// Declare class Rectangle
class Rectangle;


// Define class Square as friend of Rectangle
class Square{
    public:
    Square(int side):side_(side){}
    private:
    friend class Rectangle;
    int side_{};       // Add private attribute side
};

class Rectangle{
public:
  Rectangle(const Square &a):width(a.side_), height(a.side_){}
  int Area()const;
private:
  int width{};
  int height{};
};
    
int Rectangle::Area() const{
    return width*height;
}
int main()
{
    Square square(4);
    Rectangle rectangle(square);
    assert(rectangle.Area() == 16); 
}