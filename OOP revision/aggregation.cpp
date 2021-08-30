#include <iostream>
using namespace std;

class User{
    private:
        string name;
        string address;
    public:
        
        void setName(string name){
            this->name = name;
        }
        void setaddress(string address){
            this->address = address;
        }
        string getName(){
            return this->name;
        }
        string getAddress(){
            return this->address;
        }
        void print(){
            cout << this->name << " "<< this->address<<endl;
        }

};

class Cart{
    private:
        static int count;
        User u;
    public:
        Cart(){
            
        }
        void setUser(User const u){
            this->u= u;
        }
        void printCart(){
            cout << this->u.getName()<<"'s cart"<<endl;
            cout << "For street: "<<this->u.getAddress()<<endl;
        }

};

int main(){
    User u1;
    u1.setName("Nirjal");
    u1.setaddress("Hello Street");
    
    Cart c1;
    c1.setUser(u1);
    c1.printCart();
}