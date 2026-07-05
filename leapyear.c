#include<stdio.h>
int main(){
    int n ; 
    printf("Enter a year :");
    scanf("%d",&n);
    if(n%400==0) printf("%d is a Leap Year.\n",n);
    else if(n%100!=0 && n%4==0) printf("%d is a Leap Year.",n);
    else printf("%d is a not Leap Year",n);
    return 0;
}