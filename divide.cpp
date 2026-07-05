#include<bits/stdc++.h>
using namespace std ; 

int main (){
    int  t ; cin >> t ; 
    int n , k ; 
    string s ; 
    while (t--){
        cin >> n >> k ; 
        cin >> s ; 
        int count = n-k, co=0 ; 
        for(int i = 1 ;i<=count ;  ++i ){
            if(s[i]!=s[i+k]){
                co = 1 ;
            }
        }
        if(co==1) cout << "Yes" << endl ; 
        else cout << "Yes" << endl ; 
    }
    return 0 ; 
}