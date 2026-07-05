// #include<stdio.h>
// // int main(){
// //     int q=200;
// //     printf("%d\n",q);
// //     int *p=&q;               //akline e addres store korte 
// //     printf("%p\n",&q);
// //     printf("%p\n",p);    
// //     p=p+1;
// //     printf("%p\n",p);
// //     return 0 ;
// // }
// int main(){
//     char q=200;
//     char *p=&q;
//     printf("%p\n",&q);
//     printf("%p\n",p);
//     p=p+1;
//     printf("%p\n",p);
//     return 0 ;
// }


// #include<stdio.h>
// int main (){
//     int n ; 
//     printf("Enter:");
//     scanf("%d",&n);
//     int arr[n];
//     for(int i=0 ; i<n ; i++){
//         scanf("%d",&arr[i]);
//     }
//     int *p; 
//     p=arr; >// or p = &arr[0] 
//     for(int i=0 ; i<n ; i++){
//         // printf("index=%d ; value=%d; address=%p\n",i,*p,p);
//         // p++;
//         printf("value =%d; address=%p\n",*p,p);// it prints only the o_th index value 
//         printf("value =%d; address=%p\n",*(p+i),p);
//         printf("value =%d; address=%p\n",p[i],p);
//         printf("\n");

//     }
//     return 0 ; 
// }

// #include<stdio.h>
// int main (){
//     char str[]="cse is my";
//     char *p;
//     p=str;
//     for(int i=0 ;  p[i] ; i++){
//         printf("index=%d ; value=%c ; address=%p\n",i,p[i],p+i);
//     }
//     return 0 ; 
// }



// #include<stdio.h>
// int main(){
//     char str[]="Hello jitu";
//     char *p;
//     p=str;
//     for(int i=0; p[i] ; i++){
//         printf("%c",p[i]);      // eikhetre address first e ei takhe only i er maddhome value update hoi

//     }
//     printf("\n");
//     while(*p){              //jitokkon na null character ase 
//         printf("%c\n",*p);
//         p++;            // ei process e address akdom last e chole jai.....null character
//     }
//     printf("cheecking:%c",*p);// last e akdom null char thakde 
//     return 0 ; 
// }


// #include<stdio.h>
// int main(){
//     char arr[]="bangladesh";
//     char *ptr;
//     char *str;
//     ptr=arr;
//     str=arr;
//     while(*str){
//         printf("%c\n",*str);
//         str++;
//     }
//     int length=str-ptr;
//     printf("Add of ptr :%p & add of str :%p & length=%d\n",ptr,str,length);
//     return 0 ; 
// }


// #include<stdio.h>
// // int main(){
// //     int *ptr[3];
// //     int a=1,b=2,c=3;
// //     ptr[0]=&a;
// //     ptr[1]=&b;
// //     ptr[2]=&c;
// //     printf("%d %d %d",*ptr[0],*ptr[1],*ptr[2]);
// //     3 ta pointer array and prottektai 1 ta kore input
// //     return 0 ; 
// // }

// int main (){
//     char *str[]={
//         "dhaka",
//         "chattogram",
//         "rsjshahi",
//     };
//     printf("%s",str[2]);
//     return 0 ; 
// }


// %%%%%%%%%%%%%%%%%%%%%%%%%%%ARRAY OF POINTERS%%%%%%%%%%%%%%%%%
// #include<stdio.h>
// int main(){
//     int *ptr[3];
//     int a=1,b=2,c=3;
//     ptr[0]=&a;
//     ptr[1]=&b;
//     ptr[2]=&c;
//     printf("%d %d %d",*ptr[0],*ptr[1],*ptr[2]);
//     return 0 ; 
// }

// #include<stdio.h>
// int main (){
//     char *str[]={
//         "dhaka",
//         "chattogram",
//         "rsjshahi",
//         "sylhet",
//     };
//    printf("%s %s\n",str[1],str[3]);
//     return 0 ; 
// }

// #include<stdio.h>
// int main (){
//     char *str[]={
//         "dhaka",
//         "chattogram",
//         "rsjshahi",
//         "sylhet",
//     };
//    printf("%s %s\n",str[1],str[3]);
//     char *temp ;
//     temp=str[1];
//     str[1]=str[3];
//     str[3]=temp;
//     printf("%s %s\n",str[1],str[3]);
//     return 0 ; 
// }

// %%%%%%%%%%%%%%%%%%%%%%%%%%%%%%%POINTER TO ARRAY &&&&&&&&&&&&&&&&&&&
// #include<stdio.h>
// int main(){
//     int row,col ; 
//     printf("Enter row and column : ");
//     scanf("%d %d",&row , &col);
//     int arr[row][col];
//     for(int i=0 ; i<row ; i++){
//         for(int j=0 ; j<col ; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int *ptr=&arr[0][0]; //int *ptr=arr;  
//     for(int i=0 ; i<row ; i++){
//         for(int j=0 ; j<col ; j++){
//             printf("%d ",*(ptr+i*col+j));
//         }
//         printf("\n");
//     }
//     return 0 ;
    
