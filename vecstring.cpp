#include<bits/stdc++.h>
using namespace std ; 

int main (){
    // vector<string> v ; //v={"banana" ,"apple" , "cherry"} ;
    // v.push_back("banana") ; 
    // v.push_back("apple") ; 
    // v.push_back("cherry") ; 
    // v.push_back("apple") ;

    // // cout << v.front() << endl ; 

    // // cout << v.back() << endl ; 

    // // cout << v.empty() << endl ; 

    // // cout << "Your value at index 1 :" << v[1] << endl ;
    // // cout << "Your value at index 1 :" << v.at(3) << endl ; // if error, it returns "out of range:"
  
    // // v.insert(v.begin()+1,"jitu") ;// Nth index e insert

    // // v.pop_back() ;

    // // v.clear() ; //all elements clear 

    // // v.erase(v.begin()+2) ;
    // // v.erase(v.begin()+1,v.end()) ;// range erase 

    // // sort(v.begin(), v.end()) ; // ascending order 

    // // sort(v.rbegin() , v.rend()) ; // descending

    // // reverse(v.begin(), v.end()) ;

    // // for( string jitu : v ) cout << jitu << " " ;  //for(auto jitu : v ) cout << jitu ; 

    // // auto it =find(v.begin(), v.end(), "apple") ;
    // // //যদি "apple" পাওয়া যায়, তবে it হবে সেই পজিশনের ঠিকানা।
    // // //আর যদি পুরো ভেক্টর খুঁজেও "apple" না পাওয়া যায়, 
    // // //তবে সে ভেক্টরের একদম শেষের পরের অংশ অর্থাৎ v.end() রিটার্ন করে।    
    
    // // if(it!=v.end()) {
    // //     int index=distance(v.begin(),it) ;// getting index 
    // //     //int index= it-v.begin() ; // same but manually 
    // //     cout << "Found\n" << "At index : " << index ;
    // // }
    // // else cout << "Not Found\n" ; // but eikhane index printing dile full vector size print kore dei 

    // //cout << endl << count(v.begin() , v.end() , "apple") ; // it print what time apple repeates 
    
    // sort(v.begin(), v.end()) ; 
    // auto it = unique ( v.begin() , v.end()) ;
    // //বরং সেগুলোকে সরিয়ে পেছনের দিকে পাঠিয়ে দেয়।
    // //সে ইউনিক এলিমেন্টগুলোকে ভেক্টরের শুরুর দিকে সাজিয়ে রাখে।
    // v.erase(it , v.end()) ;
    // //unique ফাংশনটি আমাদের বলে দিয়েছিল যে ডুপ্লিকেট বা অপ্রয়োজনীয় ডাটাগুলো
    // // it থেকে শুরু হয়েছে। এই লাইনের মাধ্যমে আমরা it থেকে শুরু করে ভেক্টরের
    // // শেষ (v.end()) পর্যন্ত সব ডুপ্লিকেট এলিমেন্ট একবারে মুছে (Delete) ফেলি।

    // //মনে করুন আপনার ভেক্টরটি হলো: v = {10, 20, 10, 30, 20}

    // //sort করার পর: v = {10, 10, 20, 20, 30} unique করার পর: ভেক্টরটি দেখতে এমন হবে: {10, 20, 30, ?, ?}
    // //। এখানে unique রিটার্ন করবে ৩ নম্বর ইনডেক্সের ঠিকানা (যেখানে গার্বেজ বা ডুপ্লিকেট ডাটা শুরু হয়েছে)।
    // //erase করার পর: শেষের বাড়তি অংশগুলো মুছে যাবে এবং আপনি পাবেন: {10, 20, 30}।

    // //v.erase(unique(v.begin(), v.end()), v.end()); // more efficient and sot code 

    // for( string jitu : v ) cout << jitu << " " ; 

    // vector<string> v; 
    // v.assign(5,"Hello") ; 
    // //assign ব্যবহার করলে ভেক্টরের সব আগের এলিমেন্ট হারিয়ে যায়।

    // v.resize(3) ;
    // v.resize(5,"HI") ;
    // //resize ব্যবহার করলে ভেক্টরের আগের এলিমেন্টগুলো (যতটুকু সীমানার ভেতর থাকে) সংরক্ষিত থাকে।
    
    // for( string jitu : v ) cout << jitu << " " ; 


    vector<string> a={"a" , "b"} ; 
    vector<string> b={"x" , "y"} ; 

    swap(a,b) ;
    cout << "vector a : "  ; for ( auto j : a ) cout << j << " " ;
    cout << "\nvector b : "  ; for ( auto j : b ) cout << j << " " ; 


    return 0 ; 
}




int main (){
    vector<string> v ;
    int n ; cin >> n ; string s ; 
    for(int i=0 ; i<n ; i++){
        cin >> s;
        v.push_back(s) ; 
    
    }
    cout << v.size() << endl ; 
    return 0 ;
}




int main (){
    vector<char> v ; 
    int n; cin >> n; char s ; 
    for(int i=0 ; i<n ; i++){
        cin >> s ; v.push_back(s) ;
    }
    reverse(v.begin(),v.end()) ;
    for( auto jitu : v) cout << jitu << " " ; 
    return 0 ;
}




int main (){
    vector<string> v ; 
    int n; cin >> n; string s ; 
    for(int i=0 ; i<n ; i++){
        cin >> s ; v.push_back(s) ;
    }
    sort(v.begin(),v.end()) ;
    auto it = unique(v.begin(), v.end()) ;
    v.erase(it, v.end()) ;

    for( auto jitu : v) cout << jitu << " " ; 
    return 0 ;
}



int main (){
    vector<string> v ; 
    int n; cin >> n; string s ; 
    for(int i=0 ; i<n ; i++){
        cin >> s ; v.push_back(s) ;
    }


    return 0 ;
}


//                      FIRST AND LAST CHAR CHEEK 
int main (){
    vector<string> v ; 
    int n; cin >> n; string s ; 
    for(int i=0 ; i<n ; i++){
        cin >> s ; v.push_back(s) ;
    }
    for(int i = 0 ; i<n ; ++i ){
        string w = v[i] ; 
        if(w[0]== w[w.size()-1]) cout << w << " " ;
    }

    return 0 ;
}


//              palindrome  
int main (){
    vector<string> v ; 
    int n; cin >> n; string s ; 
    for(int i=0 ; i<n ; i++){
        cin >> s ; v.push_back(s) ;
    }
    cout << "Palindrome words : " << endl ;
    for(int i=0 ;  i<n ; ++i ){
        string s =v[i] ; 
        reverse(s.begin(), s.end()) ; 
        if(s==v[i]) cout << v[i] << endl ; 
    }

    return 0 ;
}

