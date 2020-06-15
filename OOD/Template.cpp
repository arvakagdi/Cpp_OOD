// Generic Programming
/* Templete enables generic programming to generalize a function that can be applied to any class.
Specifically templates uses types as parameter so that the same implementation can operate on any data type*/

#include<cassert>

template <typename T>
T Sum(T a, T b){
    return a+b;
}

template <typename T> T Max(T a, T b){
    return a > b ? a:b;
}

int main(){
    assert(Sum<int> (10,100) == 110);
    assert(Max<int>(10,500) == 500);
    assert(Max<char>('A','Z') ==  'Z');
}