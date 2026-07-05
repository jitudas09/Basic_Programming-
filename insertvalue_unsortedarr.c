#include<stdio.h>
int main(){
    int n , idx,value ; 
    printf("Array size : ");
    scanf("%d",&n);
    int arr[100];
    printf("Enter your unsorted array element :\n");
    for(int i=0 ; i<n ; i++){
        printf("element-%d: ",i);
        scanf("%d",&arr[i]);
    }
    printf("Input the value to be inserted: ");
    scanf("%d",&value);
    printf("\nEnter the index no where the value to be inserted:");
    scanf("%d",&idx);
    for(int i=n ; i>=idx ; i--){
        arr[i]=arr[i-1];
    }
    arr[idx]=value;
    n++;
    printf("After insert value , this list :");
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}