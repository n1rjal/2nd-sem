#include <iostream>
using namespace std;

class Teacher{
    private:
        int tid;
        string subject;
    public:
        
        void setTid(int id){
            this->tid = id;
        }
        void setSubject(string s){
            this->subject = s;
        }
        int getTid(){
            return this->tid;
        }
        string getSubject(){
            return this->subject;
        }
};

class Staff{
    private:
        int sid;
        string position;
    
    public:
        
        void setSid(int id){
            this->sid = id;
        }
        void setPosition(string p){
            this->position = p;
        }
        int getSid(){
            return this->sid;
        }
        string getPosition(){
            return this->position;
        }
};

class Coordinator:public Staff, public Teacher{
    private:
        string department;
    public:
        void setDepartment( string d ){
            this->department = d;
        }
        string getDepartment(){
            return this->department;
        }
};

int main(){
    Coordinator c1;
    
    // from teacher
    c1.setTid(3);
    c1.setSubject("Computer");
    
    // from staff
    c1.setSid(4);
    c1.setPosition("Computer Teacher");
    
    // from coordinator
    c1.setDepartment("Computer Faculty");
    
    // from teacher
    cout << c1.getTid()<<endl;
    cout << c1.getSubject()<<endl;
    
    // from staff
    cout << c1.getSid()<<endl;
    cout << c1.getPosition()<<endl;
    
    // from coordinator
    cout << c1.getDepartment()<<endl;
}