#include<stdio.h>
#include<string.h>
int main(){
  char str[100],s[100];
  printf("Enter first string:");
  fgets(str,sizeof(str),stdin);
  int n=strlen(str);
  if(str[n-1]=='\n'){
    str[n-1]='\0';
    n--;
  }
  printf("Enter first second:");
  fgets(s,sizeof(s),stdin);
  int y=strlen(s);
  if(s[y-1]=='\n'){
    s[y-1]='\0';
    y--;
  }
  int count=0;
  if(n==y){
    for(int i=0 ; i<n ; i++){
      if(str[i]!=s[i]){
      count =1;
      break;
      }
    }
    if(count ==1 ) printf("Your strings are not equal.");
    else printf("Strings are equl.");
  }
  else printf("Your strings are not equal.");
  printf("\nYour strlen of n and y : %d %d",n , y);
  return 0;
}