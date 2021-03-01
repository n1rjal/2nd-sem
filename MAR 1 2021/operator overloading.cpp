

#include <iostream>
using namespace std;

class Point{
    public:
        int value;
    void operator ++(int){
        this->value++;
    }
    void operator ++ (){
        this->value++;
    }
};

int main(){
    Point p1;
    p1.value=4;
    p1++;
    cout << p1.value <<endl;
    ++p1;
    cout << p1.value <<endl;
}