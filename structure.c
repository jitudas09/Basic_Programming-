#include<stdio.h>

struct student{ 
    int id ; 
    char n[100] ;
     float cg ; 
    } ; 

int main (){
    
    int n ;

    printf("Number of student : ") ; 
    scanf("%d",&n) ; 

    struct student s[n] ;

    for ( int i = 0 ; i<n ;  ++i ){

    printf("Enter student id %d: ",i+1) ;
    scanf("%d",&s[i].id) ;

    printf("Enter student Name %d: ",i+1) ;
    scanf(" %[^\n]",s[i].n) ;               // input full string like"Jitu das"

    printf("Enter student CGPA %d: ",i+1) ;
    scanf("%f",&s[i].cg) ;

    }

    printf("Yur Student data list : \n") ;

    for ( int i = 0 ; i<n ; ++i ){

    printf("Id %d: %d\n",i+1,s[i].id) ; 

    printf("Name %d: %s\n",i+1,s[i].n) ; 

    printf("CGPA %d: %f\n",i+1,s[i].cg) ;

    }

    return 0 ;
    
}