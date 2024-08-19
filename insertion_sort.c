# include <stdio.h>

int main(){

    int arr[]= { 4, 7 , 2 , 5 , 9 , 1 , 3 , 8 } ;
    
    int n=8 , i , j , min , temp;

    for(int i = 1; i<n; i++) {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0; j--) {
            
            if(arr[j] > temp) {
                //shift
                arr[j+1] = arr[j];
            }
            else { // ruk jao
                break;
            }
            
        }
        //copy temp value
        arr[j+1] = temp;  
    } 
    for( i=0 ; i<n ; i++){
        printf("%d" , arr[i]);
    }

    return 0;

}
