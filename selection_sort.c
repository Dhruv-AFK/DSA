// Online C compiler to run C program online
#include <stdio.h>

int main() {
    
    int arr[]= {4,7,2,5,9,1,3,8};
    
    int n=8 , i , j , min , temp;
    
    for( i=0 ; i<n-1 ; i++){
        min=i;
      
        for( j=i+1 ; j<n ; j++){
            
            if (arr[j] <= arr[min]){
        
            min = j;
            }
        }
        
        temp = arr[i];
        arr[i]=arr[min];
        arr[min]=temp;
    }   
    for( i=0 ; i<n ; i++){
        printf("%d" , arr[i]);
        
    }

    return 0;
}