#include<stdio.h>

int main(){
    int n , idx; 
    printf("Enter your array size :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        printf("element-%d:",i);
        scanf("%d",&arr[i]);
    }
    printf("\nEnter index to delete (0 to %d) :",n-1);
    scanf("%d",&idx);
    for(int i=idx ; i<n-1 ; i++){       //i<n-1 because last e ak gor khali pore takhe taie.
        arr[i]=arr[i+1];
    }
    n--;
    printf("\nYour final array :\n");
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);  
    }
    return 0 ; 
}

