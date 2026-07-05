#include<stdio.h>
int main(){
    int n ; 
    printf("Enter :");
    scanf("%d",&n);
    int arr[n];
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    int unique=0;
    for(int i=0 ; i<n ; i++){
        int cout=0;
        for(int j=0 ; j<n ; j++){
            if(arr[i]==arr[j]){
                cout++;
            }
        }
        if(cout==1) {
            printf("%d is your unique numbers.\n",arr[i]);
            unique++;
        }
    }
    printf("Number of unique numbers is :%d\n",unique);
    return 0 ; 
}