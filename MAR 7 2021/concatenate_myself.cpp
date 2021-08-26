#include <iostream>
using namespace std;

class String{
    string str;
    public:
    String(string str){
        this->str = str;
    }
    String operator + (const String &str_param){
        string temp_string;
        temp_string = this->str + str_param.str;
        String tempString(temp_string);
        return tempString;
    }
    void display(){
        cout << this->str << endl;
    }
};

int main(){
    string str1,str2;
    cout << "Enter first string " <<endl;
    cin>>str1;
    cout << "\nEnter second string " <<endl;
    cin>>str2;
    String s1(str1);
    String s2(str2);
    String s3 = s1+s2;
    s3.display();
};