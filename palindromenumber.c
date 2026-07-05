#include<stdio.h>
int main() {
    int n ;
    printf("Enter your number:");
    scanf("%d",&n);
    int nc=n,reverse=0,remind;
    while(n!=0){
        remind =n%10;
        reverse=reverse*10+remind;
        n/=10;
    }
    if(reverse==nc) printf("%d is a palindrome number.\n",reverse);
    else printf("%d is not a palindrome number",reverse);
    return 0;
}