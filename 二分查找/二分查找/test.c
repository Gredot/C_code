#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[10];
	//������ֲ�����������±ꡢ���±ꣻ
	int left = 0;
	int right = sizeof(arr) / sizeof(arr[0]) - 1;
	//������Ԫ��
	int key = 3; 
	//��arr���鸳ֵ
	for (int i = 0; i < 10; i++)
	{
		scanf("%d", &arr[i]);
	}
	//��arr�����е�Ԫ�ؽ�����������
	int len = sizeof(arr) / sizeof(arr[0]) - 1;
	for (int i = 0; i <= len; i++)
	{
		for (int j = 0; j < len - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = 0;
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
	//���±�������±�   ֹͣ����
	while (left<=right)
	{
		//�м�Ԫ���±�    //ѭ������   ���ϸ����м�Ԫ�ص��±�
		int mid = (left + right) / 2;
		//�м�Ԫ�ش���������Ԫ��    �������±�
		if (arr[mid] > key)
		{
			right = mid - 1;
		}
		//�м�Ԫ��С��������Ԫ��    �������±�
		else if (arr[mid] < key)
		{
			left = mid + 1;
		}
		//�м�Ԫ�ص���������Ԫ��  �ҵ���
		else 
		{
			printf("�ҵ���\n");
			break;
		}
	}
	//���ֲ�����Ϻ�δ�ҵ�  �Ҳ�����
	if (left > right)
	{
		printf("�Ҳ�����");
	}
	return 0;
}