#include <iostream>
#include <string >

using namespace std;

class Player{
private:
    string  name ;
    int health ;
public:
    int get_health(){return health ;}
    string get_name(){return name;}
    
    Player(string name_var="N/A" ,int health_var=0 );
//    Player(const Player &obj);
    ~Player(){
        cout<<"deconstructor is executed "<<endl;
        
    }
};

Player::Player(string name_var,int health_var)
:name(name_var),health(health_var){
    cout<<"constructor is generated"<<"  name :   "<<name<<endl;                   //direct list initialization   Class::Class() : member{arg1, arg2, ...} {...	
}
//Player::Player(const Player &obj)
//:name(obj.name),health(obj.health){
//    cout<<obj.name<<endl;
//}

int main(){
    Player rupesh("rupesh",100);
    Player nirjal(rupesh);
    cout <<rupesh.get_name()<<","<<nirjal.get_name()<<endl;
}

