#include <iostream>
using namespace std;

class Parent{
    private:
        // will not get passed into Child
        string name;
        
    
    protected:
        // will get passed into Child as private
        int age;

    public:
        // will get passed into Child as public
        void setName(string n){
            this->name = n;
        }
        string getName(){
            return this->name;
        }
};

class Child :public Parent{
    private:
        string parent_name;
    public:
        string getParetName(){
            return this->parent_name;
        }
        void setParentName(string parent){
            this->parent_name = parent;
        }
        void setAge(int age){
            this->age = age;
        }
        int getAge(){
            return this->age;
        } 

        void print(){
            cout << "Name: "<<this->getName()<<endl;
            cout << "Age: "<<this->age<<endl;
            cout << "Parent Name: "<<this->parent_name<<endl;
        }

};

int main(){
    Child c1;
    c1.setName("Child 1");
    c1.setAge(4);
    c1.setParentName("PaRENT 1");
    c1.print();
}