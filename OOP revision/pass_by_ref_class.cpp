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
        void setimag(int i){
            this->imag = i;
        }
};

void setName(Complex *C){
    C->setimag(10);
}

int main(){
    Complex c1(1,2);
    c1.print();
    setName(&c1);
    c1.print();
}