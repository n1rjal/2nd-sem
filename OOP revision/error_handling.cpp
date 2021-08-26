#include <iostream>
using namespace std;

class Height{
    private:
        
        float feet;
        float inches;
    public:
        class InvalidValueError{
            
        };

        class MessageError{
            
            public:
                string message;
                MessageError(string m){
                    this->message = m;
                }
                string getMessage(){
                    return this->message;
                }
        };

        Height(float f,float i){
            if (i>12){
                throw MessageError("Inch value must n't be greater than 12");
            }
            if (i<0 || f<0){
                throw InvalidValueError();
            }
            this->feet = f;
            this->inches = i;
        }

        void print(){
            cout << this->feet << " ft "<< this->inches<<" in" <<endl;
        }

};

int main(){
    try{
        Height h1(10,-100);
    }catch(const Height::MessageError e1){
        cout << "ERROR OCCURED: "<<e1.message<<endl;
    }catch(const Height::InvalidValueError e1){
        cout << "Invalid value provided"<<endl;
    }
}