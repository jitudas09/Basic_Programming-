#include<bits/stdc++.h>
using namespace std ; 

int main (){
    char s[100] ; 
    cin.getline(s,100) ; 
    int n= strlen(s) ;
    for(int i =0 ; i<n ; ++i ){
        if(s[i]==' '){
            for(int j=i ; j<n ; ++j){
                s[j]=s[j+1] ; // dutai j hobe kintu cause,i dile oi spacce position er sate cheek hoite takbe always
            }
            n--;
            i--;
        }
    } 
    cout << "After remove space : " << s << endl ; 
    return 0 ;
}