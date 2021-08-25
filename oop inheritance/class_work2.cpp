#include <iostream>
 
using namespace std;
 
class Base{
    int x;
    public:
        Base(){
            cout << "Base default constructor"<<endl;
        }
};
 
class Derived:public Base{
    int y;
    public:
        Derived(){
            cout << "Derived Default constructor"<<endl;
        }
        Derived(int a){
            cout << "Derived Parameterized constructor"<<endl;
        }
};
 
int main(){
    Base b;
    Derived d;
    cout << "==================================="<<endl;
    Derived d2(10);
    return 0;
}