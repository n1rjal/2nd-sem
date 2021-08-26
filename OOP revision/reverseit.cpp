#include <iostream>
#include <string>

using namespace std;

string reverseit(char s[]){
    int i=0;
    char ch;
    int length = strlen(s);
    for (i=0;i<length/2;i++){
        ch = s[i];
        s[i] = s[length-i-1];
        s[length-1-i] = ch;
    }
    return s;
}

void reverseit_(char s[]){
    int i = 0;
    int length = strlen(s);
    char ch;
    int j= length - 1;
    for (i=0;i<length/2;i++){
        ch = s[j];
        s[j] = s[i];
        s[i] = ch;
        j--;
    }
    cout << s <<endl;
}

int main(){
    char s1[100] = "helo";
    char s2[100] = "nirjal";
    char s3[100] = "123456789";
    cout<<reverseit(s1)<<endl;
    cout<<reverseit(s2)<<endl;
    reverseit_(s3);
    return 0;   
}