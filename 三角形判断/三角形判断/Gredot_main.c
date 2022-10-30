#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main() {
    int a = 0, b = 0, c = 0;
    printf("请输入三角形的三边长度\n");
    while ((scanf("%d%d%d", &a, &b, &c)) != EOF)
    {
        if ((a + b > c) && (a + c > b) && (b + c > a))
        {
            if ((a == b) && (b != c) || (a == c) && (a != b) || (b == c) && (b != a))
                printf("Isosceles triangle!\n");
            else if ((a == b) && (b == c))
                printf("Equilateral triangle!\n");
            else
                printf("Ordinary triangle!\n");
        }
        else
            printf("Not a triangle!\n");
    }
    return 0;
}