#include<stdio.h>
int main() {
    int n ;
    printf("Enter your number:");
    scanf("%d",&n);
    if(n>0){
        if(n%2==0) printf("%d is an Even Number.\n",n);
        else printf("%d is an odd nunber.\n",n);
    }
    else printf("You entered invalid input.\n",n);
    return 0;
}