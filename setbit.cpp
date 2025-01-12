#include<iostream>
using namespace std ;

int setBit(int a){

    int count = 0;
    while (a>0){
        if ( a & 1 == 1){
            count++;
        }
        a = a>>1;
    }
    return count;
}


int main(){
    int n;
    cin>> n;

    setBit(n);

    int count = setBit(n);

    cout<<" the number of bit "<< count << endl;

}