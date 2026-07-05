#include<stdio.h>
int amstrong(int n){
    int digit=0  ,sum=0; 
    int i=0 ;
    int nc=n ,na=n;
    while(nc!=0){
        nc=nc/10;
        digit++;
    }
    while(na!=0){
        int temp=na%10;
        sum+=pow(temp,digit);
        na/=10;
    }
    return sum;
}
int perfect(int n){
    int sumof=0;
    for(int i=1 ; i<n ; i++){
        if(n%i==0){
            sumof+=i;
        }
    }
    return sumof;
}
int main(){
    int n; 
    printf("Enter your numer : ");
    scanf("%d",&n);
    int result=amstrong(n);
    if(result==n) printf("Amstrong number.");
    else printf("Not amstrong number.");
    int divisor=perfect(n);
    if(divisor==n) printf("\nPerfect number.");
    else printf("\nNot perfect number ");
    return 0;
}