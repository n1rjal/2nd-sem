#include <iostream>
using namespace std;

class Bar{
    public:
        void print(){
            cout << "Bar called"<<endl;
        }
};

class Foo:public Bar{
    public:
        void print(){
            cout << "Foo called"<<endl;
        }
};

int main(){
    Foo f1;
    f1.print();
}