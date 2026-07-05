#include<stdio.h>
int main(){
    char str[50];
    printf("Enter :");
    gets(str);
    char x , y ;
    printf("Enter that character thar you want to change and which character replaced by:\n");
    scanf("%c %c",&x, &y);
    int n=strlen(str);
    for(int i=0 ; i < n  ; i++){
        if(str[i]==x) str[i]=y;
    }
    printf("After deleting your string : %s",str);
    return 0 ; 
}