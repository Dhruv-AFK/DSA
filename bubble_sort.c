# include <stdio.h>

int main(){

    int arr[]= { 4, 7 , 2 , 5 , 9 , 1 , 3 , 8 } ;
    
    int n=8 , i , j , min , temp;

    for( i = 0 ; i<n-1 ; i++){


        for( j=0 ; j<n-i-1 ; j++ ){

            if (arr[j] > arr[j+1]){

            temp = arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
            }
        }

    }
    for( i=0 ; i<n ; i++){
        printf("%d" , arr[i]);
    }

    return 0;

}