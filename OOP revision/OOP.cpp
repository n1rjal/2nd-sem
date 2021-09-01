#include <iostream>
#include <string>

using namespace std;

class TwoWheeler{
    // 6 pices container = 3 variable + 4 function -> Encapsulation
    // hiding unnecessary detail( company_password ) from user is called abstraction

    private:
        string company_password; // string
        string engine_comapany; //string
        float radius_of_wheel; // float
    public:
        void setEngineCompany(string company){
            this->engine_comapany = company;
        }
        string setEngineCompany(){
            return this->engine_comapany;
        }
        void setRadiusOfWheel(float r){
            this->radius_of_wheel = r;
        }
        float getRadiusOfWheel(){
            return this->radius_of_wheel;
        }
};

class Bike:public TwoWheeler{ // Inherits public property from TwoWheeler(In heritance)
    private:
        string model;
        float price;
    public:
        void setModel( string m ){
            this->model = m;
        }
        void setPrice( float p ){
            this->price = p;
        }
        string getModel( ){
            return this->model;
        }
        float getPrice(  ){
            return this->price;
        }
};


int main(){

    // same Bike class represnt 2 differnt bikes so, 
    // this program exhibits polymorphsim
    Bike b1;
    b1.setEngineCompany("Engine company 1");
    b1.setRadiusOfWheel(5);
    b1.setModel("Royale Enfield");
    b1.setPrice(150000);

    Bike b2;
    b2.setEngineCompany("Engine company 2");
    b2.setRadiusOfWheel(7);
    b2.setModel("NS");
    b2.setPrice(250000);

    return 0;

}