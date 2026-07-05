#include<stdio.h>
#include<string.h>
int main(){
    char str[100];
    gets(str);
    char str1[100];
    gets(str1);
    int i=0 ,j=0;
    while(str[i]!='\0'){
        i++; //i er idx seshe nia jawa oikhane add hobe
    }
    while(str1[j]!='\0'){
        str[i]=str1[j];
        i++;
        j++;
    }
    str[i]='\0'; // seshe null char rakha
    printf("\nAfter concatentation: %s\n",str);
    printf("\nAfter concatentation: %s\n",str1);

    return 0 ;
}

#include<stdio.h>
#include<string.h>
int main (){
  char str[100];
  char str1[100];
  printf("Enter first string : ");
  fgets(str,sizeof(str),stdin);
  int n =strlen(str);
    if(str[n-1] == '\n'){
        str[n-1] = '\0';
        n--;
    }
  printf("Enter second string:");
  fgets(str1,sizeof(str1),stdin);
  int y=strlen(str1);
    if(str1[y-1] == '\n'){
        str1[y-1] = '\0';
        y--;
    }
  for(int i=0 ; i<y; i++){
    str[n+i]=str1[i];
  }
  str[n+y]='\0';
  printf("Your string after concate manually : %s",str);
  return 0 ; 
}