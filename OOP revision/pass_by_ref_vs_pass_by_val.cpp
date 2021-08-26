#include <iostream>
using namespace std;

// pass by reference
void swap_numbers(int &a, int &b){
    int temp = a;
    a = b;
    b = temp; 
}



int main(){
    int a = 12;
    int b = 45;

    cout << "Before swapping "<<endl;
    cout << "a= "<<a<<" b= "<<b<<endl;

    swap_numbers(a,b);

    cout << "After swapping "<<endl;
    cout << "a= "<<a<<" b= "<<b<<endl;

}