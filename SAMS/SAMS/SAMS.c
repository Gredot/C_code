#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
  
void menu(void)
{
	printf("\n\n");
	printf("\t\t\t============================================\n");
	printf("\t\t\t|                                          |\n");
	printf("\t\t\t|          欢迎进入学生成绩管理系统        |\n");
	printf("\t\t\t|                                          |\n");
	printf("\t\t\t|==========================================|\n");
	printf("\t\t\t|            请选择要操作的命令            |\n");
	printf("\t\t\t|------------------------------------------|\n");
	printf("\t\t\t|                                          |\n");
	printf("\t\t\t|              1.录入学生信息              |\n");
	printf("\t\t\t|              2.显示学生信息              |\n");
	printf("\t\t\t|              3.增加学生信息              |\n");
	printf("\t\t\t|              4.删除学生信息              |\n");
	printf("\t\t\t|              5.修改学生信息              |\n");
	printf("\t\t\t|              6.查找学生信息              |\n");
	printf("\t\t\t|              7.按总分排序                |\n");
	printf("\t\t\t|                                          |\n");
	printf("\t\t\t============================================\n");
}
//学生结构体 
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
//结点 
typedef struct Node
{
	struct Student st;//数据域
	struct node* pnext;//指针域
}node, * pnode;//*node等价于struct Student st,pnode等价于struct Node *pNext 

//函数
pnode Input();//录入学生信息
void Show(pnode phead);//显示学生信息
void Add(pnode phead);//增加学生信息
void Delete(pnode phead);//删除学生信息
void Change(pnode phead);//修改学生信息
void Search(pnode phead);//查找学生信息
void Sort(pnode phead);//总分排序 

