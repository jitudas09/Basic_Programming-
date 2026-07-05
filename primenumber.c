// #include<stdio.h>
// int main() {
//     int n; 
//     printf("Enter your number:");
//     scanf("%d",&n);
//     int flag=0;
//     for(int i=2 ; i<n ; i++){
//         if(n%i==0) flag==1;
//     }
//     if(flag==0) printf("%d is Prime nunber.\n",n);
//     else printf("%d is not Prime numer.\n",n);
//     return 0;
// }

#include<stdio.h>
int primecheek(int n){
    int temp=1;
    if(n<=0) temp=0;
    for(int i=2 ; i<=n/2 ; i++){
        if(n%2==0){
            temp=0;
            break;
        }
    }
    return temp;
}
int main(){
    int n ;
    printf("Enter:");
    scanf("%d",&n);
    int result=primecheek(n);
    if(result==1) printf("Prime numer.");
    else printf("NOt prime");
    return 0;
}





#include<stdio.h>
int prime (int n , int i){
  if(n<=1) return 0;
  if(n==i) return 1;
  if(n%i==0) return 0;
  return prime(n,i+1);
}
int main(){
  int n ; 
  printf("Enter your number : ");
  scanf("%d",&n);
  if(prime(n,2)) printf("Your numer %d is a prime number.",n);
  else printf("Your number %d is not a prime number.",n);
  return 0;
}
