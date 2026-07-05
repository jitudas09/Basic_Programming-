// #include<iostream>
// int main (){
//     std:: cout << "Jitu das " << endl ; ; 
//     return 0 ; 
// }

#include<bits/stdc++.h>
using namespace std ; 
// #define add(a,b) ((a) + (b))
// #define ll long long 


// int main (){
//     ll a = 8 ;
//     cout << add(3,4) << endl ; 
//     cout << a << endl  ; 
//     return 0 ; 
// }

// #include<bits/stdc++.h>
// #define int long long
// using namespace std;

// int main() {
//     int x = 1e18;
//     cout << x << endl;
//     return 0;
// }


//                      inverse array element 
// int main (){
//     int n  ; 
//     cin >> n ;
//     int a[n] ; 
//     for ( int i = 0 ; i<n ; ++i ){
//         cin >> a[i ] ; 
//     }
//     int b[n] ; 
//     for ( int i = n-1 , j = 0 ; i>=0, j<n ; i--,j++){
//         b[j]=a[i] ;
//     }
//     for ( int i = 0 ; i<n ; i++){
//         a[i]=b[i] ;
//     }
//     for ( int i = 0 ; i<n ; i++){
//         cout << a[i ] << endl ; 
//     }
//     return 0 ; 
// }

// int main(){
//     int n ; cin >> n ;
//     getchar() ; // newline remove 
//     // cin.ignore() ; // it ignores the newline after the input taken
//     char s[100] ;
//     for ( int i = 0 ; i<n ; i++){
//         cin.getline(s,100) ;
//         cout << n << endl ; 
//     } 
// }

// int amin (){
//     int a = 1000000000 , b= 1000000000 ;
//     // int ans = a * b ; // cant print ..to large 
//     long long int ans = a*b ; 



    
//     cout << ans << endl  ; 
//     return 0 ; 
// }


// int recurtion tree number of nodes = num of func call 
// int operations = 0 ; 
// int f(int n ){
//     // operations++  ; 
//     for ( int i = 0 ; i<1000 ; i++){
//         operations++; //                eketre 1000 bar multiply hobe 
//     }
//     if(n==0) return 0 ; 
//     if(n==1) return 1 ; 
//     return f(n-1) + f(n-2) ; 

// }
// int main (){
//     int cur = f(5) ; 
//     cout << operations << '\n' ; // output == 15..as 15 nodes 
//     return 0 ; 
// }

//time comp o(2^n)

// int power_of_two(int n ){
//     if(n==0) return 1 ; 
//     return power_of_two(n-1) + power_of_two(n-1) ;
// }

// int main (){
//     cout << power_of_two(5) << '\n' ;
//     return 0 ; 
// }


// now o(2n) or o(n)

int power_of_two(int n ){
    if(n==0) return 1 ; 

    if(memo[n]!=-1){ // already calculate korsi kina korle return kore dibo 
    
    memo[n]= power_of_two(n-1) + power_of_two(n-1) ; }
    return memo[n] ;

}

int main (){
    cout << power_of_two(5) << '\n' ;
    for(int i = 0 ; i <n ; ++i){
        memo[i]=-1 ; 
    }
    return 0 ; 
}