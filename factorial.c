#include <stdio.h>

int main() {
    int n;
    printf("Enter: ");
    scanf("%d", &n);

    int fact = 1;

    if(n > 0) {
        for(int i = n; i > 0; i--) {
            fact *= i;
        }
        printf("Factorial of %d is: %d\n", n, fact);
    }
    else {
        printf("Your input %d is an invalid input.\n", n);
    }

    return 0;
}
// int main(){
//     int n ; 
//     printf("Enter :");
//     scanf("%d",&n);
//     int fact=1;
//     int i=1;
//     while(i<=n){
//         fact*=i;
//         i++;
//     }
//     printf("Factorial :%d",fact);
//     return 0;
// }


#include<stdio.h>
int factorial(int n ){
    if(n==0 || n==1){
        return 1;
    }
    else return n*factorial(n-1);
}
int main(){
    int n ; 
    printf("Enter :");
    scanf("%d",&n);
    printf("Factorial :%d",factorial(n));
    return 0;
}
