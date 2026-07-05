#include<iostream>
#include<vector>
#include<list>
#include<deque>
#include<stack>
#include<queue> 
#include<map>
#include<unordered_map>

using namespace std ; 

int main (){
    vector<int> vec ; 

    vec.push_back(1) ; 
    vec.push_back(2) ; 
    vec.push_back(3);
    vec.push_back(4) ; 

    vec.emplace_back(8) ; // like that push back 

    vec.pop_back() ; // delete the vlue of the last index of vector

    for (int val : vec){
        cout << val << " " ; 
    }
    cout << endl ; 
    // cout << vec.size() << endl ; // size of the vector 
    // cout << vec.capacity() << endl ; // capacity of the vector not equal to size
    cout << "Val at index-2 : " << vec[2] << " or " << vec.at(2) << endl ;   
    //  but vec.at(2) is generally not used since vec[2] is similar of array

    cout << "Element of 1st idx(front)" << vec.front() << endl ; // first index value print
    cout << "Element of last idx(back)" << vec.back() << endl ; // last index value print 


    return 0 ; 
}

int main (){
    vector<int> vec = { 1, 2, 3, 4, 7} ; //  like that array as value insert 
    
    for(int val : vec ){
        cout << val << " " ; 
    }
    cout << endl ; 
    return 0 ; 

}


int main (){
    vector<int> vec(7,-1); // it presents that -1 repeats 7 times
    for( int val : vec ){
        cout << val << " " ; 
    }
    cout << endl ; 
    return 0 ; 

}

int main(){
    vector<int>vec1={1, 2, 3, 4, 7} ; 
    vector<int> vec2(vec1) ; // vec2 print the same value of vec1
    for ( int val : vec2){
        cout << val << " "; 
    }
    cout << endl ; 
    return 0 ; 
}

                            ERASE-------like that pointer

int main (){
    vector<int>vec={1, 2, 3, 4, 7} ; 

    // vec.erase(vec.begin()); // 0 index er value delete kora .....like that pointer

    // vec.erase(vec.begin()+2); //3 no index er value delete kora 

    vec.erase(vec.begin()+1 , vec.begin()+3) ;  // index (1 to 2 ) value gulo delet hoi jabe 

    for(int val : vec){
        cout << val << " " ; 
    }
    cout << endl << vec.size() ; cout << endl ; 
    cout << vec.capacity() ; 
    return 0 ; 
}

                            INSERT 
int main (){
    vector<int>vec={1, 2, 3, 4, 7} ; 

    vec.insert(vec.begin()+2, 100) ;  // insert element in value 

    vec.clear(); // clear the vector element completely 

    for(int val : vec){
        cout << val << " " ; 
    }

    cout << "Is enpty : " << vec.empty() << endl ; // to cheek the vector is enpty or not 
    // is empty then output= 1 ; 
    cout << endl << vec.size() ; cout << endl ; 
    cout << vec.capacity() ; 
    return 0 ; 
}

                LIST 
int main(){
    list<int>l ;

    l.push_back(1) ;  // emplace_back(1) ; -> same result 
    l.push_back(2) ;
    l.push_front(3) ; 
    l.push_front(5) ; 

    l.pop_back() ; 
    l.pop_front() ; 
    
    for(int val : l ){
        cout << val << " " ;
    }
    cout << l[2] << endl ;  // Not possible in list 
    because , Random access not posssible 
    cout << endl ; 
    return 0 ; 
}


                                 DEQUE 
int main(){
    deque<int>d ;

    d.push_back(1) ;  // emplace_back(1) ; -> same result 
    d.push_back(2) ;
    d.push_front(3) ; 
    d.push_front(5) ; 

    // d.pop_back() ; 
    // d.pop_front() ; 
    
    for(int val : d ){
        cout << val << " " ;
    }
    cout << endl ; 
    cout << d[2] << endl ;  
    // d[2] possible because of DEQUE  implemented by the help of Dynamic arrays 
    // so , Random acces (d[2]) possible 
    return 0 ; 
}


                 PAIR

int main (){
    // pair<int , int > p={1,2} ; 

    // pair<string , int > p={"jitu", 4} ;

    // cout << p.first << endl ; 
    // cout << p.second << endl ;

    pair<int , pair<char,int >> p={1,{'a',2}} ; // -> pair of pair 

    cout << p.first << endl ; 
    cout << p.second.first << endl ; // pair of pair e first of second eivabe likhte hoi  
    cout << p.second.second << endl ; 

    return 0 ;
}



             VECTOR  OF PAIR 

