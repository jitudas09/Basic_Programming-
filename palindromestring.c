#include<stdio.h>
int main(){
    char str[50];
    printf("Enter :");
    gets(str);
    int n=strlen(str);
    int flag=0;
    for(int i=0 ; i < n/2  ; i++){
        if(str[i]!=str[n-1-i]) flag=1;
    }
    if(flag==0) printf("Palindrome");
    else printf("Not palindrome");
    return 0 ; 
}