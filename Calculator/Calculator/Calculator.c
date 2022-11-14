#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<windows.h>
#include<math.h>

void Initmenu(void)
{
	printf("                                                  \n");
	printf("                                                  \n");
	printf("          |------------------------------------------|\n");
	printf("          | 计算器                         —  □  X |\n");
	printf("          |------------------------------------------|\n");
	printf("          |                                          |\n");
	printf("          |                                          |\n");
	printf("          |                                          |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    %%     |   CE     |    C    |     X    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |  1/x(2)  |   x!     |  √x(1)  |   ÷    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    7     |    8     |    9     |    ×   |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    4     |    5     |    6     |    -    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    1     |    2     |    3     |    +    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |  exit(0) |    0     |    .     |    =    |\n");
	printf("          |------------------------------------------|\n");
	printf("                                                  \n");
	printf("                                                  \n");
}

void DdobleResultmenu(double x,char ch,double y,double result )
{
	printf("                                                  \n");
	printf("                                                  \n");
	printf("          |------------------------------------------|\n");
	printf("          | 计算器                         —  □  X |\n");
	printf("          |------------------------------------------|\n");
	printf("          |                                          |\n");
	printf("          |%lf%c%lf=%lf    \n",x,ch,y,result);
	printf("          |                                          |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    %%     |    CE    |    C     |    X    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |  1/x(2)  |   x!     |  √x(√) |   ÷    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    7     |    8     |    9     |    ×   |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    4     |    5     |    6     |    -    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    1     |    2     |    3     |    +    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |  exit(0) |    0     |    .     |    =    |\n");
	printf("          |------------------------------------------|\n");
	printf("                                                      \n");
	printf("                                                      \n");
}

void SingleResultmenu(double x, char ch,double result)
{
	printf("                                                      \n");
	printf("                                                      \n");
	printf("          |------------------------------------------|\n");
	printf("          | 计算器                         —  □  X |\n");
	printf("          |------------------------------------------|\n");
	printf("          |                                          |\n");
	printf("          |%lf %c = %lf                     \n", x, ch,result);
	printf("          |                                          |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    %%     |  CE      |    C     |    X    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |  1/x(2)  |   x!     | √x(√)  |   ÷    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    7     |    8     |    9     |    ×   |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    4     |    5     |    6     |    -    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |    1     |    2     |    3     |    +    |\n");
	printf("          |------------------------------------------|\n");
	printf("          |  exit(E) |    0     |    .     |    =    |\n");
	printf("          |------------------------------------------|\n");
	printf("                                                      \n");
	printf("                                                      \n");
}

size_t fac(int x)
{
	if (x == 0)
		return (1);
	else
		return (x * fac(x - 1));
}

double Sum(double x, double y)
{
	return (x + y);
}

double Sub(double x, double y)
{
	return (x - y);
}

double Mul(double x, double y)
{
	return (x * y);
}

double Div(double x, double y)
{
	return (x / y);
}

double Sur(double x, double y)
{
	return (double)((int)(x) % (int)(y));
}

int main ()
{
	Initmenu();
	double x = 0, y = 0,result = 0;
	char ch;
	int i = 1;
	while (i)
	{
		int in;
		printf("请输入操作数个数:>(1/2)\n");
		scanf("%d", &in);
		if (2 == in)
		{
			printf("请输入两个操作数\n");
			scanf("%lf%lf", &x, &y);
			getchar();
			printf("请输入运算符\n");
			scanf("%c", &ch);
			switch (ch)
			{
			case '+':
				result = Sum(x, y);
				break;
			case '-':
				result = Sub(x, y);
				break;
			case '*':
				result = Mul(x, y);
				break;
			case '/':
				result = Div(x, y);
				break;
			case '%':
				result = Sur(x, y);
				break;
			default:
				printf("运算符输入错误！");
				break;
			}
			DdobleResultmenu(x, ch,y, result);
			printf("是否继续：>（1/0）");
			scanf("%d", &i);
			if (i)
			{
				system("cls");
				Initmenu();
			}
		}
		else
		{
			printf("请输入一个操作数\n");
			scanf("%lf", &x);
			getchar();
			printf("请输入运算符\n");
			scanf("%c", &ch);
			switch (ch)
			{
			case '!':
				result = fac(x);
				break;
			case '2':
				result = 1 / x;
				break;
			case '√':
				result = sqrt(x);
				break;
			default:
				printf("运算符输入错误！");
				break;
			}
				SingleResultmenu(x, ch, result);
				printf("是否继续：>（1/0）");
				scanf("%d", &i);
				if (i)
				{
					system("cls");
					Initmenu();
				}
		}
	}
	return 0;
}
