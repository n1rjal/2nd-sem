#include<iostream>
using namespace std;

void reverseit(char *str, int len) {
    for(int i =0 ; i< (len / 2) ; i++) {
        char tmp = str[i];
        str[i] = str[len-1- i];
        str[len-1-i] = tmp;
    }
}

int main() {
    char s[] = "SUSHAN";
    char *a = s;
    reverseit(a, 6);
    for(int i = 0 ; i<6; i++) {
        cout<<s[i];
    }
}