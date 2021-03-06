// user defined to basic data type

#include <iostream>

using namespace std;

class Complex{
    private:
        int a,b;
    public:
        void setData(int x,int y){
            a= x;
            b= y;
        }
        void showData(){
            cout <<"a: "<<a<<" b: "<<b<<endl;
        }

        operator int(){
            return (a);
        }

        operator float(){
            return (float) a/b;
        }
};

int main(){
    Complex c1;
    c1.setData(33,5);
    int x;
    x= c1;
    float float1;
    c1.showData();
    float1 = c1;
    cout << "After type conversion: "<<x<<endl;
    cout << "After type conversion into float: "<<float1<<endl;
    return 0;
}