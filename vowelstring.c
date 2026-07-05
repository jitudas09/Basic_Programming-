#include<stdio.h>
int main(){
    char str[50];
    printf("Enter :");
    gets(str);
    int n=strlen(str);
    for(int i=0 ; i < n  ; i++){
        if(str[i]=='a' || str[i]=='e' || str[i]=='i' ||str[i]=='o' || str[i]=='u'|| str[i]=='A' || str[i]=='E' || str[i]=='I' ||str[i]=='O' || str[i]=='U'){
            printf("Your character %c is vowel.\n",str[i]);            
        }
        else {
            if(str[i]==' ') printf("Your input (%c) is a space.\n",str[i]);
            else printf("(%c) is consonent.\n",str[i]);
        }
    }
    return 0 ; 
}