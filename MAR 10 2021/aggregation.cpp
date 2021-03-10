#include <iostream>
#include <string>
using namespace std;

class Address{
    public:
    string name;
    int zip_code;
};

class Student{
    public:
    string name;
    int roll_no;
    Address addr;

    void display(){
        cout << "Student detail"<<endl;
        cout << "name = "<<this->name<<endl;
        cout << "roll no = "<<this->name<<endl;
        cout << "\nStudent Address Detail:"<<endl;
        cout << "Address Name "<<this->addr.name<<endl;
        cout << "Address zip code "<<this->addr.zip_code<<endl;
    }

    void input(){
        cout << "Student detail"<<endl;
        
        cout << "name = ";
        cin>>this->name;
        
        cout << "roll no = ";
        cin>>this->roll_no;

        Address address1;
        cout << "\nStudent Address Detail:\n";
        
        cout << "Address Name ";
        cin>>address1.name;
        
        cout << "Address zip code ";
        cin>>address1.zip_code;

        this->addr = address1;
    }
};

int main(){
    Student s1;
    s1.input();
    cout <<"\n======================\n";
    s1.display();
}