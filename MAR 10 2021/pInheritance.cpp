#include <iostream>
#include <string>
using namespace std;

class Address{
    public:
    string name;
    string zip_code;
};

class Student: public Address{
    public:
    string name;
    int roll_no;
    

    void display(){
        cout << "Student detail"<<endl;
        cout << "name = "<<this->name<<endl;
        cout << "roll no = "<<this->name<<endl;
        cout << "\nStudent Address Detail:"<<endl;
        cout << "Address Name "<<this->name<<endl;
        cout << "Address zip code "<<this->zip_code<<endl;
    }

    void input(){
        cout << "Student detail"<<endl;
        
        cout << "name = ";
        cin>>this->name;
        
        cout << "roll no = ";
        cin>>this->roll_no;

        
        cout << "\nStudent Address Detail:\n";
        
        cout << "Address Name ";
        cin>>name;
        
        cout << "Address zip code ";
        cin>>zip_code;
    }
};

int main(){
    Student *s1;
    s1->input();
    cout <<"\n======================\n";
    s1->display();
}