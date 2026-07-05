#include<stdio.h>
int main() {
    int x,y;
    printf("Enter the cordinates(x,y) : ");
    scanf("%d %d",&x,&y);
    if(x>0 && y>0){
        printf("Cordinates point (%d,%d) lies in the first quardent.\n",x,y);
    }
    else if(x<0 && y>0) {
        printf("Cordinates point (%d,%d) lies in the second quardent.\n",x,y);        
    }
    else if(x<0 && y<0) {
        printf("Cordinates point (%d,%d) lies in the third quardent.\n",x,y);        
    }
    else if(x>0 && y<0) {
        printf("Cordinates point (%d,%d) lies in the second quardent.\n",x,y);        
    }
    else if(x==0 && y!=0){
        printf("Cordinates point (%d,%d) lines on the y-axis.\n",x,y);
    }
    else if(x!=0 && y==0) {
        printf("Cordinates point (%d,%d) lies on the x-axis.\n",x,y);        
    }
    else {
        printf("Cordinates point (%d,%d) lies on the origin.\n",x,y);        
    }
    return 0;
}
