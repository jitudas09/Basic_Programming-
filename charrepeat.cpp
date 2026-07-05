#include<bits/stdc++.h>
using namespace std ; 

int main (){
    int freq[128] = {0} ; 
    char s[100] ; 
    cin.getline(s,100) ; 
    for(int i=0 ; s[i]!='\0' ; ++i) {
        freq[s[i]]++; //freq[ascii] ;------> a=97 ;
    } for(int i=0 ; i<128 ; ++i){
        if(freq[i]!=0){
            cout << char(i) ;//typecasting ;
            cout <<" Repeat " << freq[i] << " times." << endl ; // oy array tee koto kore joma ache oi char
        }
    }
    return 0 ; 
}