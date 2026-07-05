#include<stdio.h>
int main(){
    int n ; 
    printf("Enter :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int flag=1;
    for(int i=0; i<n/2 ; i++){
        if(arr[i]!=arr[n-i-1]) flag=0;
    }
    if(flag==1) printf("Your arrays element are palindrome.");
    else printf("Not palindrome.");
    return 0 ; 
}