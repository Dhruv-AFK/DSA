#include<iostream>
using namespace std;

int isEven( int a){

    if(a%2 == 0){
        cout<<"number is even : "<<a<<endl;
    }
    else{
        cout<<"number is odd"<< endl;
    }
}


int main(){

    int a ; 
    cin>>a;

    isEven ( a );

}