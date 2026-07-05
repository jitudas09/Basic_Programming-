#include<stdio.h>
typedef unsigned int jitu ; 
int main (){
    jitu age = 25 ;                 // THAT MEANS WE DEFINED int AS jitu . 
    printf("Age=%d", age) ;          // USE FOR EASY CODE 
    return 0; 
}

#include<stdio.h>
enum days {sun , mon , tue , wed , thu } ; //USE TO STORE SOME CONSTANT VALUE 0 , 1 , 2, ...
int main() {                                // USE TO MANAGE CONSTANT VALUE 
    enum days today = wed ; 
    printf("Day : %d ", today );
    return 0;
}
//                              type conversion 
#include<stdio.h>
 
int main() {
    int n=5; 
    int y=2 ; 
    printf("%d", n/y) ; 
    return 0;
}

//                                  inplicit (Automatically)  (9.9 -> 9)
#include<stdio.h>
 
int main() {
    int mynum = 9.9 ; 
    float sum = 5/2 ; 
    printf("%d , %f ", mynum , sum ) ;
    return 0;
}
//                              Explicit (Manually ) 
#include<stdio.h>
 
int main() {
    float sum= (float) 5/2 ;
    printf("%f", sum ) ;  
    return 0;
}

//                                  relational (< , <= , == , != ) , Logical ( && , ||) , Conditional/tarnary((condition)? exp1 : exp2 ) 

#include<stdio.h>
 
int main() {
    int a=10 , b=15 ; 
    int x =(a<b) ? a : b ;       // tarnary 
    printf("%d", x ) ; 
    return 0;
}

#include<stdio.h>
 
int main() {
    int a=6 , b=3 ; 
    printf("%d", (a&3)) ; // -> 2 
    return 0;
}

//                                          STUCK : A collection of different data types 
#include<stdio.h>
struct student {
    int id ; 
    char name [20] ; 
    float gpa ; 
} ; 
int main() {
    struct student s1={ 101 , "Jitu" , 4.75} ; 
    printf("ID : %d \nName : %s \nGPA : %.2f\n" , s1.id , s1.name , s1.gpa); 
    return 0;
}

#include<stdio.h>
struct student {
    int id ; char name[100] ; float gpa; 
};
int main (){
    struct student s1 ; 

    printf("Enter id : ") ; 
    scanf("%d",&s1.id) ; 
    printf("Enter name : ") ; 
    // scanf("%s",&s1.name) ;
    scanf(" %[^\n]", &s1.name) ; // eita newlie er pore o input nei as : jitu das 
    printf("Enter CGPA : ") ; 
    scanf("%f",&s1.gpa) ;
    printf("Id , Name and GPA : %d %s %f\n", s1.id , s1.name , s1.gpa) ;
    return 0  ;  

}

struct student{ int id ; char n[100] ; float cg ; } ; 

int main (){
    struct student s ; 
    struct student t ; 

    printf("Student data 1 !!!!\n") ;

    printf("Enter student id : ") ;
    scanf("%d",&s.id) ;

    printf("Enter student Name : ") ;
    scanf(" %[^\n]",s.n) ; 

    printf("Enter student CGPA: ") ;
    scanf("%f",&s.cg) ;
    
    printf("ID : %d",s.id) ; 
    
    printf("Name : %s",s.n) ; 
    
    printf(" CGPA : %f\n",s.cg) ;

    printf("Student data 2 !!!!\n") ;

    printf("Enter student id : ") ;
    scanf("%d",&t.id) ; 

    printf("Enter student Name : ") ;    
    scanf(" %[^\n]",t.n) ; 
    
    printf("Enter student CGPA: ") ;
    scanf("%f",&t.cg) ;
    
    printf("Id : %d",t.id) ; 
    printf("Name : %s",t.n) ; 
    printf("CGPA : %f",t.cg) ;

    return 0 ;
    
}
//             UPDATED VERSION...its so much better 


struct student{ int id ; char n[100] ; float cg ; } ; 

int main (){
    int n ;
    printf("Student no : ") ; 
    scanf("%d",&n) ; 
    struct student s[n] ;
    for ( int i = 0 ; i<n ;  ++i ){
    printf("Enter student id %d: ",i+1) ;
    scanf("%d",&s[i].id) ;

    printf("Enter student Name %d: ",i+1) ;
    scanf(" %[^\n]",s[i].n) ; 

    printf("Enter student CGPA %d: ",i+1) ;
    scanf("%f",&s[i].cg) ;
    }

    printf("Yur Student data list : \n") ;

    for ( int i = 0 ; i<n ; ++i ){
    printf("Id %d: %d\n",i+1,s[i].id) ; 
    printf("Name %d: %s\n",i+1,s[i].n) ; 
    printf("CGPA %d: %f\n",i+1,s[i].cg) ;
    }
}


//                              UNION : Similar , all member share same memory location ; 


#include<stdio.h>
union Data {
    int i ; 
    float f ; 
    char c ;
} ; 
int main() {
    union Data d ; 
    d.i=10;
    printf("i=%d\n", d.i)  ;
    d.f=3.14; 
    printf("f=%.2f\n",d.f) ; //STUCK E AKTA GORE ER MODDHE AKTA KORE INPUT NIA OUTPUT DEI
    d.c='A' ; 
    printf("c=%c\n",d.c) ;
    printf("I After overwrite = %d\n", d.i) ; // eikhane sob delete hoia jai....just laster ta exist kore 
    return 0; // BUT UNION E SAME TAKHE SOB ; 
}

#include<stdio.h>


union student {int id ; float cgpa ; } ; 

int main (){
    union student s ;
    s.id= 9 ; 
    printf("%d", s.id) ;//    eketere right value print hoi 

    s.cgpa= 3.81 ;
    printf("%d", s.id) ; //   eketre vul value print ho karon oi same mameory tee float value rakha hoise 

    printf("%f", s.cgpa) ;
}


//                                          (Dangling else)  ERROR

#include<stdio.h>
 
int main() {
    int x= 5 , y = 10 ; 
    if(x<0)  if(y>0) printf("Confused");
    else 
        printf("Not Confused") ; 
    return 0;
}

//                                              IF/goto 
#include<stdio.h>
 
int main() {
    int n=10 ; 
    if(n>0) goto positive ; 
    printf("This will be skipped.");        // FORWARD JUMP 
    positive : 
    printf("This number is positive .");
    return 0;
}


#include<stdio.h>
 
int main() {
    int i= 1 ; 
    start : 
    printf("%d\n",i);
    if(i<=5) goto start ;
    return 0;
}