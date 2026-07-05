
#include<stdio.h>
int main (){
    char str[100] ; 
    fgets(str, sizeof(str) , stdin ) ; 
    int n=strlen(str) ;
    for(int i=0 ; i< n  ; ++i ){
        if(str[i]==' ') {
            for(int j=i ; j<n ; ++j) {
                str[j]=str[j+1] ;
            }
            i-- ; // mane porer index ta abar cheek kora --pasapasi duita space takhle
            n-- ; 
        }
    }
    printf("After removed space : %s", str) ; 
}