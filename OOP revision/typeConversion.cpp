#include <iostream>
using namespace std;

class Complex{
    private:
        int real;
        int imaginary;
    public:
        Complex(int r){ // will ve used for converting basic to user defined
            this->real = r;
        };
        Complex(int r,int i){
            this->real = r;
            this->imaginary = i;
        }
        int getSum(){
            cout << "REAL "<<this->real<<endl;
            cout << "IMAGINARY "<<this->imaginary<<endl;
            return this->imaginary+this->real;
        }
        
        operator int(){ // will be use for converting user defined to basic
            return this->real;
        }
};

int main(){
    int i = 100;
    float j = i; // int to float
    int k = (int) j; // float to int
    Complex c1 = 22;
    cout << c1.getSum() << endl;
    cout << c1 << endl;
}