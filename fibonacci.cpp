#include<iostream>
using namespace std;

int fibonacci ( int n){ 

    int nextTerm;
    int a = 0;
    int b = 1;
    for ( int i = 2 ; i<=n ; i++){
       nextTerm = a + b ; 
       cout<<nextTerm;
       a = b;
       b = nextTerm;
    
    }
    return nextTerm;  
}
int main(){
    int n ;
    cout<<"enter the number for fibonacci series : ";
    cin>>n;

    int nextTerm = fibonacci( n );
    cout<<"the answer is"<<nextTerm<<endl;
}