#include <stdio.h>
int main() {
    int x,y;
    printf("Enter the x-coordinate: ");
    scanf("%f",&x);
    printf("Enter the y-coordinate: ");
    scanf("%f",&y);
    if (x>0){
        if(y>0){
            printf("First Quadrant");
        }
        else{
           printf("Fourth Quadrant"); 
        }
    }
    else if (x<0){
        if (y>0){
            printf("Second Quadrant");
        }
        else{
           printf("Third Quadrant"); 
        }
    }
    else if (x==0){
        if (y!=0){
            printf("On Y-Axis");
        }
        else{
           printf("Origin"); 
        }
    }
    else if (y==0){
        if (x!=0){
            printf("On X-Axis");
        }
        else{
           printf("Origin"); 
        }
    }
    return 0;
}