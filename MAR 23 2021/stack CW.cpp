#include <iostream>
using namespace std;

template <class Type>
class Stack{
    private:
        Type value;
    public:
        Stack(Type t1){
            this->value = t1;
        };
        Type display_value(){
            return this->value;
        };
        Type operator ++(int){
            return this->value++;
        };
};

int main(){
    Stack<int> s1(44);
    Stack<double> s2(451212);
    Stack<float> s3(44.44);
    s1++;
    s2++;
    s3++;
    cout << s1.display_value()<<endl;
    cout << s2.display_value()<<endl;
    cout << s3.display_value()<<endl;

}