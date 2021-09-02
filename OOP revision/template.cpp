#include <iostream>
using namespace std;

template <typename T>
T max_(T a, T b) {
    return a > b ? a : b;
}

template <typename T>
class PrintAndRead {
    protected:
        T value;
    public:
        void print() {
            cout << value << endl;   
        }

        void set(T value){
            this->value = value;
        }

        T get(){
            return value;
        }
};

// template inheritance
template <typename T>
class Operations : public PrintAndRead<T> {

};


int main(){
    PrintAndRead<int> p;
    p.set(30);
    p.print();
    cout << max_<int>(10,20) <<endl;
    cout << max_<float>(10,20) <<endl;
    cout << max_<char>('a','b') <<endl;
    cout << max_<string>("AA","BB") <<endl;
    Operations <int> int1;
    int1.set(10);
    
}