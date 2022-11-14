#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include<math.h>
int main() {
    float a, b, c, Delta, x1, x2, S, X;
    while ((scanf("%f %f %f", &a, &b, &c)) != EOF)
    {
        Delta = b * b - 4 * a * c;
        x2 = (float)(((-b) + sqrt(Delta)) / (2 * a));
        x1 = (float)(((-b) - sqrt(Delta)) / (2 * a));
        S = (-b) / (2 * a);
        X = (float)((sqrt(-Delta)) / (2 * a));

        if (a == 0)
            printf("Not quadratic equation\n");
        else
        {
            if (Delta == 0)
                if (b == 0)
                    printf("x1=x2=%.2f\n", 0.00);
                else
                    printf("x1=x2=%.2f\n", x1);
            else if (Delta > 0)
                printf("x1=%.2f;x2=%.2f\n", x1, x2);
            else
            {
                printf("x1=%.2f-%.2fi;x2=%.2f+%.2fi\n", S, X, S, X);
            }
        }
    }
    return 0;
}  
