#include<stdio.h>
// int main(){
//     char str[50];
//     // gets(str);              //দেওয়া উচিত না , তবে কোড ঠিকই রান করে
//     scanf("%[^/n]s",str);        //স্পেস ্ এর আগ পর্য়ন্ত ইনপুট নেয়
//     // fgets(str,sizeof(str),stdin);       //ফুল ইনপুট নেয় বাট শেষে নিউ লাইন চলে আসে
//     // int n=strlen(str);
//     // for(int i=0 ; i<n ; i++){
//     //     printf("%c",str[i]);
//     // }
//     printf("\n%s",str);
//     return 0;
// }
int main(){
    char str[50];
    scanf("%[^\n]s",str);
    printf("%s",str);
    return 0 ; 
}