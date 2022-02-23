#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    float a,b,c,d;
    float r1,r2;
    float rpart,den;

    printf("Enter coefficients of x (a,b and c)\n");
    scanf("%f%f%f", &a, &b, &c);
    rpart = sqrt(b*b - 4 *a *c);
    den = 2 * a;
    r1 = (-b + rpart) /den;
    r2 = (-b - rpart) /den;
    d = (b * b - 4 * a * c);

    if (d == 0){
    printf("Equation has two values ; %f\n%f\n",r1,r2);
    }

    else if (d > 0){
        printf("Equation has two distinct values ; %f\n%f\n",r1,r2);
    }
    if (d < 0){
        printf("Equation has no roots");
    }


    return 0;
}
