#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
int main()
{
    int n, a = 0, b, c;
    printf("����һ������: ");
    scanf("%d", &n);
    c = n;
    while (n != 0)
    {
        b = n % 10;
        a = a * 10 + b;
        n /= 10;
    }
    if (c == a)
        printf("%d �ǻ�������", c);
    else
        printf("%d ���ǻ�������", c);
    return 0;
}  