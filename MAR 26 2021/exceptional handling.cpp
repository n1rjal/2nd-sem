#include <iostream>
#include <string>
using namespace std;

class Distance{

    private:
        int feet;
        float inches;
    public:
        class InchesEx{
            public:
                string origin;
                float iValue;

                InchesEx(string ori, float in ){
                    origin = ori;
                    iValue = in;
                }
        };

        Distance(){
            feet=0;
            inches=0;
        }

        Distance(int ft, float in){
            if (in>=12.0){
                throw InchesEx("Error in value ",in);
            }
            feet =ft;
            inches = in;
        }

        void getdist(){
            cout << "Enter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;

            if(inches >= 12.0){
                throw InchesEx("getdist() function", inches);
            }
        }

        void showdist(){
            cout << "Enter feet" << feet;
            cout << "Enter inches" << inches;
        }
};

int main(){
    try{
        Distance d1(10,10);
        Distance d2(10,20);
    }
    catch(Distance::InchesEx ex){
        cout <<"Error string " << ex.origin<<endl;
        cout <<"Error value "<< ex.iValue<<endl;
    }
}