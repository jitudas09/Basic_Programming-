#include<stdio.h>
int main(){
    int n ; 
    printf("Enter :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("printing your array elements:\n");
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ;
}