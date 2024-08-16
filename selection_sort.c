#include <stdio.h>

int main(){

    int arr[]={4,7,2,5,9,1,3,8};
    int n=8, i , j , mini  , temp ;

    for (i=0 ; i < n-1 ; i++){
        mini = i;

        for ( j=i ; j<n ; j ++){

            if(arr[j] <= arr[mini]){

              mini=j;  
            }    
        }
        temp = arr[i];
        arr[i] = arr[mini];
        arr[mini] = temp;

    }

    for (i = 0 ; i < n ; i++)
    {
        printf("%d " , arr[i]);
    }
    return 0 ;
}
