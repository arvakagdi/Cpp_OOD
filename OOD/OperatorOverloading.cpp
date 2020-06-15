// Examples of overloading '+' and '()' operators

#include<iostream>
#include<vector>
#include<cassert>

class Matrix{
    public:
    Matrix(int rows, int columns):rows_(rows), columns_(columns),values_(rows*columns){}

    //mutator
    int& operator()(int row, int column){
        return values_[row*columns_ + column];
    }
    //Accessor
    int operator()(int row, int column)const{
        return values_[row*columns_ + column];
    }

    int operator+(){}

    private:
    std::vector<int> values_;
    int rows_;
    int columns_;
};


class Point{
    public:
    Point(int x=0, int y=0):x_(x), y_(y){}
    Point operator+(const Point &point2){
        Point p;
        p.x_ = point2.x_ + this->x_;
        p.y_ = point2.y_ + this->y_;

        return p;

    }
    int x_{};
    int y_{};
};



int main(){
    Matrix matrix1(2,2);
    matrix1(0,0) = 5;
    matrix1(0,1) = 8;
    assert(matrix1(0,0) == 5);
    std:: cout << matrix1(0,1) << "\n";


    Point p1(10, 5), p2(2, 4);
    Point p3 = p1 + p2; // An example call to "operator +";
    assert(p3.x_ == p1.x_ + p2.x_);
    assert(p3.y_ == p1.y_ + p2.y_);
}