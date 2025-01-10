#include<iostream>
using namespace std;

int main()
{
    int n;
    cout<<"enter the value for prime number:";
    cin>>n;

    bool isPrime = 1 ;

    for( int i = 2 ; i < n ; i++)
    {
        if( n%i == 0)
        {
            cout<<" number is not prime "<< n << endl;
            isPrime = 0;
            break;
        }
    }
    if ( isPrime = 0 )
    {
        cout<<"number is not prime"<<endl;
    }
    else
    {
        cout<<" : number is prime"<<n<<endl;
    }

}