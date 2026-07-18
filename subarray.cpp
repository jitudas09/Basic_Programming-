#include<bits/stdc++.h>
using namespace std ; 

// int main(){
//     int n  ; cin >> n ;
//     int a[n] ; 

//     for ( int i = 0 ; i<n ;  ++i ){
//         cin >> a[i] ;
//     }

//     for ( int l = 0 ; l<n ; l++){
//         for ( int r = l ; r<n ; ++r){
//             for(int i = l ; i<=r ; i++){
//                 cout << a[i ] << ' ' ; 
//             }
//             cout << endl ; 

//         }
//     }

// }




//          sum of subarray element and max sum of subarray  
// #include<bits/stdc++.h>
// using namespace std ; 

// int main(){
//     int n  ; cin >> n ;
//     int a[n] ; 

//     for ( int i = 0 ; i<n ;  ++i ){
//         cin >> a[i] ;
//     }
//     int mx= INT_MIN ;
//     for ( int l = 0 ; l<n ; l++){
//         for ( int r = l ; r<n ; ++r){
//             int sum = 0 ; 
//             for(int i = l ; i<=r ; i++){
//                 cout << a[i ] << ' ' ; 
//                 sum+=a[i] ;
//             }
//             mx=max(mx,sum) ;
//             cout <<"--->" <<  " sum : " << sum   ; 
//             cout << endl ; 
//         }
//     }
//     cout << "Maximum subarray elemt sum : " << mx << endl ; 
//     return 0 ;
// }

#include<bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();
    for(int l = 0; l < n; ++l){
        for(int r = l; r < n; ++r){
            for(int i = l; i <= r; ++i){
                cout << s[i] << ' ';
            }
            cout << endl;
        }
    }
    return 0;
}


//                          find better chase 



//                      its time complesity o(n3) ;
int main (){
    int n ; cin >> n ; 
    int a[n] ; 
    for ( int i = 0 ; i<n ; ++i ){
        cin >> a[i] ;
    }
    // int max_subarray_sum= -10e18 ; 
    int max_subarray_sum= INT_MIN; // int_min is the minimum int value 

    for ( int l = 0 ; l<n ; l++){
        for(int r= l ; r<n ; r++){
            int current_subarray_sum= 0 ; 
            for ( int i = l ; i<=r ; i++){
                current_subarray_sum+=a[i] ; 
            }
            max_subarray_sum= max ( max_subarray_sum , current_subarray_sum) ; 
        }
    }
    cout << max_subarray_sum << '\n' ; 
    return 0 ; 
}

//                  now fine best chase 


//                      AND NOW TIME COMPLEXITY O(n2)
//                      it is better then previous mathod
int main (){
    int n ; cin >> n ; 
    int a[n] ; 
    for ( int i = 0 ; i<n ; ++i ){
        cin >> a[i] ;
    }
    // int max_subarray_sum= -10e18 ; 
    long long max_subarray_sum= INT_MIN; 

    for ( int l = 0 ; l<n ; l++){
        long long current_subarray_sum= 0 ; 
        
        for(int r= l ; r<n ; r++){
            for ( int i = l ; i<=r ; i++){
                current_subarray_sum+=a[i] ; 
            }
            max_subarray_sum= max ( max_subarray_sum , current_subarray_sum) ; 
        }
    }
    cout << max_subarray_sum << '\n' ; 
    return 0 ; 
}



//                  finding another best chase 
//                     time complesity is o(n)

//                  and it is the final , one of the best chase


int main (){
    int n ; cin >> n ; 
    int a[n] ; 
    for ( int i = 0 ; i<n ; ++i ){
        cin >> a[i] ;
    }
    // int max_subarray_sum= -10e18 ; 
    long long max_subarray_sum= INT_MIN; 
    long long max_subarray_sum_so_far = INT_MIN ; 

    for ( int l = 0 ; l<n ; l++){
        max_subarray_sum_so_far = max(a[l], a[l]+max_subarray_sum_so_far) ; 
        max_subarray_sum = max (max_subarray_sum , max_subarray_sum_so_far) ; 
    }
    cout << max_subarray_sum << '\n' ; 
    return 0 ; 
}