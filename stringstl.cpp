#include<bits/stdc++.h>
using namespace std ; 

//                                  All inportant 
int main (){ 
    // string w ;
    // // cin >> s ;                                   // when it gets newline , stops getting input

    // getline(cin,w) ;                                // it takes full input with newline 
    // cout << w ; 

    string s , d , l , m , word ; 
    cin >> s ;
    cin >> d ; 
    // cin >> l ; 
    // cin >> m ; 
    // cin  >> word ; 

    // int n=s.size(); 

    // for(int i=0 ; i<n ; ++i){
    //     s[i]=toupper(s[i]);
    //     d[i]=toupper(d[i]);
    // }

    // cout << "Result :" << s << " " << d << endl ; 

    // transform(l.begin() , l.end() , l.begin(), :: toupper ) ;       // without loop 
    // transform(m.begin(), m.end(), m.begin(), ::tolower) ; 

    // cout << "Capital : " << l << "\nSmall : " << m << endl ;

    // sort(word.begin() , word.end()) ;                               //sorted(A-Z or a-z) 

    // cout << "Sorted word : " << word << endl ;

    cout << "String addition :" <<  s + " " + d << endl  ;              //string addition 

    reverse(s.begin(), s.end()) ;                                        //string reverse  
    cout << s ; 

    return 0 ; 
}

int main (){
    string s , d ; 
    cin >> s >> d ; 
    int n=s.size() ; 
    for(int i=0 ; i<n ; ++i){
        s[i]=tolower(s[i]) ; 
        d[i]=tolower(d[i]) ; 
    }
    if(s>d) cout << "1" << endl ;
    else if (d>s) cout << "-1" << endl ; 
    else cout << "0" << endl ;
    return 0 ; 
}
                     Another veresion 

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    transform(s1.begin(), s1.end(), s1.begin(), ::tolower);
    transform(s2.begin(), s2.end(), s2.begin(), ::tolower);

    if (s1 > s2) cout << "1" << endl;
    else if (s1 < s2) cout << " -1" << endl;
    else cout << "0" << endl;

    return 0;
}

                        REVRSE FOR PALINDROME 

int main (){
    string s , temp ; cin >> s; 
    temp =s ; 
    reverse(temp.begin(),temp.end()) ; 
    if (temp ==s ) cout << "palindrome" << endl ; 
    else cout << "NOt palindrome" << endl ;
    return 0 ; 
}

                         SUBSTRING FIND 

int main (){
    string s ="Ï love programming in c++" ; 
    string d="programming" ; 
    if((s.find(d)) !=string::npos) {// npos execute when the word isn't found 
        cout << "Found ant index : " << s.find(d) << endl ; 
    } else cout << "Not found!" ; 
    return 0 ; 
}

                         Substring and erase 

int main (){
    string s ="Hello_world" ; 
    string sub=s.substr(0,5) ; 
    s.erase(5,1) ;
    cout << sub << " " << s << endl ; 
    return 0 ; 
}
                             sort kora (A-Z)
int main() {
    string s = "coding";
    
    // String-er shuru theke sesh porjonto sort korbe
    sort(s.begin(), s.end());

    cout << "Sorted String: " << s << endl; // Output: cdgino
    return 0;
}
                                         SUBSTRING REPLACE KORA 
int main() {
    string s = "I love Java";
    
    // Index 7 theke 4 ta character (Java) ke "C++" diye bodle dao
    s.replace(7, 4, "C++");

    cout << s << endl; // Output: I love C++
    return 0;
}
                                      string to number 

int main() {
    string s = "123"; // s+10 dile eror asbe 
    
    // string to integer (stoi)
    int num = stoi(s); // akhon s er sate addition , substacaction etc. kora jabe 

    cout << "Number + 10 = " << num + 10 << endl; // Output: 133
    return 0;
}

