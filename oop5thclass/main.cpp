//function :- DRY (donot repeat yourself)
    // we can modularize the program using the function 
    // seperate the cde into logical self-contained units
    //These units are reusable
//c++  program:
        //c++ standared templete library(STL)(ie.vector ,isostream)
        //third party library(coco2dx,unreal,spring,cry engine)
        //self created or our own function
                //(dont reinvent the wheel)
        // Abstraction in oop








//function defination(user define function)
    // function type function name(parameters){
        //statements(body of the function)
        //return type
        //}
        // name :-same rule as variables it should br meaningful
        // parameter list:-the variable passed into the function -their type must be specified 
        //return tupe - type pf the data is returned by the function.
        //body:-statements that are executed when the function is called - it lies within the scope
        
/*#include<iostream>
using namespace std;
void hello(){
    cout<<"hello";
}
void world(char name[]){
    hello();
    cout<<"world"<<name<<endl;
}
int main(){
    world("rupesh");
    return 0;
}        
        
*/


/*
#include<iostream>
using namespace std;
const double pi=(3.14159);
double calc_area_circle(double radius ){
    return pi*radius*radius ;
}
double calc_area_cylinder(double radius,double height){
    return pi*radius*height;
}
void area_circle(){
    double radius={0};// c++ standared brace initialization double radius{0}
    cout<<"enter the radius of the circle";
    cin>>radius;
    cout<<"The area of the circle is "<<calc_area_circle(radius);
}
void area_cylinder(){
    double radius={0};
    double height ={0};// c++ STANDARED copy-brace initialization double radius={0}
    cout<<"Enter the radius of the cylinder";
    cin>>radius;
    cout<<"Enter the height of the cylinder";
    cin>>height;
    cout<<"the area of the cylinder is "<<calc_area_cylinder(radius,height);
}
int main(){
    area_cylinder();
    area_circle();
}
        
   */
//function prototype:
    //-It tells the compiler about the function befor it is used .
    //-Also called as forward  declaration 
    //-paced at the top of the beginning of the program 
    
    
    
    
//function prototypes
/*double calc_area_circle(double radius);
double calc_area_cylinder(doube radius,double height);
void area_circle();
void area_cylinder();
 int main(){}
declaration of the functions 








//function parameters:
 * when we call a function we pass in data to the function 
 * In function call they are called Actual Parameters .(arguments )
 *In function defination they are called Formal parameters.(parameters)
 *int add(int a, int b)//prototype
 *int main(){
 * int x={1};
 * int y={4};
 * add(x,y); // actual parameter }
 * int addition(int a., int b){  // formal parameter
 * return a+b;}
//pass_by_value:
 * when you pass a data into a function it is called pass-by-value 
 * A copy of the data is passed into the function.
 * whatever changes you make to the parameters in the function dosent affedt the argument that was passed in.
 * what happens in a function stays in the function
 * 
 * 
 * 
 * */
//#include <iostream>
//#include <vector>
//#include<string>
//using namespace std;
//void pass_by_value1(int num);
//void pass_by_value2(string s);
//void pass_by_value3(vector<string>v);
//int main(){
//    int num={10};
//    int another_num={20};
//    //For integer
//    cout<<"Before: "<<num<<endl;
//    pass_by_value1(num);
//    cout<<"After: "<<num<<endl;
//    cout<<"Before: "<<another_num<<endl;
//    pass_by_value1(another_num);
//    //For string
//  string  string_name={"Hari"};
//    cout<<"Before: "<<name<<endl;
//    pass_by_value2(name);
//    cout<<"After: "<<name<<endl;
//    //For vector
//    vector <string> AAL{"Tosin", "Javier", "Matt"};
//    cout<<"Before"<<endl;
//    print_vector(AAL);
//    pass_by_value3(AAL);
//    cout<<"After";
//    print_vector(AAL);
//    
//}
//void pass_by_value1(int num){
//    num=1000;
//}
//void pass_by_value2(string s){
//    s="Changed";
//}
//void pass_by_value3(vector<string>v){
//    v.clear();
//}
//void print_vector(vector<string>v){
//    for(auto s:v)
//        cout<<s<<" ";
//        cout<<endl;
//}
/*
//return statement:
 * if a function return a value then it must return  statement  that returns a value 
 * if a function does not values(void) then the return statement is optional
 * return statement can occur anywhere int the function body.
 * return statement immediately exits the function
 * multiple return statement is not encoraged 
 * the retur n values in the result of the function call
 
//Defult parameters value:
 * the value remains constant throught 
 * the best practice to define the defult value is to define in prototype 
 * must appear at the tail end of the parameter list 
 * can add multiple defult values 
 #include<io.stream>
  * namespace std;
  * int addition(int a,int b=3);
  * int main(){
  * addition(2,3);}
  * void  addition(int a , int b=3)
  * {
  *cout<< a+b<<endl;}
  * 
//Overloading
 * void( fundtion1(int),function1(string),function1(double),function1(vector)
 * we have function with same name but different parameters
 * OOP:Abstraction :we dont have to abstract ,Polymorphism:many forms for the single concpet 
 * */
