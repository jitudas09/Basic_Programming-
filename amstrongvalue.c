#include<stdio.h>
#include<math.h>

int main() {
    int n ; 
    printf("Enter your nunber:");
    scanf("%d",&n);
    int nc=n,digit=0,temp,sum=0,cheek=n;
    while(n!=0){
        n/=10;
        digit++;
    }
    while(nc!=0){
        temp=nc%10;
        nc/=10;
        sum=sum+round(pow(temp,digit)); ///MUST round function use kora nahole ek kom asbe
    }
    printf("Your amstrong value is :%d\n",sum);
    if(sum==cheek) printf("And Your number %d is also  amstrong number.\n",sum);
    else printf("But, not amstrong number\n");
    return 0;
}