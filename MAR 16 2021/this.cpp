#include <iostream>
using namespace std;

class where{
    private:
        char charray[100];
    public:
        void reveal(){
            cout << " the address is "<<this<<endl;
        }
};

int main(){
    where w1,w2,w3;
    w1.reveal();
    w2.reveal();
    w3.reveal();
};