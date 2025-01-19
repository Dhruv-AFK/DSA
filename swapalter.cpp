#include<iostream>
using namespace std;

int swap ( int arr[] , int size ){

    int i;
    while ( i+1 < size-1){

        for ( i = 0 ; i < size ; i+=2 ) {
            swap(arr[i] , arr[i+1]);
        }
    }
}

int printarray ( int arr[] , int size ){

    for ( int i = 0 ; i < size ; i++ ){
        cout << arr[i] << " ";
    }
}

int main () {

    int arr[8] = { 1,4,6,7,89 ,56,46,21};

    swap ( arr , 8);
    printarray ( arr , 8 );
}