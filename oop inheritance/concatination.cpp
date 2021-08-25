#include<iostream>
#include<string>
using namespace std;
class String_{
private:
  string str1;
public:
    String_(){this->str1="";}
    String_(string str):str1(str){}

    String_ operator +(const String_ &str2){                    //we are creating the oerator for the class 
                                                                //SYNATX ::   ReturnType   operator   sign()
        String_ mediator;
        this->str1=this->str1+str2.str1;
        mediator.str1=this->str1;
        return mediator;


    }
    String_(const String_&obj){
        this->str1=obj.str1;
    }
    void display(){
        cout<<"the cncatinated string is  ---->>> \t "<<str1<<endl;
    }
    ~String_(){}
                        //distructor is called defaulty if not assigned 

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



void concatinate(string des,string sour){
    String_ destination(des);
    String_ source(sour);
    String_ concat=destination+source;
    concat.display();

}


