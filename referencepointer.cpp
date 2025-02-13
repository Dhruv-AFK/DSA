#include<iostream>
using namespace std;

int main(){

    int i = 5;

    int& j = i;

    int& k = j;

    cout << i << endl;
    i++;
    cout << i << endl;
    j++;
    cout << j << endl;
    cout << k << endl;
    k++;
    cout << k << endl;
}