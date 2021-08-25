#include<iostream>
#include<string>
using namespace std;

// inheritance
//what is it and why it is used ?
            //-provide a  method for  creating new class from existing classes.
            //-the new class contains the data and behaviour of the existing class 
            //-allow for reuse of existing class 
            //-allow us for focous of the common attibutes aming a set of classes
            //-allows new class to modify behaviour of existing class to make its unique 
            //(without actually modification the original class )


//Related clsss:
//Account ,saving account ,cheacking account ,etc
//person ,emplyee ,student ,faculty,adminstrator ,etc





//inheritance is used for reuse purpose 




//class Account {
//    //babalnce ,diposite ,withdraw
//};
//class Saving_account{
//    //balance deposite ,withdraw ,intreat rate 
//};
//class Cheack_account{
//    //balance ,deposite ,withdraw ,instrest rate 
//} ;
//
////account class -with inheritance -code reuse 
//
//
//class Account {
//    // //babalnce ,diposite ,withdraw
//};
//class Saving_account:public Account{
//    // //balance ,diposite ,withdraw
//};
//
//class Cheack_account:public Account{
//    //minimum balance,per check fee ,specialized account 
//};
//
//
//Class Trusted_account:public Account{
//    //intrest rate ,specifized withdraw 
//};
//
//



//Terminology 
        //-inheritance :  proces of creating a new classes form existing classes (reuse mechanism)
        //-single_inheritance:  new class is created from another   'single' class 
        //-multiple_inheritance : a new class is created from two or more other class
        //base class (parent class,super class ):the class being extended  or inherted from 
        //derived clas (child class ,sub class ):  the class being created from the base class .will inheritate and operations from the base class 
        
        
        
        //"is-Aa " relation ship(saving account is a account )
        //-public inheritance 
        //-derived classes are sub-type of their base
        //can be a derived classs object whenever we use a base class object ;
        
        
//generalization :combining similar into single ,more class based on common atrribute 
//specification : creating new classes from existing classes prioviding more specified attributes and atrributes 
//inheritance or class hiarchies : organization of our inheritance relationship



//derived clases from existing classes

//class Base {
//    //base class member 
//};
//
//class Derived :Access_specifier Base {
//    //derived class member 
//    
//};

//Acess_specifier can be :public ,private ,(default ),protected 
//-public :most common ,establishes "is-A" relationship between derived and based class 
//-private /protected  :establishes "has-A"relationshipbetween derived and base classes 

class Account{​​​​
public:
double balance;
string name;
void deposit (double amount);
void withdraw(double amount);
Account();
~Account();
}​​​​;
Account::Account() 
:balance{​​​​0.0}​​​​,name{​​​​"An Account"}​​​​{​​​​
}​​​​
Account::~Account(){​​​​}​​​​
void Account::deposit(double amount){​​​​
cout<<name<<"  deposited amount   :"<<amount ;
}​​​​
void Account::withdraw(double amount){​​​​
cout<<name << "withdraw ammount : "<<amount<<endl;
}​​​​





class Saving_account:public Account{​​​​
public:
double int_rate;
Saving_account();
~Saving_account();
int intrest(double ammount );

// void deposit(double amount);
// void withdraw(double amount);
}​​​​;
Saving_account::Saving_account()
:int_rate{​​​​0.3}​​​​{​​​​}​​​​
Saving_account::~Saving_account(){​​​​}​​​​
//void Saving_account::deposit(double amount){​​​​
// cout<<"Saving account deposit called with "<<amount<<endl;
//}​​​​
//void Saving_account::withdraw(double amount){​​​​
// cout<<"Saving account withdraw called with "<<amount<<endl;
//}​​​​

Saving_account::intrest(double ammount){
    
}


int main(){​​​​
Account acc;
acc.deposit(2000.0);
acc.withdraw(500.0);

Saving_account sav;
sav.deposit(2000.0);
sav.withdraw(500.0);

return 0;
}​​​​




// class member acess modifier in inheritance 
//protected members 
//class base{
//protected :
    //protected base class modifier 
    
//};
//-acccesible from the base class itself 
//-acessible from classed decrived from class derived from base 
//-not acessible by object or derived or base class 


//class Base{
//public :
   // int a ; //public base class member 
//protected:
   // int b;//protected base class member
//private:
   // int c ; //private base class member 
    
//};


//acess with public inheritance 
        //base class                acess in derived class 
        //public :a                     public :a
        //protected: b              protected : b 
        //private :c                    c: no acess
//acess with private inheritance 
//base class                acess in derived class 
        //public :a                     private  :a
        //protected: b              private  : b 
        //private :c                    c: no acess
//acess with protected inheritance 
//base class                acess in derived class 
        //public :a                     protected :a
        //protected: b              protected : b 
        //private :c                    c: no acess


class Base{
public:
    int a {0};
    void display(){cout<<","<<b<<","<<c<<endl;
protected :
    int b{0}
private:
    int c{0}
    
};
class Derived :public base{

};


int main(){
    cout<<"Base member acess from base object "<<endl;
    Base base;
    base.a=100;
    base.b=200;
    base.c=300;
}

 