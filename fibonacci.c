// #include<stdio.h>
// int main() {
//     int n ; 
//     printf("Enter your number:");
//     scanf("%d",&n);
//     printf("Fibonacci series: ");
//     printf("0 , 1 , ");
//     int a=0 , b=1,x;
//     for(int i=0; i<n-2 ; i++){
//         x=a+b;
//         printf("%d ,",x);
//         a=b;
//         b=x;
//     }
//     return 0;
// }
// //  0 1 1 2 3 

// int main(){
//     int n ,x; 
//     printf("Enter your number:");
//     scanf("%d",&n);
//     printf("Fibonacci series: ");
//     printf("0 , 1 , ");
//     int i=0,a=0,b=1 ; 
//     while(i<n-2){
//         x=a+b;
//         printf("%d ",x);
//         a=b;
//         b=x;
//         i++;
//     }
//     return 0;
// }



#include<stdio.h>
int fibonacci(int n){
    if(n==1 || n==2) return 1;
    else return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int n ; 
    printf("Enter :");
    scanf("%d",&n);
    printf("The fibonacci series are : ");
    for(int i=1 ; i<=n ; i++){
        printf("%d ",fibonacci(i));
    }
    return 0;
}
