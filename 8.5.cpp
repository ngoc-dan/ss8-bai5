#include<stdio.h>
int main(){
int i,j,sum=0;
int arr[2][3]={{1,9,8},{5,6,11}};
for( i=0 ; i<=1 ; i++){
    	for( j=0 ; j<=2 ; j++){
    		sum=sum+arr[i][j];
    	}
    }
    printf("tong la : %d",sum);
    
    return 0;
}
    		
