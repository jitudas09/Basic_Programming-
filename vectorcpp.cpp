#include<bits/stdc++.h>
using namespace std ; 

int main (){
    vector <int> v ={1,3,2,9,4} ; 
    v.push_back(7) ; 
    v.push_back(8) ;

    v.pop_back() ;

    sort(v.begin() , v.end()) ;  

    // reverse(v.begin() , v.end()) ;

    cout << "Max :" << *max_element(v.begin() , v.end()) << endl ;
    cout << "Min :" << *min_element(v.begin() , v.end()) << endl ; 
    
    
    v.erase(v.begin() , v.begin()+2) ; 
    //it delete the element from start to the previous element of end.
    // cout << endl ; 
    // for(int x : v){
    //     cout << x << " " ; // it prints the al vector ; 
    // }

    // int max=v[0] ;
    // for(int i=0 ; i<v.size() ; ++i ){
    //     // if(v[i]%2==0) cout << v[i] << " " ; 
    //     if(v[i]>max) max=v[i] ;
    // }
    // cout << max << endl ;



 
    return 0 ; 
}

int main (){
    vector <int> v ={1, 2, 2, 3, 4, 4, 5} ; 
    // delet repeated element without deleting unique element
    v.erase(unique(v.begin() , v.end()) , v.end()) ; 
    // unique ফাংশনটি ভেক্টরের সব ইউনিক (একক) এলিমেন্টগুলোকে বাম দিকে নিয়ে আসে। 
    // তবে এটি ভেক্টরের সাইজ ছোট করে না। এটি কেবল ডুপ্লিকেট সংখ্যাগুলোকে ভেক্টরের শেষের 
    // দিকে সরিয়ে দেয় এবং যেখানে ইউনিক এলিমেন্টগুলো শেষ হয়েছে, 
    // সেই পয়েন্টের একটি ইটারেটর (এক ধরণের পয়েন্টার) রিটার্ন করে।
    // unique() চালানোর পর: {1, 2, 3, 4, 5, ?, ?
    for(int jitu : v ){
        cout << jitu << " " ; 
    }
    return 0 ; 
}