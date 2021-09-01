#include <iostream>
using namespace std;

class Person{
    public:
        Person(){
            cout << "Person created" << endl;
        }
        ~Person(){
            cout << "Person destroyed" << endl;
        }
};

int main(){
    Person p;
    return 0;
}