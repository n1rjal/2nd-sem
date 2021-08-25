//#include<iostream>
//using namespace std;
/*class Base{
    //default constructor
    public:
     Base(){
        cout<<"base default construtor "<<endl;
       }
};

class Derived:public Base{
    int y ;
        //default constructor 
   public:
        Derived(){
            cout<<"derived default constructor" <<endl;
            
            
            }
        //parameterized 
        Derived(int a){
            cout<<"Derived Parameterized constructor" <<endl;
             
        }
};


int main(){
    Base b;
    Derived d1;
    Derived d2(10);
    return 0;
}*/

// Analyse this program and use "Virtual" Keyword to avoid diamond problem.
/*class Person
{
    //data members of person
public:
    Person(int x)
    {
        cout << "Person" << x << "Called" << endl;
    }
};
class Faculty : virtual public Person
{
    //data members of faculty
public:
    Faculty(int x) : Person(x)
    {
        cout << "Faculty" << x << "Called" << endl;
    }
};
class Student : virtual public Person
{
    //data member of faculty
public:
    Student(int x) : Person(x)
    {
        cout << "Student" << x << "Called" << endl;
    }
};
class TA : virtual public Faculty, virtual public Student
{
public:
    TA(int x) : Person(x), Faculty(x), Student(x)
    {
        cout << "TA" << x << "Called" << endl;
    }
};
int main()
{
    TA ta1(30);
    return 0;
}


// Aggregation program
#include <iostream>
#include <string>
using namespace std;

class student //educational background
{
    private:
    string school; //name of school or university
    string degree; //highest degree earned
    public:
    void getedu()
    {
        cout << "Enter name of school or university:";
        cin >> school;
        cout << "Enter highest degree earned \n";
        cout << "(Highschool, Bachelor’s, Master’s, PhD): ";
        cin >> degree;
    }
    void putedu() const
    {
        cout << "\n School or university: "<< school;
        cout << "\n Highest degree earned: " << degree;
    }
};

class employee
{
    private:
    string name; //employee name
    unsigned long number; //employee number
    public:
    void getdata()
    {
        cout << "\n Enter last name:" ; cin >> name;
        cout << "“ Enter number: “"; cin >> number;
    }
    void putdata() const
    {
        cout << "“\n Name: “ "<< name;
        cout << "“\n Number: “" << number;
    }
};

class manager //management
{
    private:
    string title; //”vice-president” etc.
    double dues; //golf club dues
    employee emp; //object of class employee
    student stu; //object of class student
    public:
    void getdata()
    {
        emp.getdata();
        cout << "“ Enter title: “"; cin >> title;
        cout << "“ Enter golf club dues: “"; cin >> dues;
        stu.getedu();
    }
    void putdata() const
    {
        emp.putdata();
        cout << "“\n Title: “" << title;
        cout << "“\n Golf club dues: “" << dues;
        stu.putedu();
    }
};

class scientist //scientist
{
    private:
    int pubs; //number of publications
    employee emp; //object of class employee
    student stu; //object of class student
    public:
    void getdata()
    {
        emp.getdata();
        cout << "“ Enter number of pubs: “"; cin >> pubs;
        stu.getedu();
    }
    void putdata() const
    {
        emp.putdata();
        cout << "“\n Number of publications: “" << pubs;
        stu.putedu();
    }
};

class laborer //laborer
{
    private:
    employee emp; //object of class employee
    public:
    void getdata()
    { emp.getdata(); }
    void putdata() const
    { emp.putdata(); }
};

int main()
{
manager m1;
scientist s1, s2;
laborer l1;
cout << endl;
cout << "“\nEnter data for manager 1”"; //get data for
m1.getdata(); //several employees
cout << "“\nEnter data for scientist 1”";
s1.getdata();
cout << "“\nEnter data for scientist 2”";
s2.getdata();
cout << "“\nEnter data for laborer 1”";
l1.getdata();
cout << "“\nData on manager 1”"; //display data for
m1.putdata(); //several employees
cout << "“\nData on scientist 1”";
s1.putdata();
cout << "“\nData on scientist 2”";
s2.putdata();
cout << "“\nData on laborer 1”";
l1.putdata();
cout << endl;
return 0;
}*/

//Opertaor overloading
/*#include <iostream>
using namespace std;
class Count{
private:
int value;
public:
    //Constructor to initialize count to 5
    Count(): value (5){}
//Overload ++ using prefix
//int operator ++ (){ // for prefix
//return ++value;
//}
    Count operator ++ (int){
    Count temp;
    temp.value=value++;
    return temp;
}
void display(){
    cout<<"Count: "<<value<<endl;
}
};
int main(){
    Count count1, result;
    // Call the "void operator ++ ()" function
    //++count1;
    // Call the "void operator ++ (int)" function
    count1++;
    result = count1++;
    result.display();
    return 0;
}*/

/*#include<iostream>
using namespace std;
 class Distance{
    private:
        int feet,inches;
    public:
        void get_distance(){
            cout << "Enter distance in feet: ";
            cin >>feet;
            cout << "Enter distance in inches: ";
            cin >>inches;
        }
        void show_distance()
        {
            cout << "Feet:" << feet << " inches: " << inches << endl;
        }
        //to add two distances using +
        Distance operator+(Distance &dist)
        {
            Distance temp;  
            temp.inches= inches+dist.inches;
            temp.feet  = feet+dist.feet+(temp.inches/12);
            temp.inches=temp.inches%12;
            return temp;
        }
};
int main()
{
    Distance d1,d2,d3;
     
    cout << "Enter first  distance:" << endl;
    d1.get_distance();
    cout << endl;
    cout << "Enter second distance:" << endl;
    d2.get_distance();
    cout << endl;
     
    d3=d1+d2;
    cout << "Total Distance:" << endl;
    d3.show_distance();
    cout << endl;
    return 0;
}*/

//Binary operator overloading
#include <iostream>
using namespace std;
class Distance{
private:
    int feet;
    float inches;
public:
    Distance():feet(0), inches(0.0){}
    Distance(int ft, float in):feet(ft),inches(in){};
    void getdist(){
        cout<<"Enter feet: "; cin>>feet;
        cout<<"Enter inches: "; cin>>inches;
    }
    void showdist() const{
        cout<<feet<<"\t"<<inches<<endl;
    }
    Distance operator +(Distance d2) const{
        int f= feet+d2.feet;
        float i = inches+d2.inches;
        if(i>=12.0){
            i-=12.0;
            f++;
        }
        return Distance(f,i);
    }
};

int main(){
    Distance dist1, dist3;
    dist1.getdist();
    Distance dist2;
    dist2.getdist();
    dist3=dist1 + dist2;
    Distance dist4;
    dist4=dist1 + dist2 + dist3;
    cout<<"Dist1="; dist1.showdist();cout<<endl;
    cout<<"Dist2="; dist2.showdist();cout<<endl;
    cout<<"Dist3="; dist3.showdist();cout<<endl;
    cout<<"Dist4="; dist4.showdist();cout<<endl;
    return 0;
}

