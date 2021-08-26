#include<iostream> 
using namespace std; 

// Analyse this program and use " Virtual " Keyword to avoid diamond problem.
class Person
{
    //data members of person
public:
    Person(int x)
    {
        cout << "Person" << x << "Called" << endl;
    }
    Person()
    {
        cout << "Person default constructor called" <<endl;
    }
};
class Faculty :  public Person //2
{
    //data members of faculty
public:
    Faculty(int x) : Person(x) {
        cout << "Faculty" << x << "Called" << endl;
    }
};
class Student :  public Person //3 
{
    //data member of faculty
public:
    Student(int x) : Person(x)
    {
        cout << "Student" << x << "Called" << endl;
    }
};
class TA : public Faculty, public Student
{
public:
    TA(int x) : Faculty(x), Student(x)
    {
        cout << "TA" << x << "Called" << endl;
    }
};
int main()
{
    TA ta1(30);
}
