#include<stdio.h>
int main() {
    char str[50];
    printf("Input your string :");
    gets(str);
    int n=strlen(str);
    printf("Printing your string :\n");
    for(int i=0 ; i<n/2 ; i++){
        char temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;
    }
    printf("%s",str);

    return 0;
}