int main (){
    vector<pair<int,int >> vec ={{1,2} , {2,3} , {3,4}} ;

    // for(pair<int , int> p : vec) {
    //     cout << p.first << " " << p.second << endl ;
    // }
    // or 
    for( auto p : vec) {
        cout << p.first << " " << p.second << endl ; 
    }
    return 0 ;

}

int main (){
    vector<pair<int,int >> vec ={{1,2} , {2,3} , {3,4}} ;

    vec.push_back({4,5}) ; // kaj kore tokhon jodi pair banano takhe 
    vec.emplace_back(4,5) ; // in- place objects create----

    for( auto p : vec) {
    }
    return 0 ;

}

                     STACK 
int main (){
    stack<int> s ; 
    
    s.push(1) ; 
    s.push(2) ; 
    s.push(3) ; 

    // cout << "top = " << s.top() << endl ; 

    // while(!s.empty()){
    //     cout << s.top( ) << " "; 
    //     s.pop() ; 
    // }
    // cout << endl ; 

    //      swaping 
    stack<int>s2 ; 
    s2.swap(s) ; 
    cout << "s size : " << s.size() << endl ; 
    cout << "s2 size : " << s2.size() << endl ; 

    return 0 ;

}

int main (){
    queue<int> q ; 

    q.push(1) ; 
    q.push(2) ; 
    q.push(3) ; 
    cout << "top = " << q.front() << endl ; //

    while (!q.empty()) {
        cout << q.front() << " " ; 
        q.pop() ; 
    }
    cout << endl ; 
    return 0 ;
}
                         PRIORITY QUEUE 
int main (){
    priority_queue <int> q ; 
    q.push (5) ; 
    q.push (3) ; 
    q.push (10) ; 
    q.push (4) ;
    
    while (!q.empty()){
        cout << q.top() << " " ; 
        q.pop() ; 
        cout << endl ; 
    }
    cout << endl ; 
    return 0 ; 

}
int main (){
    priority_queue <int,vector<int>, greater <int>>q; // to print reverse 
    q.push (5) ; 
    q.push (3) ; 
    q.push (10) ; 
    q.push (4) ;
    
    while (!q.empty()){
        cout << q.top() << " " ; 
        q.pop() ; 
        cout << endl ; 
    }
    cout << endl ; 
    return 0 ; 

}

                 MAP
int main (){
    map<string, int>m ; 

    m["tv"] = 100 ; 
    m["laptop"]= 100 ; 
    m["headphones"]= 50 ; 
    m["tablet"] = 120 ; 
    m["watch"] = 50 ; 

    m.insert({"camera",25});
    m.erase("tv") ; 
    m.erase("camera") ; // used for find function 


    for( auto p: m){
        cout << p.first << " " << p.second << endl ; 
    }// ity print alphabetic orderly
    cout << "count = " << m.count("laptop") << endl ;  // returns koto gula keys(laptop ) exist kore whose values laptop  
    cout << "count= " << m["laptop"] << endl; //printf the vlues of laptop(key) 
    
    
    if(m.find("camera") !=m.end()) {
        cout << "found\n" ; 
    } else {
        cout << "not found \n" ; 
    }

    return 0 ; 

}
                                 MULTIMAPE
int main (){
    multimap<string, int>m ; 

    m.emplace("tv", 100) ; 
    m.emplace("tv", 100) ; 
    m.emplace("tv", 100) ; 
    m.emplace("tv", 100) ; 

    // m.erase("tv") ; // it clears the full map

    m.erase(m.find("tv")) ; // by passing iterators means -> actual memory location and delet only one time 


    for(auto p: m){
        cout << p.first << " " << p.second << endl ; 
    }


    return 0 ; 

}

                         UNORDERD MAP -> most used --stored data radom orderly 
 it prints non sorted data ...ulotpalot vabe print kore 
int main (){
    unordered_map<string, int>m ;  // value duplicate hoi na undored map e 

    m.emplace("tv", 100) ; 
    m.emplace("laptop", 100) ; 
    m.emplace("fridge", 100) ; 
    m.emplace("watch", 100) ;  
    
    for(auto p:m) {
        cout << p.first << " " << p.second << endl ; 
    }

    return 0 ; 

}