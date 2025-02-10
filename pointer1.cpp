#include<iostream>
using namespace std;

int main()
{
    int num = 5 ;

    cout << num << endl;

    cout << " address of num is " << &num << endl;

    int *ptr = &num ;

    cout << " address is " << ptr << endl;
    cout << " address is " << *ptr << endl;

    cout << "size of the pointer is " << sizeof(num) << endl; 


    int a = num ; 
    a++;

    cout << num << endl;

    int *p = &num;
    (*p)++;

    cout << num << endl;
}