void main()
{
	system("cls");
	menu();
	int Item;//保存操作命令
	pnode phead = NULL;//定义一个指针
	while (1)
	{
		printf("请选择操作命令:");
		scanf("%d", &Item);
		system("cls");//清屏
		switch (Item)
		{
		case 1://录入学生信息
		{
			menu();
			phead = Input();
		}
		break;
		case 2://显示学生信息
		{
			menu();
			Show(phead);
		}
		break;
		case 3://增加学生信息
		{
			menu();
			Add(phead);
		}
		break;
		case 4://删除学生信息
		{
			menu();
			Delete(phead);
		}
		break;
		case 5://修改学生信息
		{
			menu();
			Change(phead);
		}
		break;
		case 6://查找学生信息
		{
			menu();
			Search(phead);
		}
		break;
		case 7://总分排序
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
//录入学生信息
pnode Input()
{
	int num;//学生的人数
	node stu;//学生结构
	pnode phead = (pnode)malloc(sizeof(node));//定义一个头结点并且为头结点分配内存
	//判断内存是否为空
	if (NULL == phead)
	{
		printf("内存分配失败,程序终止!\n");
		exit(-1);
	}
	pnode ptail = phead;//定义一个指向头结点的指针
	ptail->pnext = NULL;//清空指针域
	printf("请输入学生的人数:");
	scanf("%d", &num);
	int i;
	for (i = 0; i < num; i++)
	{
		printf("请输入第%d个学生的姓名:", i + 1);
		scanf("%s", stu.st.Name);
		printf("请输入第%d个学生的学号:", i + 1);
		scanf("%d", &stu.st.Num);
		printf("请输入第%d个学生的计算机成绩:", i + 1);
		scanf("%f", &stu.st.Computer);
		printf("请输入第%d个学生的高数成绩:", i + 1);
		scanf("%f", &stu.st.Math);
		printf("请输入第%d个学生的大英成绩:", i + 1);
		scanf("%f", &stu.st.English);
		stu.st.Total = stu.st.Computer + stu.st.Math + stu.st.English;//计算总分
		stu.st.Ave = stu.st.Total / 3.0f;//计算平均分
		pnode pnew = (pnode)malloc(sizeof(node));//为新节点分配内存
		//判断内存是否为空
		if (NULL == pnew)
		{
			printf("内存分配失败,程序终止!\n");
			exit(-1);
		}
		pnew->st = stu.st;//初始化结点的数据域
		ptail->pnext = pnew;//将新结点挂到老结点后
		pnew->pnext = NULL;//清空新结点的指针域
		ptail = pnew;//将ptail移到新结点上
	}
	return phead;
}
//显示学生信息
void Show(pnode phead)
{
	//定义一个指针用于遍历学生信息
	pnode p = phead->pnext;
	printf("姓名  学号 计算机 高数  大英 总分 平均分\n");
	while (NULL != p)
	{
		printf("%s    %d    %g    %g    %g   %g    %g\n", p->st.Name, p->st.Num, p->st.Computer, p->st.Math, p->st.English, p->st.Total, p->st.Ave);
		p = p->pnext;
	}
}
//增加学生信息
void Add(pnode phead)
{
	pnode p = phead;
	int i = 0;
	struct Student stu;//学生结构体 
	int loc;//插入结点的位置
	printf("请输入插入学生的位置:");
	scanf("%d", &loc);
	while (NULL != p && i < loc - 1)
	{
		p = p->pnext;
		i++;
	}
	if (NULL == p || i > loc)
	{
		printf("插入结点的位置不存在!\n");
		return;
	}
	printf("你将在第%d个学生后面插入一个学生\n", loc - 1);
	printf("请输入第%d个学生的姓名:", loc);
	scanf("%s", stu.Name);
	printf("请输入第%d个学生的学号:", loc);
	scanf("%d", &stu.Num);
	printf("请输入第%d个学生的计算机成绩:", loc);
	scanf("%f", &stu.Computer);
	printf("请输入第%d个学生的高数成绩:", loc);
	scanf("%f", &stu.Math);
	printf("请输入第%d个学生的英语成绩:", loc);
	scanf("%f", &stu.English);
	stu.Total = stu.Computer + stu.Math + stu.English;//计算总分
	stu.Ave = stu.Total / 3.0f;//计算平均分
	pnode pnew = (pnode)malloc(sizeof(node));
	if (NULL == pnew)
	{
		printf("动态内存分配失败,程序终止!\n");
		exit(-1);
	}
	pnew->st = stu;
	pnode q = p->pnext;
	p->pnext = pnew;
	pnew->pnext = q;
}
//删除学生信息
void Delete(pnode pHead)
{
	pnode p = pHead;
	int i = 0;
	int loc;
	printf("请输入你需要删除的学生的编号:");
	scanf("%d", &loc);
	while (NULL != p->pnext && i < loc - 1)
	{
		p = p->pnext;
		i++;
	}
	if (NULL == p->pnext || i > loc - 1)
	{
		printf("没找到需要删除的学生的编号!\n");
		return;
	}
	pnode q = p->pnext;
	p->pnext = q->pnext;
	free(q);
	q == NULL;
	printf("你已经成功删除了第%d个学生的信息!\n", loc);
}
//修改学生信息
void Change(pnode phead)
{
	char Name[10];
	printf("请输入你需要修改的学生的姓名:");
	scanf("%s", &Name);
	pnode p = phead->pnext;//定义一个指针用于遍历学生信息
	while (NULL != p)
	{
		if (0 == strcmp(Name, p->st.Name))
		{
			printf("姓名  学号 计算机 高数  大英 总分 平均分\n");
			printf("修改前的学生信息!\n");
			printf("%s    %d    %g    %g    %g   %g    %g\n", p->st.Name, p->st.Num, p->st.Computer, p->st.Math, p->st.English, p->st.Total, p->st.Ave);
			system("pause");
			system("cls");//清屏
			printf("请输入新的学生姓名:");
			scanf("%s", p->st.Name);
			printf("请输入新的学生学号:");
			scanf("%d", &p->st.Num);
			printf("请输入新的学生的计算机成绩:");
			scanf("%f", &p->st.Computer);
			printf("请输入新的学生的高数成绩:");
			scanf("%f", &p->st.Math);
			printf("请输入新的学生的大英成绩:");
			scanf("%f", &p->st.English);
			p->st.Total = p->st.Computer + p->st.Math + p->st.English;//计算总分
			p->st.Ave = p->st.Total / 3.0f;//计算平均分
			break;
		}
		p = p->pnext;
	}
}
//查找学生信息
void Search(pnode pHead)
{
	char Name[10];
	printf("请输入你需要查找的学生的姓名:");
	scanf("%s", Name);
	pnode p = pHead->pnext;
	printf("姓名  学号 计算机 高数  大英 总分 平均分\n");
	while (NULL != p)
	{
		if (0 == strcmp(Name, p->st.Name))
		{
			printf("%s    %d    %g    %g    %g   %g    %g\n", p->st.Name, p->st.Num, p->st.Computer, p->st.Math, p->st.English, p->st.Total, p->st.Ave);
		}
		p = p->pnext;
	}
}
//总分排序
void Sort(pnode phead)
{
	pnode p, q;//定义两个指针
	node temp;
	for (p = phead->pnext; NULL != p; p = p->pnext)
	{
		for (q = p->pnext; NULL != q; q = q->pnext)
		{
			if (p->st.Total < q->st.Total)//当前一个学生的总分小于后一个学生的总分时
			{
				temp.st = p->st;//交换学生的位置
				p->st = q->st;
				q->st = temp.st;
			}
		}
	}
}
