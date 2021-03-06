#include <iostream>
using namespace std;

class One {
    int code, items;
    float price;

    public:
        One(int c,int i, int p){
            code= c;
            items= i;
            price= p;
        }
        void showData(){
            cout << "\n CODE = "<<code;
            cout << "\n Items = "<<items;
            cout << "\n Value = "<<price;
        }
        int getCode(){
            return code;
        }
        int getItems(){
            return items;
        }
        int getPrice(){
            return price;
        }
        operator float (){
            return (items*price);
        }
};

class Two{
    int code;
    float value;

    public:
        Two(){
            code = 0;
            value = 0;
        }
        Two(int x,float y){
            code = x;
            value = y;
        }
        void showData(){
            cout << "\n CODE= "<< code <<endl;
            cout << "\n VALUE= "<< value <<endl;
        }
        Two(One Obj1){
            code = Obj1.getCode();
            value = Obj1.getItems() * Obj1.getPrice();
        }
       
};

int main(){
    One ob1(1000,20,20);
    float tot_value;
    Two ob2;
    tot_value = ob1;
    ob2 = One(ob1);
    cout << "\nitem from class one";
    cout << "\nVALUE = "<<tot_value<<endl;
    cout << "Item from class two"<<endl;
    // ob2.putdata();
}