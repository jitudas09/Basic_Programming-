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
    for(int i=0; i<n-1 ; i++){
        int max=arr[i];
        int idx=i;
        for(int j=i+1 ; j<n ; j++){
            if(arr[j]>max){
                max=arr[j];
                idx=j;
            }
        }
        arr[idx]=arr[i];
        arr[i]=max; 
    }
    printf("printing your array in desending order :\n");
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0 ; 
}