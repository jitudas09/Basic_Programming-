#include<bits/stdc++.h>
using namespace std;
    
int factorial (int n ) {
    if(n==0) {
        return 1 ; 
    }
    return n*factorial(n-1) ; 
}
int fibonacci (int n ){
    if(n<=1) return n ; 
    return fibonacci(n-1) + fibonacci(n-2) ; 
}
int main ( ){
    int n =5; 
    int result=factorial(n) ; 
    cout << result << endl ; 
    for(int i=0 ; i<=n ; ++i){
        cout << "Fibonacci series : " << fibonacci(i) << endl ;
    }
    return 0 ; 
}