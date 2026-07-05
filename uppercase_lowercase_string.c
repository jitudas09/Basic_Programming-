#include<stdio.h>
int main(){
    char str[50];
    printf("Enter :");
    gets(str);
    int n=strlen(str);
    for(int i=0 ; i < n  ; i++){
        if(str[i] >='a' && str[i] <= 'z' ){
            str[i]=str[i]-32;
        }
    }
    printf("Your string in lowercae to uppercase : %s",str);
    return 0 ; 
}