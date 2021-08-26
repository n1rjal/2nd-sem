#include <iostream>
using namespace std;

class Base{
    public:
    virtual ~Base(){
        cout<<"Non virtual destroyed"<<endl;
    }
};

class Derv:public Base{
    public:
    ~Derv(){
        cout << "Derived Destroyed"<<endl;
    }
};

int main(){
    Base* pBase = new Derv;
    delete pBase;
    return 0;
}