#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int c, n;
    int a[100];
    printf("输入的数字量\n");
    scanf("%d", &n);//这里是输入的数字量
    printf("输入的顺序数据\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);//输入n个数字
    }
    printf("输入要插入的数据\n");
    scanf("%d", &c);//输入要插入的数字
    for (int i = 0; i < n; i++)
    {
        if (a[i] > c)//数列是升序排，找到比x大的那么这里的i位置就是x插入的位置
        {
            for (int j = n; j > i; j--)//从i-n将每个数往后移位，给x腾出位置
            {
                a[j] = a[j - 1];
            }
            a[i] = c;//移动完毕，将x放入i的位置
            break;//这里将插入的x放入位置后记得跳出循环
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }
}