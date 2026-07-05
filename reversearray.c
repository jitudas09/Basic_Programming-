#include<stdio.h>
int main(){
    int n ,temp; 
    printf("Enter :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("printing your reversed array elements:");
    for(int i=0 ; i<n/2 ; i++){
        int temp=arr[i];
        arr[i]=arr[n-1-i];
        arr[n-1-i]=temp;  
    }
    for(int i=0; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ; 

}