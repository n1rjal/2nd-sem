#include <iostream>
#define pi 3.142
using namespace std;

class Circle{
    private:

    public:
    int radius; 

    Circle(int radius_given){
        radius = radius_given;
    }
    
    void input_radius(){
        cout << "Enter the value of radius"<<endl;
        cin >> radius;
    }
    
    void display_area(){
        float area = pi * radius * radius;
        cout << "The area is "<< area <<endl;
    }

    void display_circumference(){
        float circum = 2 * pi * radius;
        cout << "The circumferencce is "<< circum <<endl;
    }
};

int main(){
    int r = 23;
    Circle c1 = r;
    cout << c1.radius<<endl;
    c1.display_area();
    c1.display_circumference();
}