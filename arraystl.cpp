#include<bits/stdc++.h>
using namespace std ; 
// erase dosent exist in array because array size is always fixed.It works in string , vector etc.
int main (){
    int arr[]={5,2,9,1,5,6} ; 

    int n = sizeof(arr) / sizeof(arr[0]); 

    sort(arr,arr+n) ; cout << "Sorted array : " << endl ;

    for(int i=0 ; i<n ; ++i) cout << arr[i] << " " ; 

    reverse(arr,arr+n) ; 

    cout << "\nReversed array :" << endl ; 


    for(int i=0 ; i<n ; ++i){
        cout << arr[i] << " " ; 
    }

    int max= *max_element(arr,arr+n) ;
    int min = *min_element(arr,arr+n) ;
    cout << "\nMax element : " << max << "\nMin element : " << min << endl ;
    
    int sum = accumulate(arr, arr+n , 0 ) ;                                     // int sum = accumulate(start, end, initial sum of the variable) ; 
    cout << "Summation of array elements : " << sum << endl ;


    int ar[7] ; 
    cout << "Your same data of arr: " << endl ; 
    fill(ar, ar+7, 10) ;                              //fill the hole array with same data(10)
    for(int i=0 ; i<7 ; ++i ){
        cout << ar[i] << " " ; 
    }

    return 0 ;
}
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int v[] = {1, 2, 2, 3, 4, 4, 5};
//     int n= sizeof(v) / sizeof(v[0]) ; 
//     sort(v , v+n);
//     unique(v, v+n) ; 
//     for(int i=0 ; i<n ; ++i ){
//         cout << v[i ] << " " ; 
//     }

//     return 0;
// }
// #include<bits/stdc++.h>
// using namespace std;

// int main() {
//     int v[] = {1, 2, 2, 3, 4, 4, 5};
//     int n = sizeof(v) / sizeof(v[0]); 
    
//     sort(v, v + n);
    
//     // unique() যেখানে শেষ হয়েছে সেই পয়েন্টারটি 'ptr' এ রাখি
//     int* ptr = unique(v, v + n); 
    
//     // নতুন সাইজ বের করার নিয়ম: (শেষ পয়েন্টার - শুরু পয়েন্টার)
//     int new_size = ptr - v; 

//     // এখন শুধু নতুন সাইজ পর্যন্ত লুপ চালান
//     for(int i = 0; i < new_size; ++i) {
//         cout << v[i] << " "; 
//     }

//     return 0;
// }
