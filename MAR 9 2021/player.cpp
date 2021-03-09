#include <iostream>
using namespace std;

class Player{
    
    public:
        int hp;
        Player(){
            hp =100;
        }
        Player( int hpProvided){
            hp = hpProvided;
        }
        ~Player(){
            cout << "A player died"<<endl;
        }
};

int main(){
    Player p1;
    Player p2(1000);
    cout << p1.hp<<endl;
    cout << p2.hp<<endl;
}