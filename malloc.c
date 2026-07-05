#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n; 
    printf("Enter No of gamers:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("No memory allocation");
        exit(0);
    }
    printf("Before assigining:\n");
    for(int i=0 ; i<n ; i++){
        printf("%d\n",ptr[i]);
    }
    for(int i=0; i<n ; i++){
        ptr[i]=i+1;
    }
    printf("After assigining:\n");
    for(int i=0 ; i<n ; i++){
        printf("%d\n",ptr[i]);
    }
    n=n+5;
    ptr=realloc(ptr,n*sizeof(int));
    for(int i=0; i<n ; i++){
        ptr[i]=i+1;
    }
    printf("After realloc:\n");
    for(int i=0 ; i<n ; i++){
        printf("%d\n",ptr[i]);
    }
    return 0 ;
