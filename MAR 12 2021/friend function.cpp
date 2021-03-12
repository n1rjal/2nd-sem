#include <iostream>
using namespace std;

class Beta;

class Alpha{
    private:
        int data;
    public:
    Alpha():data(3){}
    friend int friend_function(Alpha,Beta);
};

class Beta{
    private:
        int data;
    public:
        Beta():data(7){};
        friend int friend_function(Alpha,Beta);
};

int friend_function(Alpha a, Beta b){
    return (a.data+b.data);
}


int main(){
    Alpha aa;
    Beta bb;
    cout << friend_function(aa,bb) << endl;
}