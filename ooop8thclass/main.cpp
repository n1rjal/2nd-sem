// Four pillars of Object oriented programming
// Abstraction
// Polymorphism
// Inheritance
// Encapsulation
 
// Objects and Classes
// Classes:
// - Blueprint from which objects are created.
// - A user-defined data-type
// - Has attributes (data)
// - Has methods (functions)
// - Can hide data and methods
// - Provides a public interface
 
// Example of classes:
// Account
// Employee
// std::vector
 
// Objects:
// - Created from a class.
// - Represents a specific instance of a class.
// - Can create many many objects.
// - Each has its own identity.
// - Each uses the defined class methods.
 
// Example of objects:
// Hari's Account
// Ram's Account
// Each has their own balance, deposit history and withdrwal history.
 
// Declearing a class
// class Class_Name{​​​​​​
    // declerations
//   }​​​​​​;
 
//class Player{​​​​​​
//    //attributes
//    std::string name;
//    int health;
//    int xp;
//    
//    //methods
//    void talk(std::string text_to_say);
//    bool is_dead();
//}​​​​​​;
 
#include<iostream>
#include<string>
#include<vector>
 
using namespace std;
// 

//class Player{​​​​​​
//    // attributes
//    string name={​​​​​​"Player"}​​​​​​;
//    int health=100;
//    int xp=3;
//    //methods
//    void talk(std::string text_to_say);
//    bool is_dead();
//}​​​​​​;
// 
//class Account{​​​​​​
//    //attributes
//    string name;
//    double balance;
//    //methods
//    bool deposit(double);
//    bool withdraw(double);
//}​​​​​​;
//int main(){​​​​​​
//    Account ram_acc;
//    Account hari_acc;
//
//    Player ram;
//    Player hari;
//
//    Player player[]{​​​​​​ram,hari}​​​​​​;
//
//    vector<Player> player_vec{​​​​​​ram}​​​​​​;
//    player_vec.push_back(hari);
//
//    Player *enemy={​​​​​​nullptr}​​​​​​;
//    enemy = new Player;
//
//    delete enemy;
//
//    return 0;
//}​​​​​​




//we can access-class atrributes and class methods
//Some of the class members are not accessible
//we need an object to access instance variables

//If we have a pointer to an object (member of pointer operator)
//dereference the pointer then use the dot operator
//Account *frank_account=new Account;
//(*frank_account).balance;
//Or use the member pointer operator(arrow operator)
//frank_account->balance;

//class Player{
//public:
//    //attributes
//    string name;
//    int health;
//    int xp;
//    //methods
//    void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;}
//    bool is_dead();
//};
//class Account{
//    public:
//    //attributes
//    string name;
//    double balance;
//    //methods
//    bool deposit(double bal){balance +=bal;cout<<"deposited"<<endl;}
//    bool withdraw(double bal){balance -=bal;cout<<"withdraw"<<endl;}
//};
//int main(){
//    Player frank;
//    frank.name="Frank";
//    frank.health=100;
//    frank.xp=12;
//    frank.talk("Hi there!");
//    
//    Player bob;
//    bob.name="Bob";
//    bob.health=200;
//    bob.xp=15;
//    bob.talk("Hello there!");
//    
//    Account frank_acc;
//    frank_acc.name="Frank";
//    frank_acc.balance=5000.00;
//    
//    frank_acc.deposit(1000.00);
//    frank_acc.withdraw(500.0);
//    
//    Player *enemy;
//    (*enemy).name="Enemy";
//    (*enemy).health=100;
//    enemy->xp=5;
//    enemy->talk("I will destroy you.");
//}

//Class member access modifiers
//-public:Accessible everywhere
//-private:Accessible only by the members or friends of the class
//-protected:used with inheritance(lets discuss during the inheritance chapter)

//private
//class Class_Name{
//private:
//declarations;
//};

//protected
//class Class_name{
//protected:
    //declaration;
//};

//Public
//class Class_name{
    //public:
    //declarations;
//};

//class Player{
//private:
//    //attributes
//    string name;
//    int health;
//    int xp;
//public:
//    //methods
//    void talk(string text_to_say){cout<<name<<" says "<<text_to_say<<endl;}
//    bool is_dead();
//};
//int main(){
//    Player frank;
//    frank.name="Frank";//shows error because it's private property
//    cout<<frank.health<<endl;
//    frank.talk("Hello there!");//it's public so doesn't show error
//    return 0;
//}



//Implementating member method 
// very similar to how we implement function 
//memeber method have acess to memeber atrribute 
//      -so  you dont need to pas them arguments
//can be implemented inside the class declaration(implicity inline)
//can be implemented outiside the class declaration 
// - Need to use class_name::method_name 
//can seperate specification on implementation 
//  - .h file for the class declaration 
//  -.cpp file for the class implementation 



//class Account{
//private:
//    double balance;
//public:
//    void set_balance(double bal){
//        return balance;
//    }
//    void get_balance(){
//        return balance;
//    }
//};
//
//
//class Account {
//private :
//    double balance;
//public:
//    void set_balance(double bal);
//    void  get_balance();
//    
//};
//
//
//void Account::set_balance(double bal){
//    balance=bal;
//}
//
//double Account :: get_balance(){
//    return balance;
//} 
//


class Account {
private :
    double balance;
    string name;
public:
    void set_balance(double bal){balance=bal;}  //inline 
    double get_balance(){return balance;}    //inline 
    
    
    void set_name(string n);
    string get_name();
    
    bool deposite(double amount);
    bool withdraw(double amount);
    
};

void Account::set_name(string n){
    name=n;
}



string Account::get_name(){
    return name;
}


bool Account::deposite(double amount ){
    if(balance-ammount >=0){
        balnce -=amount ;
        return true ;
    }
    else{
        return false;
    }
}


int main(){
    Account frank_acc;
    frank_acc.set_name("frank")
    frank_acc.set_balance(10000.0);
    
    
    if( frank_acc.deposite(200.0)){
        cout << "deposited"<<endl;
        
    }
    else {
        cout <"not deposited "<<endl;
        
    }
    
    
    
}




//Constructor 
//special memeber method that is invoked during object creation 
                    //An overloaded declaration is a declaration that is declared with the same name as a previously declared declaration in the same scope, except that both declarations have different arguments and obviously different definition (implementation).
//useful for initialization 
// same namae as the class 
// no return type is specified 
// can be overloaded 




//class Player{
//private :
//    string name ;
//    int health;
//    int xp;
//public :
//    //over loading constructor 
//    player();
//    palyer(string name );
//    player(string name , int health , int xp);
//};



//destructor
//special memeber method  used when an object goes out of scope 
// same name as class proceded with a tilled (~)
//invoked automatically when a objec is destroyed 
// no return tpe and no parameter 
//only one destructor is allowed per class (cannot be overloaded )
//useful to release memeory and other resourses.



      

//class Player{
//private :
//    string name ;
//    int health;
//    int xp;
//public :
//    player();
//    palyer(string name );
//    player(string name , int health , int xp);
//    //destructor 
//    `~player();
//};              
//
//
//player ram();
//player jordan();            //destructor from buttom to top
//
