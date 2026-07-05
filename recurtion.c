#include<stdio.h>
void fun(int n){
    if(n==0) return ;
    printf("Hellow world.\n");
    fun(n-1);
}
int main(){
    int n; 
    scanf("%d",&n);
    fun(n);
}  


#include<stdio.h>
int sumcalc(int n){
    if(n==1) return 1;
    return (sumcalc(n-1)+n);
}
int fact(int n){
    if(n==1) return 1 ;
    return (fact(n-1)+n);
}
int main(){
    printf("factorial=%d",fact(3));

}


#include<stdio.h>
int digit(int n){
    if(n==0) return 1 ; 
    return (n%10+digit(n/10));
}
int main(){
    printf("%d",digit(43231));
}

#include<stdio.h>
int fib(int n){
    if(n==0) return 0 ; 
    if(n==1) return 1;
    return (fib(n-1)+fib(n-2));
}
// int main(){
//     printf("%d is your nth fibonacci number.",fib(6));
// }
int main(){
    int n ; 
    scanf("%d",&n);
    printf("Printing fibonacci series : ");
    for(int i=0 ; i<n ; i++){
        printf("%d ",fib(i));
    }
} 