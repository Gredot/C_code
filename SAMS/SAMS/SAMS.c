#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  
void menu(void)
{
	printf("\n\n");
	printf("\t\t\t============================================\n");
	printf("\t\t\t|                                          |\n");
	printf("\t\t\t|          ��ӭ����ѧ���ɼ�����ϵͳ        |\n");
	printf("\t\t\t|                                          |\n");
	printf("\t\t\t|==========================================|\n");
	printf("\t\t\t|            ��ѡ��Ҫ����������            |\n");
	printf("\t\t\t|------------------------------------------|\n");
	printf("\t\t\t|                                          |\n");
	printf("\t\t\t|              1.¼��ѧ����Ϣ              |\n");
	printf("\t\t\t|              2.��ʾѧ����Ϣ              |\n");
	printf("\t\t\t|              3.����ѧ����Ϣ              |\n");
	printf("\t\t\t|              4.ɾ��ѧ����Ϣ              |\n");
	printf("\t\t\t|              5.�޸�ѧ����Ϣ              |\n");
	printf("\t\t\t|              6.����ѧ����Ϣ              |\n");
	printf("\t\t\t|              7.���ܷ�����                |\n");
	printf("\t\t\t|                                          |\n");
	printf("\t\t\t============================================\n");
}
//ѧ���ṹ�� 
struct Student
{
	char Name[10];
	int Num;
	float Computer;
	float Math;
	float English;
	float Total;
	float Ave;
};
//��� 
typedef struct Node
{
	struct Student st;//������
	struct node* pnext;//ָ����
}node, * pnode;//*node�ȼ���struct Student st,pnode�ȼ���struct Node *pNext 

//����
pnode Input();//¼��ѧ����Ϣ
void Show(pnode phead);//��ʾѧ����Ϣ
void Add(pnode phead);//����ѧ����Ϣ
void Delete(pnode phead);//ɾ��ѧ����Ϣ
void Change(pnode phead);//�޸�ѧ����Ϣ
void Search(pnode phead);//����ѧ����Ϣ
void Sort(pnode phead);//�ܷ����� 

