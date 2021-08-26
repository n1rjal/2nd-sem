#include <iostream>
using namespace std;

class NumberAdd{
    
public:
    class LessThanZeroError{
        
    };
    class ComparisionError{
        
    };
    
    int value1;
    int value2;
    
    NumberAdd(int num1,int num2){
        int sum  = num1 + num2;
        if (sum < 0){
            throw LessThanZeroError();
        }
        if (num1<num2){
            throw ComparisionError();
        }
    }
    
};

int main()
{
    try{
        NumberAdd(-14,88);
    }
    catch(NumberAdd::LessThanZeroError ltz){
        cout << "Less than zero error"<<endl;
    }
    catch(NumberAdd::ComparisionError ce){
            cout << "Comparision error occured"<<endl;
    }
        
    
}