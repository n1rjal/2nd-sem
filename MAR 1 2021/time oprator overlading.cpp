#include <iostream>
using namespace std;

class Time{
    public:
        int hour;
        int minute;
        
    
    Time operator + (const Time &t2){
        Time newTime;
        newTime.hour = hour + t2.hour;
        newTime.minute = minute + t2.minute;
        if (newTime.minute >= 60){
            newTime.hour++;
            newTime.minute -= 60;
        }
        return newTime;
    }
};

int main(){
    Time t1;
    t1.hour = 4;
    t1.minute = 30;

    Time t2;
    t2.hour = 4;
    t2.minute = 30;
    
    Time t3 = t1 + t2;
    cout << t3.hour << " : "<<t3.minute<<endl;
    
}
