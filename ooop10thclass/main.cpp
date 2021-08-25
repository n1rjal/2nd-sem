#include<iostream>
#include<string>
 using namespace std;
//
////copy constructor 
////when object are copied c++must create a new object from  a exsting object 
////when is a copy of an objec tmade ?
//            //-passing objects by value as a parameter
//            //-returing an object from a function by value 
//            //- constructing one object based on another of same value 
//            //c++ must have  a way of accomplishing this so it provides a compiler defined copy constructor if you dont 
////1st use case:when we pass an object to a function or method by value.(default)
//
//
//
////object creation and initialization 
//palyer hero{"hero",100,200}
////function declaration 
//void display_player(player p)
//{
//    //p is copy of hero in this example 
//    //destructor of o will be called 
//}
////function call(using object)
//display_player(hero);
//
////2nd use case :
//
//player enemy;
//player create_super_enemy(){
//    player an_enmy{"super enemy",1000,1000};
//    return an_enemy; // a copy of an_enemy is return  
//}
//enemy= create_super_enemy();
//
//
//
//
//
//
////3rd use case 
////defualt copy constructor 
//palyer hero{"hero",100,100}
////object creatio and initalization 
////a copy of hero is mader 
//player another_hero{hero}
//
// 






class Player{
private:
    string name ;
    string health;
    int xp;
public:
    string get_name(){return name;}
    int get_health{return health;}
    int get _xp(){return xp;}
    Player(string name_val="None",int health =0, int xp=0 );
    //copy constructor 
    player(const player &source);
    //destructor 
    ~player(){cout << "destructor called for :"<<name <<endl;}
};
    
Player::Player(string name_val,int health_val,int xp_val)
:name(name_val),health(health_val),xp(xp_val){              //member 
    cout<<"Three args constructor called"<<endl;            // scope of the member 
}
Player::Player(const Player &source)
:name(source.name),health(source.health),xp(source.xp){
    cout<<"Copy constructor-made copy of"<<source.name<<endl;
    
}
void display_player(Player p){
    cout<<"Name:"<<p.get_name()<<endl;
    cout<<"Health:"<<p.get_health()<<endl;
    cout<<"xp:"<<p.get_xp()<<endl;
}
int main(){
    Player empty;//"none",0,0
    display_player(empty);
    Player frank("Frank");
    Player hero("Hero",100);
    Player villian("Villian",100,55);
    return 0;
}


//Assignment 
//Structure and classes
//Static classes
//Friend of a class