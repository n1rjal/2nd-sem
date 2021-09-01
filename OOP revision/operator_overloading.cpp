#include <iostream>
using namespace std;

class Height{
    private:
        float feet;
        float inches;
    public:
        Height(float f,float i){
            this->feet = f;
            this->inches = i;
        }

        void print(){
            cout << this->feet << " ft "<< this->inches<<" in" <<endl;
        }

        Height operator +  (const Height &h2){
            float newFeet, newInches;
            newFeet = this->feet + h2.feet;
            newInches = this->inches + h2.inches;
            if (newInches>12){
                newFeet++;
                newInches = newInches - 12;
            }
            Height h3(newFeet,newInches);
            return h3;
        }
};

int main(){
    Height h1(2,3);
    Height h2(5,6);
    Height h3 = h1+h2;
    h3.print();
}