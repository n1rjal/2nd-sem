//pointer :
    // -pointer is a variable whose value is address 
    //-the address can contain another variable or a function
    //-if x is an integer variable and its value is 10,then we can declare a pointer that points to it ,delclare a pointer wiith same data type
    //-to used the data the pointer is pointing to you must know the type
//why cant we use the variable or the dunction itslef?
    //inside the function the pointers are used to acess the data outside the fumction
    //since those variable may not be in scope so you cant acess them by their name 
    
    
    //pointers can be used to operate on array very efficenntly
    // we can allocate memmory dynamically on the heap or the free storage during runtime
    
    //declaring the variables : variable_type *pointer _name ;
    //int ,double,char,string data types are used 
    //int *int_ptr;
    //it is very important to initialize the pointer
    //variable_type*pointer_name{null ptr};
    //int *int_ptr={null ptr};
    //always initialixe the pointer 
    //unitilaized pointer contains garbage data and can point anywhere 
    //initialize to zero or null pointer 
    
    
//#include<iostream>
//#include<vector>
//using namespace std;
//int main(){
//    int num ={10};
//    cout<<"value of num"<<num<<endl;
//    cout<<"size of num is"<<sizeof num<<endl;
//    cout<<"address od num is"<<&num<<endl;
//    
//    int *p;
//    cout<<"\n value of p is "<<p<<endl;
//    cout<<"address of p is "<<&p<<endl;
//    cout<<"size of the pointer is "<<sizeof p<<endl;
//    
//    int *r={nullptr};
//    cout<<"\n value of r is "<<r<<endl;
//    
//    int *p1={nullptr};
//    double *p2={nullptr};
//    vector<string>*p3={nullptr};
//    string *p4={nullptr};
//    cout<<"size of p1"<<sizeof p1;
//    cout<<"size of p2"<<sizeof p2;
//    cout<<"size of p3"<<sizeof p3;
//    cout<<"size of p4"<<sizeof p4;
//    
//    
//    int score={20};
//    double temp={100.7};
//    int *score_ptr={nullptr};
//    score_ptr =&score ;
//    cout<<"value of the score _pointer is "<<score_ptr<<endl;
//    
//}
    
    
    
    
