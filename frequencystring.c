#include<stdio.h>
int main(){
    char str[50];
    printf("Enter :");
    gets(str);
    int n=strlen(str);
    char max_char;
    int maxfreq=0;
    for(int i=0 ; i < n  ; i++){
        int count=0;
        for(int j=i+1; j<n ; j++){
            if(str[i]==str[j]){
                count++;
            }
        }
        if(count>maxfreq){
            max_char=str[i];
            maxfreq=count;
        }
    }
    printf("Your max repeating char is (%c) & its frequency is %d",max_char,maxfreq);
    return 0 ; 
}