// add two imaginary nubers 

#include <iostream>
using namespace std;

class Complex{
    public:
        int real;
        int img;

        Complex addComplex(Complex c2){
            Complex temp;
            temp.real = this->real + c2.real;
            temp.img = this->img + c2.img;
            return temp;
            
        }    
};

int main(){
    Complex c1,c2,c3;
    cin>>c1.real>>c1.img>>c2.real>>c2.img;
    c3 = c1.addComplex(c2);
    cout<<c3.real<<" "<<c3.img;
    return 0;
}