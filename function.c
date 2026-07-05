#include<stdio.h>
int jugkoro(int a , int b){
    int sum=a+b ; 
    return sum ; 
}
int main (){
    int a,b;
    printf("Enter a and b :");
    scanf("%d %d",&a , &b);
    int result=jugkoro(a,b);
    printf("Your summation is : %d",result);
    return 0 ; 
}
#include<stdio.h>
int manualpower(int base , int power){
    int p=1;
    for(int i=1 ; i<=power ; i++){
        p*=base;
    }
    return p ; 
}
int main (){
    int base , power ; 
    printf("Enter base and power : ");
    scanf("%d %d",&base , &power);
    printf("Your power function is : %d", manualpower(base , power));
    return 0 ; 
}

#include<stdio.h>
int manualpower(int base , int power){
    int p=1;
    for(int i=1 ; i<=power ; i++){
        p*=base;
    }
    return p ; 
}
int digit_calc(int n ){
    int digit=0; 
    while(n){
        n/=10;
        digit++;
    }
    return digit ; 
}
int amstrongcalc(int n ){
    int digit=digit_calc(n);
    int sum=0 ; 
    while(n){
        int t=n%10;
        n=n/10;
        sum+=manualpower(t,digit);
    }
    return sum;
}
int main (){
    int n ; 
    printf("Enter Your number : ");
    scanf("%d",&n);
    printf("Your digit is : %d",amstrongcalc(n));
    return 0 ; 
}


#include<stdio.h>
int primecheek(int n){
    int temp=0 ; 
    for(int i=2 ; i<=n/2 ; i++){
        if(n%i==0){ 
            temp=1;
            break ;
        }
    }
    return temp ; 
}
int main (){
    int n ; 
    printf("Enter your number : ");
    scanf("%d",&n);
    int result=primecheek(n);
    if(result==0) printf("Prime number.");
    else printf("Not prime number.");
    return 0 ; 
}


#include<stdio.h>
int input(int a[],int size){
    for(int i=0 ; i<size ; i++){
        scanf("%d",&a[i]);
    }
    return 0 ; 
}
// int output(int a[],int size){
//     for(int i=0 ; i<size ; i++){
//         printf("%d",a[i]);
//     }
//     return 0 ; 
// }
int sumar(int a[],int size){
    int sum=0 ; 
    for(int i= 0 ; i<size ; i++){
        sum+=a[i];
    }
}
int main (){
    int n ;
    printf("Enter your array size :");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    // output(arr,n);
    printf("%d is your sum.",sumar(arr,n));
    
}

#include<stdio.h>
int input(int a[],int size){
    for(int i=0 ; i<size ; i++){
        scanf("%d",&a[i]);
    }
    return 0 ; 
}
int maxcalc(int a[],int size){
    int temp=-1,max,idx;
    for(int i=0 ; i<size ; i++){
        if(temp<a[i]) {
            max=a[i];
            idx=i;
        }
    }
    printf("Your maximum array digit is : %d\n",max);
    printf("Your index number is : %d",idx);
    return 0;
}

int main (){
    int n ;
    printf("Enter your array size :");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    maxcalc(arr,n);
    
}

int oddevencount(int a[],int size){
    for(int i=0; i<size ; i++){
        if(a[i]%2==0) {
            printf("%d is even\n",a[i]);
        }
        else printf("%d is odd.\n",a[i]);
    }
    return 0 ; 
}
int main (){
    int n ;
    printf("Enter your array size :");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    // output(arr,n);
    oddevencount(arr,n);
    
}

int maxcalc(int a[],int size){
    int max=-3,idx;
    for(int i=0 ; i<size ; i++){
        if(max<a[i]) {
            max=a[i];
        }
    }
    printf("Your maximum array digit is : %d\n",max);
    printf("Your index numbers are :");
    for(int i=0 ; i<size ; i++){
        if(max==a[i])
        printf("%d ",i);
    }
    return 0;
}

#include<stdio.h>
int input(int a[],int size){
    for(int i=0 ; i<size ; i++){
        scanf("%d",&a[i]);
    }
    return 0 ; 
}
int swapdec(int a[],int size){
    for(int i=0 ;  i<size-1 ; i++){
        int max=a[i],idx=i;
        for(int j=i+1;j<size;j++){
            if(a[j]>max) {
            max=a[j];
            idx=j;
            }
        }
        a[idx]=a[i];
        a[i]=max;
    }
    return 0;

}  
int output(int a[],int size){
    for(int i=0 ; i<size ; i++){
        printf("%d ",a[i]);
    }
    return 0 ; 
}
int main (){
    int n;
    printf("Enter your array size :");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    swapdec(arr,n);
    printf("Printing array elements in desending order :");
    output(arr,n);
    return 0;
    
}


