#include <stdio.h>
#include <math.h>
int main() {
    float a,b,c,d,r1,r2;
    printf("Enter a,b,c for ax^2+bx+c=0: ");
    scanf("%f %f %f",&a,&b,&c);
    d=(pow(b,2)-(4*a*c));
    if (d>0){
        r1=(-b+sqrt(d))/(2*a);
        r2=(-b-sqrt(d))/(2*a);
        printf("%.2f and %.2f are the roots",r1,r2);
    }
    if (d==0){
        r1=(-b)/(2*a);
        printf("%.2f is the only root",r1);
    }
    if (d<0){
        printf("Non real roots");
    }
    return 0;
}
