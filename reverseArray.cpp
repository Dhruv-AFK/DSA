#include<iostream>
using namespace std ; 

void reverse ( int arr [] , int n) {

    int start = 0; 
    int end = n-1;

    while ( start <= end ){
        swap( arr[start], arr[end]);
        start++;
        end--;
    }
}

void printArray ( int arr[] , int n ){

    for ( int i = 0 ; i < n ; i++ ){
        cout << arr[i] << " ";
    }
    cout << endl;
}


int main (){

    int arr1[6] = {1,2,3,4,5,6};
    int arr2[10] = { 11,12,13,14,15,16,17,18,19};

    reverse ( arr1 , 6 );

    printArray ( arr1 , 6 );


    reverse( arr2 ,10 );

    printArray ( arr2 , 10);
}