// C++ preprocessor 
// c++ preprocessor directives      #include <>
//comments--> Single line comment 
// scope resolution ->> ::
// /*comment */--> Multi-line comment
// namespace-->Helps removing the naming conflits.various libreries,user defined modules,nameing confusion std::cout numpy::cout
        //A namespace ensures that all of a given set of objects have unique names so that they can be easily identified. Namespaces are commonly structured as hierarchies to allow reuse of names in different contexts.

/*#include<iostream>
prompt using namespace std;
int main(){
    int guess_num;
    cout<<"please guess a number ";
    cin>>guess_num;
    cout<<"your number is "<<guess_num;
    return 0;
}*/
/*//method 2 
#include<iostream>
using std::cout;
using std::cin;
using std::endl;
int main(){
    int guess_num;
    cout<<"please guess a number ";
    cin>>guess_num;
    cout<<" your number is "<<guess_num;
    return 0
}*/
// scope resolution operator--> ::,std::cout



//cout and cin (string formating)
#include<iostream>
using namespace std;
int main(){
    cout<<"hello world"<<endl;
    cout<<"hello"<<endl;
    cout<<"world"<<endl;
    cout<<"hello"<<"world"<<endl;
    cout<<"hello\n"<<"world \n ";
    cout<<"hello \nout \n There \n ";
    int num1;
    int num2;
    double num3;
    
    cout<<"enter a number :";
    cin>>num1;
    cout<<"enter a number :";
    cin>>num2;
    cout<<"your entered"<<num1<<"and"<<num2<<endl;
    


    
    return 0;
    
}
