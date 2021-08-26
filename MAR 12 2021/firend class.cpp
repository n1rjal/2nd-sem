#include <iostream>
using namespace std;

class Alpha{
    private:
        int data1;
    public:
        Alpha():data1(99){}
        friend class Beta;
};

class Beta{
    public:
    void func1(Alpha a){
        cout << "data 1 = "<<a.data1;
    }
    void func2(Alpha a){
        cout << "data 1 = "<<a.data1;
    }
};

int main(){
    Alpha a;
    Beta b;
    b.func1(a);
    b.func2(a);
}