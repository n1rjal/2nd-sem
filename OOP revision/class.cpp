#include <iostream>
using namespace std;

class Circle{
    private:
        double radius;
    public:
        Circle(double r){
            radius = r;
        }
        double getArea(){
            return 3.14 * radius * radius;
        }
        double getCircumference(){
            return 2 * 3.14 * radius;
        }
};

int main(){
    Circle c1(7.12), c2(9.81);
    cout << "Circle 1 area is "<< c1.getArea()<<endl;
    cout << "Circle 1 circumference is "<< c1.getCircumference()<<endl;    
    cout << "Circle 2 area is "<< c2.getArea()<<endl;
    cout << "Circle 2 circumference is "<< c2.getCircumference()<<endl;
    return 0;
}