// #include<stdio.h>
// #include<string>
// #include<vector>
// using namespace std;
// void print(int);
// void print(double);
// void print(string);
// void print(string, string );
// void print(vector<string>);
// void print(int num){
//    cout<<"print integer"<<num<<endl;
// }
//void print(string s){
//    cout<<"print string "<<s<<endl;
//    
//}
//void print(string s, string t){
//    cout<<"print string 2"<<s<<"and"<<t<<endl;
//}
//void print(vector <string>v){
//    cout<<"printing the vector";
//    for(auto& s:v)
//        cout<<s+"";
//        cout<<endl;
//}
//int main(){
//    print(100);
//    print('a');
//    print(123.5);
//    print("c_style string");
//    string s={"c++style string "};
//    print(s);
//    print("c-style string ",s);
//    vector <string>GOT{"stark","lannister","bolton"};
//    print(GOT)
//    cout<<endl;
//    return 0;
//    
//}

 
 /* 
 * 
 * 
//passing array to the function
//pass_by_refernce:
 * sometimes we want to able to change the actual parameters form with the function body.
 * in orer to achive this we need the location or address of the actual parameters 
 * the formal parameters will be an alias for the actual parameters
 * 
 example 1:
  */
 // #include<iostream>
  //using namespace std;
//  void swap(int &a,int &b)
//  int main(){
//      int x={10},y={20};
//      cout<<x<<" "<<y<<endl;
//      swap(x,y);
//      cout<<x<<" "<<y<<endl;
//
//  }
//  void swap(int&a,int &b){
//      int temp=a;
//      a=b;
//      b=temp;
//  }
//#include<vector>
//using namespace std;
//void print(vector<int>&v);
//int maain(){
//    vector <int> data={1,2,3,4,5};
//    print(data);
//    return 0;
//}
//void print(vector<int>&v){
//    int a =10;
//    for(auto num:v)
//        cout<<num+a<<endl;
//}
//How function works?
        //funxtion use the "funtion call stack"
        //-analogous to a stack of books
        //-LIFO-last in first out
        //-puch and pop
        //stack frame or activation recorded(collection of information that represents an active function)
        // -each time a function is called an activation recorded is created and pushed in the call stack
        //-when the function terminates we pop its activation recorded odd call stack
        //-and the top of the stack is the function that called it
        //-function must return control
        //Rember the cll stack is finite size.if we activate too many function is the call stack we run out of stack space 
        //This is called stack overflow, this is usally unrecoverable
//#include<iostream>
//using namespace std;
//void function2(int &x, int y,int z){
//    x+=y+z;
//}
//int  funct1(int a ,int b){
//    int result =0;
//    result =a+b;
//    function2(result,a ,b);
//    return result;
//}    
//int main(){
//    int x={10};
//    int y={20};
//    int z={};
//    z=funct1(x,y);
//    cout << z<<endl;
//    return 0;
//}


//inlinite function:Function call have certain amount of overhead
    //sometimes we can have simply functions
    //in this kind of the situation ,we suggest compiler to compile them "Inline "
    //-Avoid function call overhead 
    //-Generate inline assembly code
    //-Could cause code bloat 
    
//inline int add_number (int a,int b){
//    return a+b;
//}
//int main(){
//    int result ={0};
//    result =add_number(100,200);
//    return 0;
//}
//scope: c++ uses scope rrules to determine where an identifier can br user 
        //c++ uses static or lexical scope
        //local or block scope
        //globel scope
        
//#local scope 
    // identifers declared in a block{}
    //function parametes have block scope 
    //only visible within the block{} where declared 
    //function locsl variable are only active while the function is executing 
    //local variable are not  preserved between the function calls
    // with nested block inner blocks can "see" but outer block cannot "see" in.
    //lower cope is viewed as local upper as global litterally
//#Glove scope:
    //identifier declared outside any function/class
    //visible to all part of the program after global identifier 
    //global constant are ok 
    //best practice -dont use global variable 
//storage class:
    //



//Return reference













//assinmet 2:
    // conditional statement(if else ,nested if..else case ...break)
    // looping satements(for loop,while looop, do..while loop,nested loop)
    
//assinmnet 3 :
    //global  and local scope example
    //storage class and example for all five.