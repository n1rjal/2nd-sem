#include <iostream>
using namespace std;

class Base{
    public:
    virtual void show() = 0;
};

class Derv1:public Base{
    public: 
    void show(){
        cout << "Derv1\n";
    }
};

class Derv2:public Base{
    public: 
    void show(){
        cout << "Derv2\n";
    }
};

int main(){
    // Base bad;
    Derv1 dv1;
    Derv2 dv2;
    Base *ptr[2];
    ptr[0] = &dv1;
    ptr[1] = &dv2;
    ptr[0]->show();
    ptr[1]->show();
    return 0;
}