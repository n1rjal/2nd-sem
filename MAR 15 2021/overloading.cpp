#include <iostream>
using namespace std;

class alpha{
    private:
        int data;
    public:
        alpha(){};
        alpha(int d){
            data = d;
        }
        void display(){
            cout << data;
        }
        alpha operator = (const alpha &a1){
            data = a1.data;
            cout << " calling assignment operator";
            return alpha(data);
        }
};

int main(){
    alpha a1(36);
    alpha a2;
    a2=a1;
    cout << "\n a2 = ";
    a2.display();
    alpha a3= a2;
    cout << "\n a3 = "; a3.display();
    cout << endl;
    return 0;
}