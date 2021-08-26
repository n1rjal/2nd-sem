// UML - UNIFied modelling language
// Demosntration of aggregation
#include <iostream>

using namespace std;

class User{
    public:
    int codename; 
    string name;
    string address;
};

class Order{
    public:
    User user;
    int totalprice;
    int discount;

    void getOrderDetail(){
        cout << this->user.name << "'s order \nPrice = NRS "<< this->totalprice << "\nDiscount = "<<this->discount<<endl;
    }
};

int main(){
    User Nirjal;
    Nirjal.codename = 1;
    Nirjal.name = "nirjal";
    Nirjal.address = "Pepsicola";

    Order Order1;
    Order1.user = Nirjal;
    Order1.totalprice = 10000;
    Order1.discount = 1000;
    Order1.getOrderDetail();
}