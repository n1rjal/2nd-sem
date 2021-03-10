#include <iostream>

using namespace std;

int main(){
    int i,j,m,n;
    cout << "Enter 1st number ";
    cin >> m;

    cout << "Enter 2nd number ";
    cin >> n;

    int product =  m*n;
    int lcm = 0;
    int greaterNumber = m > n ? m : n;

    for (i=m;i<=product;i++){
        for (j=m;j<=product;j++){
            if ( (greaterNumber % m ==0) && (greaterNumber % n ==0) ){
                lcm = greaterNumber;
                break;
            }
            greaterNumber++;
        }
        if (lcm!=0){
            break;
        }

    }
    cout << "LCM of "<<m<<"and "<<n<<" is "<<lcm<<endl;
    
}