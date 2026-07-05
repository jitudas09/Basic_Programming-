#include<bits/stdc++.h>
using namespace std ; 

// int main() {
//     int n ; cin >> n ; 
//     int a[n] ; 
//     for ( int i= 0 ; i<n ; ++i ) cin >> a[i] ; 
//     int *p ; 
//     p=a ; 
//     for (int i = 0 ; i<n ; ++i ){
//         cout << p[i] << " "<< "Address : " << p  <<  endl ; 
//         // cout << *p+i << " " << endl ; 
//         // cout << *p << " " << endl ; 
//         // cout << "Address : " << p ; 
//     }
//     return 0 ;
// }

// int main (){
//     char str[] = "SEC" ; 
//     char *p, *s ; 
//     p = str ; 
//     s= str ; 
//     cout << endl ; 
//     while(*p){
//         cout << *p << " "  ; 
//         p++ ;
//     }
//     cout << sizeof(p) << "And " << sizeof(s) << endl ;// cpp tee direct print hoi na sizeof use kora lage 
//     return 0 ; 
// }

// int main (){
//     int *ptr[3] ; 
//     int a = 1 , b = 2 , c = 3 ;
//     ptr[0]=&a ; ptr[1]=&b ; ptr[2]=&c ;  
//     cout << *ptr[0] << *ptr[1] << *ptr[2] << endl ; 
//     return 0 ; 
// }

// int main (){
//     int r , c ; cin >> r >> c ; 
//     int a[r][c] ; 
//     for ( int i = 0 ; i<r ; ++i ){
//         for ( int j = 0 ; j< c; ++j ){
//             cin >> a[i][j] ;
//         }
//     }
//     // int *p= &a[0][0] ;                            // vul koi hoise ??

//     int (*ptr)[3] ;
//     ptr=a[0][0] ; 
//     for ( int i = 0 ; i<r ; ++i ){
//         for ( int j = 0 ; j< c; ++j ){
//             cout << *(*(ptr+i)+j) << " " ; 
//         }
//         cout << endl ; 
//     }
// }


// pass by avalue ;
// void update ( int *n ){
//     (*n)++ ; 
 
// } 
// int main (){
//     int var ; cin >> var ; cout << var << endl  ; 
//     update (&var ) ;
//     cout << var ; 
//     return 0 ; 
// }

// void swap(int *a , int *b ){
//     int temp ;              // ask to chtgpt eikhane * dea nai na keno ??
//     temp = *a ; 
//     *a = *b ; 
//     *b= temp ; 
//     cout << *a << " " << *b ; 
// }
// int main (){
//     int s , t ; 
//     cin >> s >> t ; 
//     swap ( &s , &t ) ;
//     cout << "main fun : " << s << " " << t ;  
//     return 0  ;  

// }


// #include<stdlib.h>

// int main (){
//     int *ptr ; 
//     int n ;
//     cin >> n ; 
//     ptr= (int*)malloc(n*sizeof(ptr)) ;
//     if(ptr== NULL) {
//         cout << "no" ; exit(0) ;//          eita kivabe kaj kore ta bujai daw 
//     } cout << "Before : " << endl ; 
//     for ( int i = 0 ; i<n ; i++){
//         cout << ptr[i] ; 
//     }
//     cout << "Now Enter : " << endl ;
//     for ( int i = 0 ; i<n ; ++i ){
//         cin >> ptr[i] ; 
//     }
//     cout << "After : " << endl ;
//     for ( int i = 0 ; i<n ; ++i ){
//         cout  << ptr[i] ; 
//     }
//     return 0 ; 
// }

// #include<stdlib.h>

// int main (){
//     int *ptr ; 
//     int n ;
//     cin >> n ; 
//     ptr= (int*)calloc(n,sizeof(ptr)) ;
//     if(ptr== NULL) {
//         cout << "no" ; exit(0) ;//          eita kivabe kaj kore ta bujai daw 
//     } cout << "Before : " << endl ; 
//     for ( int i = 0 ; i<n ; i++){
//         cout << ptr[i] << endl  ; 
//     }
//     cout << "Now Enter : " << endl ;
//     for ( int i = 0 ; i<n ; ++i ){
//         cin >> ptr[i] ; 
//     }
//     cout << "After : " << endl ;
//     for ( int i = 0 ; i<n ; ++i ){
//         cout  << ptr[i] ; 
//     }
//     return 0 ; 
// }

// #include<stdlib.h>

// int main (){
//     int *ptr ; 
//     int n ;
//     cin >> n ; 
//     ptr= (int*)calloc(n,sizeof(ptr)) ;
//     if(ptr== NULL) {
//         cout << "no" ; exit(0) ;//          eita kivabe kaj kore ta bujai daw 
//     } 
//     cout << "Before : " << endl ; 

//     for ( int i = 0 ; i<n ; i++){
//         cout << ptr[i] << endl  ; 
//     }

//     cout << "Now Enter : " << endl ;

//     for ( int i = 0 ; i<n ; ++i ){
//         cin >> ptr[i] ; 
//     }

//     cout << "After : " << endl ;

//     for ( int i = 0 ; i<n ; ++i ){
//         cout  << ptr[i] << endl ; 
//     }

//     n=n+4 ;

//     ptr= realloc(ptr, n * sizeof(int)) ;

//     for ( int i = 0; i<n ; ++i ){
//         cin >> ptr[i]  ; 
//     }

//     cout << "After realloc : " << endl ;
     
//     for ( int i = 0 ; i<n ; ++i ){
//         cout << ptr[i] << endl ; 
//     }

//     return 0 ; 
// }

// typedef unsigned int unit ;
// int main (){
//     unit age = 27 ; 
//     cout << age << endl ; 
//     return 0 ; 
// }

// struct student {
//     int id ; 
//     char name[100] ; 
//     float gpa ; 
// };
// int main (){
//     struct student s1 = {101 , "Jitu", 3.81} ; 
//     cout << s1.id << " " << s1.name << " " << s1.gpa << endl ; 
// }


