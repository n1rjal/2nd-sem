#include<iostream>
using namespace std;


class AbstractPureClass{
    public:
        virtual void print() = 0;
};

class Base: public AbstractPureClass{
    public:
        
        void print(){
            cout << "Base" << endl;
        }
};

int main(){
    Base b1;
    b1.print();
}