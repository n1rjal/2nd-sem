#include <iostream>
using namespace std;
class Count{
private:
    int value;
public:
    // constructor to initialize count to 5
    Count(): value(5){}                         //list comprehension 
    
    // constructor ++ when used as prefix
    Count  operator ++(){
       Count increament;                       //for the errror to handel operrator must be defined over the return type of the assigned value 
       increament.value=value+1;
       return increament;
    }
    
    Count  operator ++(int){      //for postfix 
      Count increatement;
      increatement.value=value+1;
      return increatement; 
    }
    void display(){
        cout<<"Count:"<<value<<endl;
    }
};

int main(){
    Count count1;
    
    // Call the "void operator ++ {}"function.]
    Count result;
    result = ++count1;          // for operator to be a return type ot must match the return type of the operatror and assigned value  for handelling the error
   result.display();
    return 0;
}














///object takes obejects 