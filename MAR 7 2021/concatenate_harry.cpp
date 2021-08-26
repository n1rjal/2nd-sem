#include<iostream>
#include<string>
using namespace std;
 
class String{
private:
  string str1;
public:
    String(){this->str1="";}
    String(string str):str1(str){}
 
    String operator +(const String str2){
        String newString;
        this->str1=this->str1 + str2.str1;
        newString.str1 = this->str1;
        return newString;
    }
    void display(){
        cout<<"the cncatinated string is  ---->>> \t "<<str1<<endl;
    }
};
 
 
void concatinate(string,string);
int main(){
    string source,destination;
    cout<<"enter the string which you want to concatinate::"<<endl;
    cin>>source;
    cout<<"enter the destination string::"<<endl;
    cin>>destination;
    concatinate(destination,source);  
}
 
void concatinate(string destinationString,string sourceString){
    String destination(destinationString);
    String source(sourceString);
    String concat=destination+source;
    concat.display();
}