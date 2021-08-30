#include <iostream>
using namespace std;

class InlineClass{
    private:
        int a;
        int b;
        int c;

    public:
        InlineClass(int, int, int);
        void print();
};

InlineClass::InlineClass(int a, int b, int c){
    this->a = a;
    this->b = b;
    this->c = c;
};

void InlineClass::print(){
    cout << this->a <<endl; 
    cout << this->b <<endl; 
    cout << this->c <<endl; 
}

int main(){
    InlineClass i1(1,2,3);
    i1.print();
}