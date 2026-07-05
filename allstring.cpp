%%%%%%%%%%%%%%%%%%%%%%% CHARACTER CHANGE KORE DEWA %%%%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ; 
int main (){
  char str[100];
  cin.getline(str,100);
  char x, y ; 
  cout << "Enter x and y :" ; 
  cin >> x >> y ; 
  int n=strlen(str);
  for(int i=0 ; i<n ; i++ ){
    if(str[i]==x){
      str[i]=y;
    }
  }
  cout << str; 
  return 0 ; 
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  SAME %%%%%%%%%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ; 
int main (){
    cout << "Enter Your Name : " ;
    char s[100] ; 
    cin.getline(s,100);
    char x, y ; 
    cout << "Enter that character that's which you want to change : " ; 
    cin >> x ; 
    cout << "Enter your character that will change your previous character :" ; 
    cin >> y ;
    int n = strlen(s) ;  
    for(int i=0 ; i<n ; i++ ){
        if(s[i]==x) s[i]=y ; 
    
    }
    cout << s << endl ; 
    cout << "Successfully done !!!!!!!! " ; 
    return 0 ; 
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% REVERSE STRING %%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ; 
int main (){
    char s[100];
    cin.getline(s,100);
    int n=strlen(s);
    for(int i=0 ; i<n/2 ; i++){
        int temp=s[i];
        s[i]=s[n-1-i];
        s[n-1-i]=temp;
    }
    cout << s ;
    return 0 ; 
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% PALINDROME %%%%%%%%%%%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ; 
int main (){
    char s[100] ; 
    cin.getline(s,100) ; 
    int n=strlen(s) , flag=0 ; 
    for(int i=0 ; i<n/2 ; i++){
        if(s[i]!=s[n-1-i]) flag=1 ; 
    }
    if (flag==0 ) cout << s << " is palindrome." ; 
    else cout << s << " is not palindrome";
    return 0 ;
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% VOWEL CONSONENT %%%%%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ; 
int main (){ 
    char s[100] ; 
    cin.getline(s,100);
    int n=strlen(s);
    for(int i=0 ; i<n; i++){
        if(s[i]>='a' && s[i]<='z' || s[i]>='A' && s[i]<='Z'){        
            if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' ){
                cout << s[i] << " is Vowel !!!!!!!" << endl ;
            }
            else cout << s[i] << " is consonent " << endl ;  
        }
        else{
                if(s[i]==' ') cout << s[i] << " is space !!!!! Try again " << endl ;
                else cout << s[i] << " is integer number .Try again" << endl ;
        }
        
    }
    return 0 ; 

}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% LOWERCAE %%%%%%%%%%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ; 
int main (){
    char s[100];
    cin.getline(s,100) ; 
    int n=strlen(s);
    for(int i=0 ; i<n ; i++){
        if(s[i]>='A' && s[i] <= 'Z') {
            s[i]=s[i]+32;
        }
    }
    cout << "Lowercase : " << s ; 
    return 0 ;
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  REPEAT AND NON REPEAT %%%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ; 
int main (){
    char s[100];
    cin.getline(s,100) ; 
    int n=strlen(s);
    for(int i=0 ; i<n ;i++){
        int flag=0; 
        for(int j=i+1 ; j<n ; j++){
            if(s[i]==s[j]) flag=1 ; 
        }
        if(flag==1) cout << s[i] << " is your repeating character. " << endl  ; 
    }
    return 0 ;
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  REMOVE ALL SPACE %%%%%%%%%%%%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ; 
int main (){
    char s[100];
    cin.getline(s,100) ; 
    int n=strlen(s);
    for(int i=0 ; i<n ; i++ ){
        if(s[i]==' '){
            for(int j=i ; j<n ; j++){
                s[j]=s[j+1];
            }
            i--;
            n--;
        }
    }
    cout << s ; 
    return 0 ;
}

%%%%%%%%%%%%%%%%%%%%%%%% FREQUENCY / AKTA LETTER KOIBAR ASEE TA %%%%%%%%%%


#include<bits/stdc++.h>
using namespace std ; 
int main (){
    int freq[128]={0} ; 
    char s[100];
    cin.getline(s,100) ; 
    for(int i=0 ; s[i]!='\0' ; i++){
        freq[s[i]]++;
    }
    for(int i=0 ; i<128 ; i++){
        if(freq[i]!=0){
            cout << char(i) << freq[i] << endl;
        }
    }
    return 0 ;
}
