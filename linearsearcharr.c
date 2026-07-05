#include<stdio.h>
int main(){
    int arr[100] ,n,value, found=0;
    printf("Enter your element number:");
    scanf("%d",&n);
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to search:");
    scanf("%d",&value);
    for(int i=0 ; i<n ; i++){
        if(value==arr[i]){
            printf("Your element fount at position %d",i+1);
            found=1;
            break;
        }
    }
    if(found==0) printf("%d not found in the array.\n",value);
    return 0; 
}