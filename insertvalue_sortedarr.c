#include<stdio.h>
int main(){
    int n , pos,value ; 
    printf("Array size : "); 
    scanf("%d",&n);
    int arr[100];
    printf("Enter your shorted array element: ");
    for(int i=0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Input the value to be inserted: ");
    scanf("%d",&value);
    pos=n;  // মানে value যদি সব elements এর চেয়ে বড় হয়, তাহলে শেষে insert হবে।
    for(int i=0 ; i<n ; i++){
        if(value<arr[i]) {
            pos=i;
            break;
        }
    }
    for(int i=n ; i>=pos ; i--){
        arr[i]=arr[i-1];
    }
    arr[pos]=value;
    n++;
    printf("After insert value , this list :");
    for(int i=0 ; i<n ; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}