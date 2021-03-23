#include <iostream>
using namespace std;
const int MAX = 100;

template <class Type>
class Stack
{
    private:
        Type st[MAX];
        int top;
    public:
        Stack(){
            top = -1; 
        }
        void push(Type var){
            st[++top] = var;
        }
        Type pop(){
            return st[top--];
        }
};

int main()
{
    Stack<int> s1;
    s1.push(11);
    s1.push(22);
    s1.push(33);
    cout << "1: " << s1.pop() <<endl;
    cout << "2: " << s1.pop() <<endl;
    cout << "3: " << s1.pop() <<endl;

    Stack<long> s2;
    s2.push(123123123L);
    s2.push(234234234L);
    s2.push(345345345L);
    cout << "1: " << s2.pop() << endl;
    cout << "2: " << s2.pop() << endl;
    cout << "3: " << s2.pop() << endl;
    return 0;
}