#include<stdio.h>
int input(int a[],int size){
    for(int i=0 ; i<size ; i++){
        scanf("%d",&a[i]);
    }
    return 0 ; 
}
int reversearray(int a[],int size){
    for(int i=0 ; i<size/2 ; i++){
        int temp=a[i];
        a[i]=a[size-1-i];
        a[size-1-i]=temp;

    }
    return 0;
} 
int output(int a[],int size){
    for(int i=0 ; i<size ; i++){
        printf("%d ",a[i]);
    }
    return 0 ; 
}
int main (){
    int n;
    printf("Enter your array size :");
    scanf("%d",&n);
    int arr[n];
    input(arr,n);
    reversearray(arr,n);
    printf("Array Reversing :");
    output(arr,n);
    return 0;
    
}


#include<stdio.h>
int input(int a[][3], int r , int c){
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            scanf("%d",&a[i][j]);
        }
    }
}

void maxcalc(int a[][3],int r, int c){
    int max=-1;
    for(int i=0 ; i<r ; i++){
    for(int j=0 ; j<c ; j++){
        if(a[i][j]>max) max=a[i][j];
        }
    }
    printf("%d",max);
    printf("\n");
    return;

}
int output(int r, int c ,int a[][3]){
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    return 0 ; 
}
int uppersum(int a[][3],int r, int c){
    int sum=0 ; 
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(i<=j) sum+=a[i][j];
        }
    }
    printf("Trace %d", sum);
    printf("\n");
}

int transpose(int a[][3],int row , int col){
    for(int i=0 ; i<row ;  i++){
        for(int j=0 ; j<col ; j++){
            if(i<j){
                int temp=a[i][j];
                a[i][j]=a[j][i];
                a[j][i]=temp ; 
            }
        }
    }
    return 0 ;
}
int display(int r, int c ,int a[][3]){
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}
int main (){
    int r,c ; 
    printf("Enter row and column : ");
    scanf("%d %d",&r , &c);
    int arr[r][3] ; 
    input(arr,r,c);
    printf("Your output :\n");
    output(r,c,arr);
    printf("Your maximum digit :\n");
    maxcalc(arr,r,c);
    printf("Your matrix upper sum :\n");
    uppersum(arr,r,c);
    transpose(arr, r, c);
    printf("Your transpose matrix :\n");
    display(r, c, arr);
    return 0 ; 
}


#include<stdio.h>
int main (){
    char str[50];
    // fgets(str, sizeof(str),stdin); aita dia korle strlen e ak besi ase cause new nine
    gets(str);
    int i=0 ; 
    while(str[i]!='\0'){
        i++;
    }
    printf("Your string size is :%d",i);
}

#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    int n=strlen(str);
    char x,y;
    printf("Enter the word that you may change and enter the replacing character :\n"); 
    scanf("%c %c",&x,&y);
    for(int i=0 ; i<n ; i++){
        if(str[i]==x){
            str[i]=y;
        }
    }
    printf("%s is your replacing string.",str);

}


#include<stdio.h>
int main(){
    char str[100];
    gets(str);
    int n=strlen(str);
    for(int i=0 ; i<n/2 ; i++){
        char temp=str[i];
        str[i]=str[n-1-i];
        str[n-1-i]=temp;

    }
    printf("%s is your reversed string.",str);

}

#include<stdio.h>
#include<string.h>
int main (){
    char str[100];
    gets(str);
    int n=strlen(str);
    for(int i=0; i<n ; i++){
        int temp=0 ; 
        for(int j=i+1; j<n ; j++){
            if(str[i]==str[j]){
                temp=1;
            }
        }
        if(temp==1)printf("%c is your reapiting character.\n",str[i]);
    }
    return 0 ; 

}


#include<stdio.h>
#include<string.h>
int main (){
    char str1[100];
    printf("Enter your first string : ");
    gets(str1);
    char str[100];
    printf("Enter your second string : ");
    gets(str);
    int y=strlen(str1);
    int n=strlen(str);
    int temp=1;
    if(n!=y) temp=0;
    else {
        for(int i=0; i<n ; i++){
        if(str1[i]!=str[i]){
            temp=0;
            break;
        }
        }
        if(temp==0) printf("strings are not equal.");
        else printf("strings are equal.");
    }
    return 0 ;
}

#include<stdio.h>
int main(){
    char str[50];
    gets(str);
    int n=strlen(str);
    for(int i=0 ; i<n ; i++){
        if(str[i]==' '){
            for(int j=i ; j<n ; j++){
                str[j]=str[j+1];
            }
        }
    }
    printf("%s",str);
    return 0 ; 
}

#include<stdio.h>
int main(){
    int arr[128]={0};
    char str[100];
    printf("Enter your string:");
    gets(str);
    for(int i=0 ; str[i]!='\0' ; i++){
        arr[str[i]]++;
    }
    for(int i=0 ; i<128 ; i++){
        if(arr[i]!=0){
            printf("%c : freq count %d\n",i,arr[i]);
        }
    }
    return 0 ; 
}