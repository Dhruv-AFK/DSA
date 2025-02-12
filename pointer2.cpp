#include<iostream>
using namespace std;

int main (){


    int arr[10] = { 1,2,3,4,5};
    char ch[60] = "a b c d e ";

    int *ptr = &arr[0];
    char *c = &ch[0];

    cout << ptr << endl;

    cout << *ptr << endl;

    cout<< c << endl;
    cout<< *c << endl;

    
}