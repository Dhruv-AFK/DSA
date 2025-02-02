#include<iostream>
using namespace std;

bool isPresent ( int arr[][4] , int target , int i , int j){
    for ( int  i =  0  ; i < 3 ; i++){
        for ( int j = 0 ; j < 4 ; j++){

            if ( arr[i][j] == target ){
                return 1;
            }
        }
    }
    return 0;
}

int main () { 

    int arr [3] [4] ;

    //taking input
    for ( int i = 0 ; i < 4 ; i++ ){
        for ( int j = 0 ; j < 3 ; j++){
            cin >> arr[j][i];
        }
    }

    // printing
    for ( int i = 0 ; i < 3 ; i++ ) { 
        for ( int j = 0 ; j < 4 ; j++ ) { 
            cout << arr[i][j] << " ";
        }
        cout << endl ;
    }

    cout << " enter the element to search " << endl ;
    int target ; 
    cin >> target ; 

    if ( isPresent  ( arr , target , 3, 4)) {
        cout << " element found " << endl;
    }
    else{
        cout << " not found " << endl ;
    }
    return 0;
}
