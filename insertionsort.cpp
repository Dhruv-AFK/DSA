#include<iostream>
using namespace std;

int insertionSort ( int arr[] , int n ){

    for ( int i = 1 ; i < n ; i++ ){

        int temp = arr[i];

        int j = i - 1 ;

        for ( ; j >= 0 ; j-- ){

            if (arr[j] > temp){

                arr[j+1] = arr[j];
            }
            else {
                break;
            }
        }
        arr[j+1] = temp;
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
    
    insertionSort ( arr , 6 );

    cout << " The after sorting"<< endl;

    printarray ( arr , 6);
}    