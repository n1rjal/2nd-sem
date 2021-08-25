
//Constructor
// Special member method that is invoked during object creation.
// Useful for initialization.
// Same name as the class.
// No return type is specified.
// Can be overloaded.

 

//class Player{
//private:
//    string name;
//    int health;
//    int xp;
//public:
//    //Overloaded Constructor
//    Player();
//    Player(sting name);
//    Player(string name, int health, int xp);
//};

 

// Destructor
// Special member method used when objects goes out of scope.
// Same name as class proceded with a tilde(~).
// Invoked automatically when an object is destroyed.
// Only one destructor is allowed per class - cannot be overloaded.
// Useful to release memory and other resources.

 

//class Player{
//private:
//    string name;
//    int health;+
//    int xp;
//public:
//    Player();
//    Player( string name);
//    Player(string name, int health, int xp);
//    ~Player();
//};
//Player frank();
//Player bob("Bob");
//Player andy("Andy", 100, 12);

 

#include<iostream>
#include<string>
 using namespace std;
 
//class Player{
//private:
//     string name;
//     int health;
//     int xp;
//public:
//     void set_name(string name_val){
//         name = name_val;
//     }
//     // overloaded constructor
//     Player(){
//         cout<<"No argument constructor called"<<endl;
//     }
//     Player(string name){
//         cout<<" Single argument constructor called"<<endl;
//     }
//     Player(string name, int health, int xp){
//         cout<<"Three argument constructor called"<<endl;
//     }
//     ~Player(){
//         cout<<"Destructor called "<<name<<endl;
//     }
// };
// int main(){
//     {
//         Player slayer;
//         slayer.set_name("slayer");
//     }
//     Player frank;
//     frank.set_name("Frank");
//     Player hero("Hero");
//     hero.set_name("Hero");
//     Player villan("Villan", 100, 12);
//     villan.set_name("Villan");
//     
//     Player *enemy= new Player;
//     enemy-> set_name("Enemy");
//     
//     Player *level_boss = new Player("Level Boss", 1000, 3000);
//     level_boss->set_name("Level Boss");
//     
//     delete enemy;
//     delete level_boss;
//     
//     return 0;
// }
 
 // Default constructor(no args constructor)
 // - Does not accept any argument.
 // - If you write no constructors at all for a class, C++ will generate a Default constructor that does nothing.
 // - Called when you instantiate a new object with no arguments.
// class Account{
//private:
//     string name;
//     double balance;
//public:
//     Account(){
//         name="Name";
//         balance = 10.0;
//     }
//     double get_balance(){
//         return balance;
//     }
//     bool withdraw(double amount);
//     bool deposit(double amount);
// };
// non-default constructor
class Account{
private:
     string name;
     double balance;
public:
     Account(string name_val, double bal){
         name=name_val;
         balance = bal;
     }
     double get_balance(){
         return balance;
     }
     bool withdraw(double amount);
     bool deposit(double amount);
 };
 int main(){
     Account frank_acc("frank", 100.0);
     cout<<frank_acc.get_balance()<<endl;
 }