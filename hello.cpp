#include <iostream>
using namespace std;

class PrivatePart{
    protected:
        int a=18;
    public:
        void showA(){
            cout << a<< endl;
        }
    
};

class Base:public PrivatePart{
    public:
     void showA(){
         PrivatePart::showA();
         cout << this->a<<endl;
     }
    protected:
        string queens = "mercury";
};

int main(){
    Base b1;
    b1.Base::showA();
    cout << b1.a<endl;
}