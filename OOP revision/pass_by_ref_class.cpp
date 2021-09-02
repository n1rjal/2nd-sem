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
        Complex operator + (Complex c){
            int new_real = this->real + c.real;
            int new_imag = this->imag + c.imag;
            Complex new_complex(new_real, new_imag);
            return new_complex;
        } 
};

void setName(Complex *C){
    C->setimag(10);
}

int main(){
    Complex c1(1,2);
    Complex c2(10,12);
    
    c1.print();
    c2.print();
    Complex c3 = c1 + c2; 
    c3.print();
}