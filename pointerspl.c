#include<stdio.h>
// int main(){
//     int x,y;
//     printf("Enter x and y :");
//     scanf("%d %d",&x,&y);
//     int *p=&x;
//     int *q=&y;
//     printf("Sum of two poiters : %d",*p+*q);
//     return 0;
// }
// int vlue(int *x,int *y,int *sum){
//     *sum=*x+*y;
// }
// int main(){
//     int x , y, sum=0;
//     scanf("%d %d",&x, &y);
//     vlue(&x,&y,&sum);
//     printf("The sum of %d and %d is %d",x,y,sum);
//     return 0;
// }

// int main(){
//     int x , y, sum=0;
//     printf("Enter the value of x and y : ");
//     scanf("%d %d",&x, &y);
//     int *p,*q;
//     p=&x;
//     q=&y;
//     if(*p> *q){
//         printf("Your first number %d is maximum.",*p);
//     }
//     else 
//         printf("Your second number %d is maximum.",*p);
//     return 0;
// }

int main(){
    int n;
    printf("Enter the value of n : ");
    scanf("%d",&n);
    int *p;
    p=&n;
    int fact=1;
    for(int i=1 ; i<=*p ; i++){
        fact*=i;
    }
    printf("Your factorial is : %d",fact);

    return 0;
}