// }
// %%%%%%%%%%%%%%%%%%%%%%%%%POINTER TO ARRAY &&&&&&&&&&&&&&&&&&&
// #include<stdio.h>
// int main(){
//     int row,col ; 
//     printf("Enter row and column : ");
//     scanf("%d %d",&row , &col);
//     int arr[row][col];
//     for(int i=0 ; i<row ; i++){
//         for(int j=0 ; j<col ; j++){
//             scanf("%d", &arr[i][j]);
//         }
//     }
//     int (*ptr)[3];
//     ptr=arr;
//     for(int i=0 ; i<row ; i++){
//         for(int j=0 ; j<col ; j++){
//             printf("%d ",*(*(ptr+i)+j)); /////MORE BETTER WAY 
//         }
//         printf("\n");
//     }
//     return 0 ;
    
// }

// #include<stdio.h> 
// void update(int value){
//     value++; //pass by value
// }
// int main (){
//     int var=4;
//     printf("%d\n",var);
//     update(var);
//     printf("%d\n",var);
//     return 0 ; 
// }

// #include<stdio.h>
// int update(int *ptr){
//     (*ptr)++;
//     return ;
// }
// int main(){
//     int var=4;
//     printf("%d\n",var);
//     update(&var);
//     printf("%d\n",var);
//     return 0 ; 
// }


// #include<stdio.h>
// // void swap(int a, int b){
// //     printf("Before swap:%d %d\n",a,b);
// //     int temp=a;
// //     a=b;
// //     b=temp;
// //     printf("After:%d %d\n",a,b);
// //     return;
// // }
// // int main(){
// //     int a=4,b=3;
// //     swap(a,b);
// //     printf("In main function:%d %d\n",a,b);
// //     return 0 ;
// // }

// void swap(int *a,int *b){
//     printf("Before swap:%d %d\n",*a,*b);
//     int temp=*a;
//     *a=*b;
//     *b=temp;
//     printf("After swap:%d %d\n",*a,*b);
// }
// int main(){
//     int a=4,b=5;
//     swap(&a,&b);
//     printf("In main function:%d %d",a,b);
// }


// #include<stdio.h>
// #include<stdlib.h>
// // int malloc the memory preinitialized with garbadge value ;
// int main(){
//     int *ptr;
//     int n; 
//     printf("Enter No of gamers:");
//     scanf("%d",&n);
//     ptr=(int*)malloc(n*sizeof(int));
//     if(ptr==NULL){
//         printf("No memory allocation");
//         exit(0);
//     }
//     printf("Before assigining:\n");
//     for(int i=0 ; i<n ; i++){
//         printf("%d\n",ptr[i]);

//     }
//     for(int i=0; i<n ; i++){
//         ptr[i]=i+1;
//     }
//     printf("After assigining:\n");
//     for(int i=0 ; i<n ; i++){
//         printf("%d\n",ptr[i]);
//     }
//     return 0 ;
// }


// #include<stdio.h>
// #include<stdlib.h>
// // in calloc the memory preinitialized with 0 ;
// int main(){
//     int *ptr;
//     int n; 
//     printf("Enter No of gamers:");
//     scanf("%d",&n);
//     ptr=(int*)calloc(n,sizeof(int));
//     if(ptr==NULL){
//         printf("No memory allocation");
//         exit(0);
//     }
//     printf("Before assigining:\n");
//     for(int i=0 ; i<n ; i++){
//         printf("%d\n",ptr[i]);

//     }
//     for(int i=0; i<n ; i++){
//         ptr[i]=i+1;
//     }
//     printf("After assigining:\n");
//     for(int i=0 ; i<n ; i++){
//         printf("%d\n",ptr[i]);
//     }
//     free(ptr);
//     printf("Free memory done.\n");
//     return 0 ; 
// }


#include<stdio.h>
#include<stdlib.h>
int main(){
    int *ptr;
    int n; 
    printf("Enter No of gamers:");
    scanf("%d",&n);
    ptr=(int*)calloc(n,sizeof(int));
    if(ptr==NULL){
        printf("No memory allocation");
        exit(0);
    }
    printf("Before assigining:\n");
    for(int i=0 ; i<n ; i++){
        printf("%d\n",ptr[i]);

    }
    for(int i=0; i<n ; i++){
        ptr[i]=i+1;
    }
    printf("After assigining:\n");
    for(int i=0 ; i<n ; i++){
        printf("%d\n",ptr[i]);
    }
    n=n+5;
    ptr=realloc(ptr,n*sizeof(int));
    for(int i=0; i<n ; i++){
        ptr[i]=i+1;
    }
    printf("After realloc:\n");
    for(int i=0 ; i<n ; i++){
        printf("%d\n",ptr[i]);
    }
    return 0 ;
}   
