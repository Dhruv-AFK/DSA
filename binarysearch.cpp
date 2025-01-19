#include<iostream>
using namespace std ;


int binarysearch ( int arr[] , int size , int key ){

    int start = 0;
    int end = size - 1 ; 

    int mid = (start + end ) / 2;

    while ( start <= end ){

        if ( arr [ mid ] == key ){
            return mid;
        }
        if  ( arr [ mid ] < key){
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
        mid = (start + end ) / 2;

    }    
}

int main (){

    int arr1[8] = { 2 ,3 ,4 ,5,6,7,8,9 };
    
    int arr1index = binarysearch ( arr1 , 8 ,4  );
    cout << " index of your key is : " << arr1index << endl;

    return 0 ;
}