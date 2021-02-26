#include <iostream>
#include <string.h>
using namespace std;

class Vechile{
	private:
		string model;
		int noofwheels= 4;
	public:
		string enemy = "traffic police";
		Vechile(){
			model = "VECHILE MODEL 1";
			cout << "Vechile Build"<<endl;
		}
		string getModel(){
			return this->model;
		}
		
		//friend class Bike;
};

class Bike:public Vechile{
	public:
		string bike_number;
		Bike(string bike_number="ba 2 kha 2525"){
			cout << "A bike was created with number"<<bike_number<<endl;
		}
		string getEnemy(){
			return this->enemy;
		}
		int getNoOfWheels(){
			return this->noofwheels;
		}
};

int main(){
	Bike b1("bha 2 kha 1234");
	//cout << b1.getEnemy()<<endl;
	cout << b1.getModel()<<endl;
	cout << b1.getNoOfWheels()<<endl;
}


