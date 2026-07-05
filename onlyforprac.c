#include<stdio.h>

long long factorial(int n ){
    if(n==0) return 1 ; 
    else return n*factorial(n-1) ;
}

long long fibonacci(int n ){
    if(n==1 || n==2) return 1 ;
    else return fibonacci(n-1)+fibonacci(n-2) ;
}
int main (){
    int n ; scanf("%d",&n) ;
    printf("Factorial : %d",factorial(n)) ;
    return 0 ;
}