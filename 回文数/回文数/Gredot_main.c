#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n, a = 0, b, c;
    printf("输入一个整数: ");
    scanf("%d", &n);
    c = n;
    while (n != 0)
    {
        b = n % 10;
        a = a * 10 + b;
        n /= 10;
    }
    if (c == a)
        printf("%d 是回文数。", c);
    else
        printf("%d 不是回文数。", c);
    return 0;
}  