void main()
{
	system("cls");
	menu();
	int Item;//�����������
	pnode phead = NULL;//����һ��ָ��
	while (1)
	{
		printf("��ѡ���������:");
		scanf("%d", &Item);
		system("cls");//����
		switch (Item)
		{
		case 1://¼��ѧ����Ϣ
		{
			menu();
			phead = Input();
		}
		break;
		case 2://��ʾѧ����Ϣ
		{
			menu();
			Show(phead);
		}
		break;
		case 3://����ѧ����Ϣ
		{
			menu();
			Add(phead);
		}
		break;
		case 4://ɾ��ѧ����Ϣ
		{
			menu();
			Delete(phead);
		}
		break;
		case 5://�޸�ѧ����Ϣ
		{
			menu();
			Change(phead);
		}
		break;
		case 6://����ѧ����Ϣ
		{
			menu();
			Search(phead);
		}
		break;
		case 7://�ܷ�����
		{
			menu();
			Sort(phead);
			Show(phead);
		}
		break;
		default:
			break;
		}
	}
	system("pause");
}
//¼��ѧ����Ϣ
pnode Input()
{
	int num;//ѧ��������
	node stu;//ѧ���ṹ
	pnode phead = (pnode)malloc(sizeof(node));//����һ��ͷ��㲢��Ϊͷ�������ڴ�
	//�ж��ڴ��Ƿ�Ϊ��
	if (NULL == phead)
	{
		printf("�ڴ����ʧ��,������ֹ!\n");
		exit(-1);
	}
	pnode ptail = phead;//����һ��ָ��ͷ����ָ��
	ptail->pnext = NULL;//���ָ����
	printf("������ѧ��������:");
	scanf("%d", &num);
	int i;
	for (i = 0; i < num; i++)
	{
		printf("�������%d��ѧ��������:", i + 1);
		scanf("%s", stu.st.Name);
		printf("�������%d��ѧ����ѧ��:", i + 1);
		scanf("%d", &stu.st.Num);
		printf("�������%d��ѧ���ļ�����ɼ�:", i + 1);
		scanf("%f", &stu.st.Computer);
		printf("�������%d��ѧ���ĸ����ɼ�:", i + 1);
		scanf("%f", &stu.st.Math);
		printf("�������%d��ѧ���Ĵ�Ӣ�ɼ�:", i + 1);
		scanf("%f", &stu.st.English);
		stu.st.Total = stu.st.Computer + stu.st.Math + stu.st.English;//�����ܷ�
		stu.st.Ave = stu.st.Total / 3.0f;//����ƽ����
		pnode pnew = (pnode)malloc(sizeof(node));//Ϊ�½ڵ�����ڴ�
		//�ж��ڴ��Ƿ�Ϊ��
		if (NULL == pnew)
		{
			printf("�ڴ����ʧ��,������ֹ!\n");
			exit(-1);
		}
		pnew->st = stu.st;//��ʼ������������
		ptail->pnext = pnew;//���½��ҵ��Ͻ���
		pnew->pnext = NULL;//����½���ָ����
		ptail = pnew;//��ptail�Ƶ��½����
	}
	return phead;
}
//��ʾѧ����Ϣ
void Show(pnode phead)
{
	//����һ��ָ�����ڱ���ѧ����Ϣ
	pnode p = phead->pnext;
	printf("����  ѧ�� ����� ����  ��Ӣ �ܷ� ƽ����\n");
	while (NULL != p)
	{
		printf("%s    %d    %g    %g    %g   %g    %g\n", p->st.Name, p->st.Num, p->st.Computer, p->st.Math, p->st.English, p->st.Total, p->st.Ave);
		p = p->pnext;
	}
}
//����ѧ����Ϣ
void Add(pnode phead)
{
	pnode p = phead;
	int i = 0;
	struct Student stu;//ѧ���ṹ�� 
	int loc;//�������λ��
	printf("���������ѧ����λ��:");
	scanf("%d", &loc);
	while (NULL != p && i < loc - 1)
	{
		p = p->pnext;
		i++;
	}
	if (NULL == p || i > loc)
	{
		printf("�������λ�ò�����!\n");
		return;
	}
	printf("�㽫�ڵ�%d��ѧ���������һ��ѧ��\n", loc - 1);
	printf("�������%d��ѧ��������:", loc);
	scanf("%s", stu.Name);
	printf("�������%d��ѧ����ѧ��:", loc);
	scanf("%d", &stu.Num);
	printf("�������%d��ѧ���ļ�����ɼ�:", loc);
	scanf("%f", &stu.Computer);
	printf("�������%d��ѧ���ĸ����ɼ�:", loc);
	scanf("%f", &stu.Math);
	printf("�������%d��ѧ����Ӣ��ɼ�:", loc);
	scanf("%f", &stu.English);
	stu.Total = stu.Computer + stu.Math + stu.English;//�����ܷ�
	stu.Ave = stu.Total / 3.0f;//����ƽ����
	pnode pnew = (pnode)malloc(sizeof(node));
	if (NULL == pnew)
	{
		printf("��̬�ڴ����ʧ��,������ֹ!\n");
		exit(-1);
	}
	pnew->st = stu;
	pnode q = p->pnext;
	p->pnext = pnew;
	pnew->pnext = q;
}
//ɾ��ѧ����Ϣ
void Delete(pnode pHead)
{
	pnode p = pHead;
	int i = 0;
	int loc;
	printf("����������Ҫɾ����ѧ���ı��:");
	scanf("%d", &loc);
	while (NULL != p->pnext && i < loc - 1)
	{
		p = p->pnext;
		i++;
	}
	if (NULL == p->pnext || i > loc - 1)
	{
		printf("û�ҵ���Ҫɾ����ѧ���ı��!\n");
		return;
	}
	pnode q = p->pnext;
	p->pnext = q->pnext;
	free(q);
	q == NULL;
	printf("���Ѿ��ɹ�ɾ���˵�%d��ѧ������Ϣ!\n", loc);
}
//�޸�ѧ����Ϣ
void Change(pnode phead)
{
	char Name[10];
	printf("����������Ҫ�޸ĵ�ѧ��������:");
	scanf("%s", &Name);
	pnode p = phead->pnext;//����һ��ָ�����ڱ���ѧ����Ϣ
	while (NULL != p)
	{
		if (0 == strcmp(Name, p->st.Name))
		{
			printf("����  ѧ�� ����� ����  ��Ӣ �ܷ� ƽ����\n");
			printf("�޸�ǰ��ѧ����Ϣ!\n");
			printf("%s    %d    %g    %g    %g   %g    %g\n", p->st.Name, p->st.Num, p->st.Computer, p->st.Math, p->st.English, p->st.Total, p->st.Ave);
			system("pause");
			system("cls");//����
			printf("�������µ�ѧ������:");
			scanf("%s", p->st.Name);
			printf("�������µ�ѧ��ѧ��:");
			scanf("%d", &p->st.Num);
			printf("�������µ�ѧ���ļ�����ɼ�:");
			scanf("%f", &p->st.Computer);
			printf("�������µ�ѧ���ĸ����ɼ�:");
			scanf("%f", &p->st.Math);
			printf("�������µ�ѧ���Ĵ�Ӣ�ɼ�:");
			scanf("%f", &p->st.English);
			p->st.Total = p->st.Computer + p->st.Math + p->st.English;//�����ܷ�
			p->st.Ave = p->st.Total / 3.0f;//����ƽ����
			break;
		}
		p = p->pnext;
	}
}
//����ѧ����Ϣ
void Search(pnode pHead)
{
	char Name[10];
	printf("����������Ҫ���ҵ�ѧ��������:");
	scanf("%s", Name);
	pnode p = pHead->pnext;
	printf("����  ѧ�� ����� ����  ��Ӣ �ܷ� ƽ����\n");
	while (NULL != p)
	{
		if (0 == strcmp(Name, p->st.Name))
		{
			printf("%s    %d    %g    %g    %g   %g    %g\n", p->st.Name, p->st.Num, p->st.Computer, p->st.Math, p->st.English, p->st.Total, p->st.Ave);
		}
		p = p->pnext;
	}
}
//�ܷ�����
void Sort(pnode phead)
{
	pnode p, q;//��������ָ��
	node temp;
	for (p = phead->pnext; NULL != p; p = p->pnext)
	{
		for (q = p->pnext; NULL != q; q = q->pnext)
		{
			if (p->st.Total < q->st.Total)//��ǰһ��ѧ�����ܷ�С�ں�һ��ѧ�����ܷ�ʱ
			{
				temp.st = p->st;//����ѧ����λ��
				p->st = q->st;
				q->st = temp.st;
			}
		}
	}
}
