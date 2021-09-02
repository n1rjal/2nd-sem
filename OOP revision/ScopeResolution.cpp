#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        
        Complex(int, int);
        void print();
};

Complex::Complex(int r, int i){
    real = r;
    imag = i;
}

void Complex::print(){
    cout << "(" << real << "," << imag << ")" << endl;
}

int main(){
    Complex c1(1,2);
    Complex c2(3,4);
    c1.print();
}