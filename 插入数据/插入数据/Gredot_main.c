#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
    int c, n;
    int a[100];
    printf("�����������\n");
    scanf("%d", &n);//�����������������
    printf("�����˳������\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);//����n������
    }
    printf("����Ҫ���������\n");
    scanf("%d", &c);//����Ҫ���������
    for (int i = 0; i < n; i++)
    {
        if (a[i] > c)//�����������ţ��ҵ���x�����ô�����iλ�þ���x�����λ��
        {
            for (int j = n; j > i; j--)//��i-n��ÿ����������λ����x�ڳ�λ��
            {
                a[j] = a[j - 1];
            }
            a[i] = c;//�ƶ���ϣ���x����i��λ��
            break;//���ｫ�����x����λ�ú�ǵ�����ѭ��
        }
    }
    for (int i = 0; i < n + 1; i++)
    {
        printf("%d ", a[i]);
    }
}