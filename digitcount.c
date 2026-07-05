#include<stdio.h>
int main(){
    int n ;
    printf("Enter your number :");
    scanf("%d",&n);
    int digit=0;
    while(n!=0){
        n=n/10;
        digit++;
    }
    printf("Your digit is :%d",digit);
    return 0;
}
