#include<iostream>
using namespace std ; 

int selectionSort ( int arr[] , int n ) {

    int min_index;

    for (  int i = 0;  i < n-1 ; i++ ){
        min_index = i;

        for ( int j = i+1 ; j < n ; j++ ){

            if ( arr[j] < arr[min_index]){

                min_index = j;
            }
        }
        swap( arr[min_index] , arr[i]);
    }
}

int printarray( int arr[] , int n){
    for ( int i = 0 ; i< n ; i++ ){
        cout<< arr[i]<< " ";
    }
    cout << endl ;
}

int main(){

    int arr[8] = { 3,5,2,6,7,9,1,4};

    cout << "  before sorted array is : "<< endl;

    printarray ( arr , 8);

    selectionSort ( arr , 8);

    cout << "  after sorted array is : "<< endl;

    printarray ( arr , 8);

}