//Array are the compund data types 
// Suppose ,st_1_marks{0};
            // st_2_marks{0};
/* properties :
-Fixed sized 
-All elements are of the same datatypes
-Stored contiguosly in memory ----> memory will be allocated as one chunk)
-first element is index 0 last is at n-1(suppose n dimentional array for n dimenstional array)
-Out of bounds  
#include<iostream>
using namespace std;
int main(){
    char greet[]={'h','e','l','l','o'};
    cout<<"the fist letter is \t "<<greet[0]<<endl;
    cout<<"the second char is \t "<<greet[5]<<endl;
}*/


//#include<iostream>
//using namespace std;
//int main(){
/*  int mark[]={1,2,3,4,5};
    cout<<"The heighst mask is "<<mark[4]<<endl;
    mark[4]=90;
    cout<<"the heighest marsk is "<<mark[4]<<endl;*/
 // stores garbage value in array during initialization
// multi-dimentional array: [1,2,3,4,5] series of numbers
                    // [[1,2,3],[1,2,3]]2D arary matrix
                    // 3D matrix image(Width Height Color(Red,Blue,Green)
                    // int bank_details[10   number of rows][3    number of coloumns]
                    
                    
// scenario:
// we use array to keep the data of the students.
// But the size of the aarray is fixed so we have two options :
                // 1. Make the array so big it will fit all the records 
                // 2.Use the dynamic array such as vector.
                
// vector : is a part of C++ Standared Templete Library
            // can grow srink at execution time
            // provides similar semantic ans syntax as array
            // very effecent 
            // also can provide the bound check
            // use various cool function like sort,reverse,find and more
            
            
//#include<vector>
//vector<int> marks(20);
//vector<int> marks{100,200,300,400,500}    



//ASSINMNET :
// assinmnet operator 
// arthmatic operator 
//increment and  decrement operator 
// relational operator 
// logical  operator 