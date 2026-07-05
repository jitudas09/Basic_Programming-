#include<stdio.h>
// int main() {
//     int n ; 
//     printf("Enter your pattern row :");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n ; j++){
//             printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }


// int main() {
//     int n ; 
//     printf("Enter your pattern row :");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n ; j++){
//            if(i==j)printf("$ ");
//            else printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int n ; 
//     printf("Enter your pattern row :");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=n ; j++){
//            if(i<=j)printf("$ ");
//            else printf("* ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int n ; 
//     printf("Enter your pattern row :");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i; j++){
//            printf("# ");
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int n ; 
//     printf("Enter your pattern row :");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i; j++){
//            printf("%d ",j);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int n ,count=1;; 
//     printf("Enter your pattern row :");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i; j++){
//            printf("%d ",count++);
//         }
//         printf("\n");
//     }
//     return 0;
// }

// int main() {
//     int n ; 
//     printf("Enter your pattern row :");
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=(n-i); j++){
//             printf(" ");
//         }
//         for(int j=1 ; j<=(2*i-1) ; j++){
//             printf("*");
//         }
//         printf("\n");
//     }
    // for(int i=n-1 ; i>0; i--){
    //     for(int j=1 ; j<=(n-i); j++){
    //         printf(" ");
    //     }
    //     for(int j=1 ; j<=(2*i-1) ; j++){
    //         printf("*");
    //     }
    //     printf("\n");
    // }
//     return 0;
// }

// int main() {
//     int n ; 
//     printf("Enter your pattern row :");
//     int digit=1;
//     scanf("%d",&n);
//     for(int i=1 ; i<=n ; i++){
//         for(int j=1 ; j<=i; j++){
//            printf("%d ",digit);
//            digit=1-digit;       //FLOIDS TRINGLE
//         }
//         printf("\n");
//     }
//     return 0;
// }



int main() {
    int n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {

        // space print করা
        for(int j = 1; j <= n - i; j++) {
            printf(" ");
        }

        // '*' print করা
        for(int j = 1; j <= i; j++) {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}




