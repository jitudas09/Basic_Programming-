#include<stdio.h>
int main(){
    int n ; 
    printf("Enter :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int max=-2,idx;
    printf("printing your array elements:\n");
    for(int i=0 ; i<n ; i++){
        if(arr[i]>max) {
            max=arr[i];
            idx=i;
        }
    }
    printf("Your max array digit is and max idx :%d %d",max,idx);
    return 0 ; 
}