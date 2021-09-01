#include <iostream>
using namespace std;

class Base{
    public:
         void print(){
            cout << "Hello from base"<<endl;
        }
};

class Derived: public Base{
    public:
        void print(){
            cout << "Hello from derived"<<endl;
        }
};

void print(Base *b){
    b->print();
}

int main(){
    Derived d1;
    Base b1;
    print(&b1);
    print(&d1);
}