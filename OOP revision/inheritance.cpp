#include <iostream>
#include <string>
using namespace std;

class FourWheeler{
    private:
        int max_speed;

    public:
        FourWheeler(int max_speed){
            this->max_speed = max_speed;            
        }

};

class Car:FourWheeler{
    private:
        string model;
        string brand;
        float price;
        float mileage;
        int fuel_capacity;

    public:
        // lets call max-speed for fourwheller from car
        Car(string model, string brand, float price,int max_speed, float mileage):FourWheeler(max_speed) {
            cout << "Car()" << endl;
            this->model = model; 
            this->brand = brand;
            this->price = price;
            this->mileage = mileage;
            this->fuel_capacity = 2;
        }

        void willMyCarTravel(float distance){
            if(distance <= this->fuel_capacity* this->mileage){
                cout << "Car can travel " << distance << " km" << endl;
            }else{
                cout << "Car cannot travel " << distance << " km" << endl;
            }
        }
};


int main(){
    Car car("Honda","Civic",25000,200,10);
    car.willMyCarTravel(20);
    car.willMyCarTravel(10);
    car.willMyCarTravel(50);
}


