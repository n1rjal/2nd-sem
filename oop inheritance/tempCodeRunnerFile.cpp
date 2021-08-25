#include<iostream>
using namespace std;
// class complex{           // basic to userdefined datatype 
//     private:
//         int a,b;
//     public:
//         complex(){}
//         complex(int k){
//             a=k;
//             b=0;
//         }
//     void setdata(int x, int y){
//         x=a;
//         b=y; 
//     }
//     void showdata(){
//         cout<<"a:"<<a<<"b"<<b<<endl;
//     }
// };

// int main(){
//     complex c1;
//     c1.setdata(10,20);
//     c1.showdata();
//     int x=5;
//     c1=x;
//     c1.showdata();
//     return 0;
// }


// class complex{              //user define --->  basic datatype
//     private:
//         int a,b;
//     public:
//         void setdata(int x, int y){
//             a=x;
//             b=y;
//         }
//         void showdata(){
//             cout<<"a: "<<a<<" ,b: "<<b<<endl;
//         }

//         operator int(){         //operator returntype()
//             return a;
//         }
// };


// int main(){
//     complex  c1;
//     c1.setdata(3,5);
//     c1.showdata();
//     int x;
//     x=c1;
//     cout<<"after type conversion  x: "<<x<<endl;
//     return 0;


// }




class one{
    int code,items;
    float price;
    public:
        one(int c,int i,  int p ){
            code=c;
            items=i;
            price=p;
        }
        void showdata(){
            cout<<"\n code="<<code;
            cout<<"\n items="<<items;
            cout<<"\n value="<<price;

        }
        int getcode(){
            return code;
        }
        int getitems(){
            return items;
        }
        int getprice(){
         return price;
        }

        operator float(){    // class to basic conversion return float value  
            return items*price;
        }
};

class two{
    int code ;
    float value;
    public:
        two(){
            code=0;
            value=0;
        }
        two(int x , float y){
            code=x;
            value=y;
        }
        void showdata(){
            cout<<"\n  code="<<code;
            cout<<"\n value="<<value;

        }

        two(one obj){
            code=obj.getcode();
            value=obj.getitems()*obj.getprice();


        }

};



main(){
    one ob1(1000,20,150);
    float tot_value;
    two ob2;
    tot_value=ob1;             //invokes operator function of class one 
    ob2=one(ob1);
    cout<<"\n iteams from class one ";
    ob1.showdata();
    cout<<"\n value ="<<tot_value;
    cout<<" \n items from class two ";
    ob1.showdata();

}