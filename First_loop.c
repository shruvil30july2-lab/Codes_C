#include <stdio.h>
#include <stdbool.h>
int main() {
    float a;
    while (true){
        printf("Enter marks: ");
        scanf("%f",&a);
        if (a<0 || a>100){
            printf("Wrong input\n");
        }
        else{
            break;
        }
    }
   if (a>=50){
       printf("Pass");
   }
   else {
       printf("Fail");
   }
    return 0;
}