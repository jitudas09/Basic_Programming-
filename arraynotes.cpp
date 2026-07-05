%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% ODD EVEN %%%%%%%%%%%%


#include<bits/stdc++.h>
using namespace std;
int main (){
    int n,sum=0; 
    cout << "Enter :" ; 
    int max=-2;
    int idx;
    cin >> n ; 
    int arr[n];
    for(int i=0;i<n; i++){
        cin >> arr[i];
    }
    cout << endl ; 
    for(int i=0;i<n; i++){
        sum+=arr[i];
        if(arr[i]>=max) {
            max=arr[i]; 
            idx=i;
        }
    }
    for(int i=0 ; i<n ; i++ ){
        if(arr[i]%2==0) cout << "Your Even number is :" << arr[i] <<' ' <<  endl ; 
        else cout << "Your odd number is :"<< ' ' << arr[i] << endl ; 
    }
    cout << sum << endl << max << endl << idx ;  

    return 0 ; 
}
%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   SWAPING DESENDING ORDER %%%%%%%%%%%%


#include<bits/stdc++.h>
using namespace std; 
int main (){
    int n ;
    cout << "Enter : " ; 
    cin >> n ; 
    int arr[n];
    for(int i=0 ; i<n;i++){
        cin >> arr[i] ; 
    }
    for(int i=0 ; i<n-1;i++){
        int max=arr[i];
        int idx=i;
        for(int j=i+1;j<n; j++){
            if(arr[j]>max) {
                max=arr[j];
                idx=j;
            }
        }
        arr[idx]=arr[i]; সবচেয়ে বড় সংখ্যার অবস্থানে বর্তমান সংখ্যাটা বসানো (swap-এর প্রথম ধাপ)
        arr[i]=max;
    }
    cout << "Shorted Desending order:" ; 
    for(int i=0 ; i<n; i++){
        cout << arr[i] << " "; 
    }
    return 0 ;
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  REVERSING ARRAAY %%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ; 
int main (){
    int n ; 
    cout << "Enter : " ; 
    cin >>  n ; 
    int arr[n] ; 
    for (int i=0 ; i<n ; i++){
        cin >> arr[i] ;
    }
    cout << "Reversing Your array : " ; 
    for(int i=0 ; i<n/2 ; i++){      তুমি যদি পুরো n অব্দি দাও, তাহলে:প্রতিটি swap দুইবার হবেফলে array আবার আগের অবস্থায় ফিরে যাবে
        int temp=arr[i] ; 
        arr[i] = arr[n-1-i] ; 
        arr[n-1-i]=temp; 
    }
    for (int i=0 ; i<n; i++){
        cout << arr[i] << ' ' ; 
    }
    return 0 ; 
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%   UNIQUE NUMBERS IN ARRAY %%%%%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std; 
int main (){
    int n ;
    cout << "Enter ; " ; 
    cin >> n ; 
    int arr[n];
    for (int i=0 ; i<n ; i++){
        cin >> arr[i] ; 
    }
    int unique=0 ; 
    cout << "Your unique numbers are: ";
    for(int i=0 ; i<n ; i++){
        int count=0 ;
        for(int j=0 ; j<n ; j++){
           if( arr[i]==arr[j]){
                count++;
           }
        }
        if(count==1){
            cout << arr[i] << ' ' ;
            unique++;
        }

    }
    cout << "Number of unique number is : " << unique ; 
}


@@@@@@@@@@@@@@@@@@                         2D ARRAY         @@@@@@@@@@@@@@@@@@@@@@@@@@@@



%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%  MAXIMAM ARRAY ELEMENT %%%%%%%%%%%%%%
#include<bits/stdc++.h>
using namespace std ; 
int main (){
    int r=5,c=3;
    int arr[5][3];
    for(int i=0 ; i<r; i++){
        for(int j=0 ; j<c; j++){
            cin >> arr[i][j] ; 
        }
    }
    int max=-2;
    for(int i=0 ; i<r; i++){
        for(int j=0 ; j<c; j++){
            if(max<arr[i][j]){
                max=arr[i][j];
                
            }
        }
    }
    cout << "Your max is : "<<max;
    return 0 ; 
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% SUM OF TRACE   %%%%%%%%%%%%%%%%%%
#include<bits/stdc++.h>
using namespace std ; 
int main (){
    int r, c, sum = 0 ; 
    cout << "Enter :" ; 
    cin >> r >> c ; 
    int arr[r][c] ; 
    for (int i=0 ; i<r ; i++){
        for (int j=0 ; j<c ; j++){
            cin >> arr[i][j] ; 
        }
    } 
    for (int i=0 ; i<r ; i++){
        for (int j=0 ; j<c ; j++){
            cout << arr[i][j] << ' ' ;  
        }
        cout << endl ; 
    }
    for (int i=0 ; i<r ; i++){
        for (int j=0 ; j<c ; j++){
            if(i==j) sum+=arr[i][j] ;  
        }
    }
    cout << sum ; 
}


%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%% SUM OF UPPER TRIANGLE %%%%%%%%%%%
#include<bits/stdc++.h>
using namespace std ;
int main (){
    int r, c , sum =0 ; 
    cout << "Enter : " ; 
    cin >> r >> c ; 
    int arr[r][c];
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl ; 
    }
    cout << endl ; 
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(j>=i){
                sum+=arr[i][j];
            }
            
        } 
    }
    cout << sum ; 
    return 0 ; 
}


