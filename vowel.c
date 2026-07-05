#include<stdio.h>
int main(){
    char ch;
    printf("Enter your character:");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z' || ch>='A' && ch<='Z'){
        if(ch=='a' || ch=='e' || ch=='i' ||ch=='o' || ch=='u'|| ch=='A' || ch=='E' || ch=='I' ||ch=='O' || ch=='U'){
            printf("Your character %c is vowel.\n",ch);            
        }
        else printf("Printf %c is a consonent.\n");
    }
    else printf("Your input %c is not a character.\n");
    return 0;
}

#include<stdio.h>
 
int main() {
    printf("Enter : ") ; 
    char v ; 
    scanf("%c",&v) ; 
    if(v>='a' && v<='z' || v>='A' && v<='Z'){
        switch (v)
        {
            case 'a' : 
            printf("%c is vowel.",v) ;
            break;
            case 'e' : 
            printf("%c is vowel.",v) ;
            break; 
            case 'i' : 
            printf("%c is vowel.",v) ;
            break; 
            case 'o' : 
            printf("%c is vowel.",v) ;
            break; 
            case 'u' : 
            printf("%c is vowel.",v) ;
            break; 
            case 'A' : 
            printf("%c is vowel.",v) ;
            break; 
            case 'E' : 
            printf("%c is vowel.",v) ;
            break; 
            case 'I' : 
            printf("%c is vowel.",v) ;
            break; 
            case 'O' : 
            printf("%c is vowel.",v) ;
            break; 
            case 'U' : 
            printf("%c is vowel.",v) ; 
            break;
            default : 
            printf("%c is a cosonent.",v);
        }
    }
    else printf("Invalid input!!") ; 
    return 0;
}
