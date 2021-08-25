// variable: allows the programmer to use meaningful names instead of memory address.
// variables have : type(int ,string ,person, account )
                    // value :(10,2.34,"hari")

// variable must be declared before it is used.
//declaring and initializing variable.
// rules for declaring variables:--> can contaun letters,numbers and underscore.
            // --> must begins with  number.
            // --> cannot begin with a number.
            //-->cannot use c++ reserved keyword 
            // -->cannot redeclare a name in same scope.
            //--> c++ is a case sensative .
            //--> declaratio: int age 
            //--> initiallization: int age=16   c- like
                        // int age(21)     contructor initalization
                        // int age{21}    c++ 11 initialization syntax
                        
#include<iostream>
using namespace std;
int main(){
    int width{0};
    int height{0};
    cout<<"enter the width:";
    cin>>width;
    cout<<"enter the height:";
    cin>>height;
    cout<<"The area of the room is :"<<width*height<<endl;
return 0;
}
// assinmnet of the varibale is the overwiting of the initial value and assining the certain value to the memory .
// c++ primitive data type(Fundamental Data Type)
    //-charater type:This is used for reppresenting the single character eg:'a','b'   char ,char16_t
    //-integer type:signed and unsigned :
            // used to represent whole number 
            //..> signed number: negative number (This is by defult )int a =10
            //...>unsigned : 0 or positive number(Must be specified)  unsigned a=10
    //-foating type:Used to represent non integer numbers (float(7 decimal),double(15 dec),long double(19dec)
    
    //-boolean type : use to represent True or False (Zero is false, Non-zero is true )
    
 // constant:like variable ,Also Hve a name, Also pccupied space.
    //->This dosent needed to be changed throughout the program.
    //->unique variable the value of the constant is always the same 
    // type of the constant :
        //literal constant: eg: x=1, x="hari"  
        //decleread constant :const kewboard( eg: const int month_in_year{12})
        // enumurated constant :enum keywoard 
        // definined constant:#defined(eg:#defined pi 3.1415                       preprocessor contain like header file 






































/*Creating namespaces 
#include <iostream> 
using namespace std; 
namespace ns1 
{ 
	int value() { return 5; } 
} 
int main() 
{ 
	// Access value function within ns1 
	cout << ns1::value() << '\n'; 
	return 0; 
}
*/




















