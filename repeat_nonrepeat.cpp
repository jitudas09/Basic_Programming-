#include<bits/stdc++.h>
using namespace std ; 
// repeated word 
// int main (){
//     char s[100] ; 
//     cin.getline(s,100) ; 
//     int n=strlen(s) , count=0 ; 
//     for(int i=0 ; i<n; ++i){
//         int flag=0 ; 
//         for(int j=i+1 ; j<n ; ++j){
//             if(s[i]==s[j]) flag=1 ; 
//         }
//         if(flag==1) {count++ ; cout << endl <<"word: " <<  s[i] ; }; 
//     }
//     cout << endl << count << endl ; 
//     return 0 ;
// }

int main (){
    char s[100] ; 
    cin.getline(s,100) ; 
    int n=strlen(s) ; 
    for(int i=0 ; i<n; ++i){
        int count=0 ; // count eikhane declear kora lagbe otherwise each word er jonno 0 tekhe start hobe na 
        for(int j=0 ; j<n ; ++j){
            if(s[i]==s[j]) {
                count++ ; 
            } ; 
        }
        if(count>1) cout << "Repeated word : " << s[i] << endl ; 
        else {cout << endl <<  "Non repated word :" << s[i] ;  };
    }  
    return 0 ;  
}
