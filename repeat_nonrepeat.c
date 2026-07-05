#include<stdio.h>


int main (){
    char str [100] ; 
    gets(str) ; int n = strlen(str) ; 
    for(int i= 0 ; i<n-1 ; ++i ){
        int found =0 ; 
        for(int j=i+1 ; j<n ; ++j) {
            if(str[i]==str[j]) {
                found = 1 ; break ; 
            }
        }
        if(found == 1) printf("Repeated : %c\n",str[i]) ;
        else printf("NOn Repeated : %c",str[i]) ;
    }
    return 0 ; 
}
