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

class Base:public PrivatePart{              //   proteced part is inheritated by the derived class but not by the obect od the derived class 
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