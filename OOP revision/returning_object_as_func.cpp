#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imag;
    public:
        Complex(int r, int i){
            real = r;
            imag = i;
        }
        void print(){
            cout << real << " + " << imag << "i" << endl;
        }
};

Complex makeComplex(int i, int r){
    return Complex(r, i);
}

int main(){
    Complex c1 = makeComplex(3,5);
    c1.print();
}