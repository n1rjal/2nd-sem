/*

What is constructor? 
A constructor is a special type of member function of a class which initializes objects of a class. In C++, Constructor is automatically called when object(instance of class) create. It is special member function of the class because it does not have any return type.
How constructors are different from a normal member function?

A constructor is different from normal functions in following ways: 

 - Constructor has same name as the class itself
 - Constructors don’t have return type
 - A constructor is automatically called when an object is created.
 - It must be placed in public section of class.
 - If we do not specify a constructor, C++ compiler generates a default constructor for object (expects no parameters and has an empty body).

*/

/*

1. Default Constructor
No arguments / parameters


#include <iostream>
using namespace std;

class Test{
    public:
        int a,b;
    Test(){
        a=20;
        b=3;
    }
};

int main(){
    Test t;
    cout<<t.a<<" "<<t.b<<endl;
}

*/


/*

2. Parameterized Constructors: It is possible to pass arguments to constructors. Typically, 
these arguments help initialize an object when it is created. To create a parameterized constructor,
simply add parameters to it the way you would to any other function. When you define the constructor’s body,
use the parameters to initialize the object. 


// CPP program to illustrate
// parameterized constructors
#include <iostream>
using namespace std;

class Point
{
private:
	int x, y;

public:
	// Parameterized Constructor
	Point(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	int getX()
	{
		return x;
	}
	int getY()
	{
		return y;
	}
};

int main()
{
	// Constructor called
	Point p1(10, 15);

	// Access values assigned by constructor
	cout << "p1.x = " << p1.getX() << ", p1.y = " << p1.getY();

	return 0;
}



*/



/*

3. Copy Constructor: A copy constructor is a member function which initializes an object using another object of the same class. Detailed article on Copy Constructor.

Whenever we define one or more non-default constructors( with parameters ) for a class, a default constructor(
without parameters ) should also be explicitly defined as the compiler will not
provide a default constructor in this case. However, it is not necessary but it’s considered 
to be the best practice to always define a default constructor. 

// Illustration
#include "iostream"
using namespace std;

class point
{
private:
double x, y;

public:

// Non-default Constructor &
// default Constructor
point (double px, double py)
{
	x = px, y = py;
}
};

int main(void)
{

// Define an array of size
// 10 & of type point
// This line will cause error
point a[10];

// Remove above line and program
// will compile without error
point b = point(5, 6);
}


*/