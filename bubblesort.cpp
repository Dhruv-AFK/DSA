#include<iostream>
using namespace std;

int bubbleSort ( int arr[] , int n ){

    for ( int i = 0 ; i < n-1 ; i++) {


        for ( int j = 0 ; j < n-i-1 ; j++){
            
            if( arr[j] > arr[j+1]){
                
                swap( arr[j] , arr[j+1]);
            }
        }
    }
}

int printarray ( int arr[] , int n){
    for ( int i = 0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}

int main() {

    int arr[] = { 1,7,6,10,9,14};

    cout << " The before sorting"<< endl;

    printarray( arr , 6);
    
    bubbleSort ( arr , 6 );

    cout << " The after sorting"<< endl;

    printarray ( arr , 6);
}