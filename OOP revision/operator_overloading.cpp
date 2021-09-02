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

        Height operator--(){
            this->inches--;
            return *this;
        }

        Height operator--(int){
            this->inches--;
            return *this;
        }

        Height operator++(){
            this->inches++;
            if(this->inches == 12){
                this->inches = 0;
                this->feet++;
            }
            return *this;
        }

        Height operator++(int){
            this->inches++;
            if(this->inches == 12){
                this->inches = 0;
                this->feet++;
            }
            return *this;
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

        Height operator -  (const Height &h2){
            float newFeet, newInches;
            newFeet = this->feet - h2.feet;
            newInches = this->inches - h2.inches;
            if (newInches<0){
                newFeet--;
                newInches = newInches + 12;
            }
            Height h3(newFeet,newInches);
            return h3;
        };
};

int main(){
    Height h1(2,3);
    Height h2(5,6);
    Height h3 = h1+h2;
    Height h4 = h2-h1;
    h3.print();
    h3++;
    h3.print();

    h4.print();
    ++h4;
    h4.print();
}