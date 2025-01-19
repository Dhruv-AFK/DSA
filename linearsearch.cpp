#include<iostream>
using namespace std ; 

int linearsearch ( int arr[] , int size , int key ){

    for ( int i = 0 ; i < size ; i++) {

        if ( arr[i] == key ){

            return 1;
        }
        
    }  
    return 0;  
}


int main () {
    
    int arr [8] = { 2,3,4,5,6,7,8,13,};

    cout << " enter the element to be found :";
    int key;
    cin>>key;

    int found = linearsearch ( arr , 8 , key);

    if ( found ){
        cout << " key found : " << found << endl;
    }
    else {
        cout << " key is absent : " << endl;
    }
    return 0;
}