%%%%%%%%%%%%%%%%%%%%%%%%%  TRANSPOSE MATRIX %%%%%%%%%%%%%%%

#include<bits/stdc++.h>
using namespace std ;
int main (){
    int r, c , sum =0 ; 
    cout << "Enter : " ; 
    cin >> r >> c ; 
    int arr[r][c];
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cin >> arr[i][j];
        }
    }
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cout << arr[i][j] << ' ';
        }
        cout << endl ; 
    }
    cout << endl ; 
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            if(i<j) {
                int temp =arr[i][j];
                arr[i][j]= arr[j][i];
                arr[j][i]=temp ; 
            }
        }
    }
    for(int i=0 ; i<r ; i++){
        for(int j=0 ; j<c ; j++){
            cout << arr[i][j] << ' ' ; 
        }
        cout << endl ; 
    }
    return 0 ;  
}
%%%%%%%%%%%%%%%%%%%%%%%%  MASIMUM REPEATING NUMBER %%%%%%%%%%%%%%%%%
#include<bits/stdc++.h>
using namespace std ; 
int main (){
    int n ; 
    cout << "Enter :" ; 
    cin >> n ; 
    int arr[n] ; 
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ; 
    }
    int maxcount=0 ; 
    int maxnum=arr[0];
    for(int i=0 ; i<n ; i++){
        int count=0 ; 
        for(int j=0 ; j<n ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count>maxcount){
            maxcount=count;
            maxnum=arr[i];
        }
    }
    cout << "Maximum repeating number is  :" << maxnum << endl ; 
    cout << "It repeats " << maxcount << " times" << endl ;
    return 0 ;  
}

%%%%%%%%%%%%%%%%%%%%%%%%  UNIQUE NUMBER      %%%%%%%%%%%%%%%%%
#include<bits/stdc++.h>
using namespace std ; 
int main (){
    int n ; 
    cout << "Enter :" ; 
    cin >> n ; 
    int arr[n] ; 
    for(int i=0 ; i<n ; i++){
        cin >> arr[i] ; 
    }
    int unique=0;
    cout << "Your unique numbers are :";
    for(int i=0 ; i<n ; i++){
        int count =0 ; 
        for(int j=0  ; j<n ; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
        if(count==1) {
            cout << arr[i] << ' ' ;
            unique++;
        }  
    }
    cout << endl ; 
    cout << "Number of unique number is : " << unique << endl ; 
    return 0 ;  
}

