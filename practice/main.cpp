#include<iostream>
#include<vector>
#include<string>
//constructor are of three type 
/*
they are :
1.default  constructor 
2.argumnet constructor 
3.copied constructor 

 */
 
 //             1.Default Constructor 
// Default constructor is the constructor which doesn’t take any argument. It has no parameters . 
              //   if the class dosent contain the constructor the compiler creates a constructor and initializes the atrributes and the default method 
 class Cordinate{
public :
     int x ;
     int y;
     int slope();
     Cordinate(){
         x=0;
         y=0;
     }
 };
 
//as for the above example we can see that the constructor of the above program is default constructor 




//          2. parameterrized constructor 
//When we  pass arguments to constructors  these arguments help initialize an object when it is created.
// so the argumment construcotr are those constructor which take value from the user while declaring the object 
// if the parameter is not provied the error occurs in the program as in the function we must pass teh value for it to work .
//default parameterrizred constructor having the default value in the argument .
class Cordinate{
public:    
     int x ;
     int y;
     int slope();
     Cordinate(int x_corr,int y_corr){
         x=x_corr;
         y=y_corr;
    }
    ~Cordinate()
 };
 
 //as we can see above the the constructor of the class in the above exaple is thaking some parameter for the atrrributes of the class
 //so the above constructor is the example of the attribute constructor as it takes some parameters
 
 

//             3.Copy constructor 

class Cordinate{
public :
     int x ;
     int y;
     int slope();
     Cordinate(int x_corr,int y_corr){
         x=x_corr;
         y=y_corr;
     }
     
     //copy constructor 
     Cordinate(const Cordinate &object2){                  //   SYNTAX :  constructor_name(const  refrence constructor &object_used )                  
         //in this constructor we are initializing the arguments taking a object1 as an example or the reference for object2 
        //It is very useful when the object is inhertating some atrributes from the reference  object    
         x=object2.x;
         y=object2.y;
     }
 };
int main(){
    Cordinate object1(2,3);                        //refernce object 
    Cordinate object2=object1;              // object which is initializing same as the object1
}





// In  function having parameter ,parameter should be passed 
//defalt is initialized value and assinment is the passed value 