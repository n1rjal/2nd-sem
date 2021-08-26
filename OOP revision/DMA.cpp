#include <iostream>
using namespace std;

// lets create an array with 5 elements
// insert elements in them 
// return its sum of all elements
// and then delete them 

int main(){
    int n,i;
    int sum=0;
    cout << "Enter number of elements in array ";
    cin >> n;

    int *arr = new int[n];
    
    for (i=0;i<n;i++){
        cout << "Enter "<<i<<"th element ";
        cin >> *(arr+i);
    }

    for (i=0;i<n;i++){
        sum+= *(arr+i);
    }

    cout << "The sum of elements in array is "<<sum<<endl;
    delete[] arr;

    return 0;
}