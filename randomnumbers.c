
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int randomnumber, guess ; 
    srand(time(0));
    randomnumber=rand()% 20+1;
    printf("Enter nunber:\n");
    while(1){
        scanf("%d",&guess);
        if(guess==randomnumber) {
            printf("You guessed.!!");
            break;
        }
        else if (guess < randomnumber) printf("LOW!!");
        else if(guess > randomnumber) printf("HIGH");
        else printf("Too High !!");

    }
    return 0;
} 