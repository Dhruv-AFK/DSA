#include<iostream>
using namespace std;


void printArray( int arr[] , int size ) {

    cout << " printing the array " << endl;

    //printing the array
    for ( int i = 0 ; i < size ; i++ ){
        cout << arr[i] << " ";
    }
    cout << "printing DONE " << endl ;
}

int main() {
    
    //declare
    int number [5];
    
    //accessing 
    cout  << endl << " value at 14 index " << number[14] << endl;

    int second [3] = { 5 ,7 , 11};

    cout << endl  << "value at 2 index " << second[2] << endl;

    int n = 15 ; 

    int third[15] = { 2,7};
    int thirdSize = sizeof(third)/sizeof(int);
    printArray ( third , 15);
    cout<< endl << " size of the third is " << thirdSize << endl ; 


    cout << endl << "everything is Fine " << endl << endl ; 

    return 0 ;

}


