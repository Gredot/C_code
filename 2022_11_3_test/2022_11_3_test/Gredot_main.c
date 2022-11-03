#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main ()
//{
//	char a[2][6] = { "Sun","Moon" };
//	int i, j, len[2];
//	for (i = 0; i < 2; i++)
//	{
//		for(j = 0;j<6;j++)
//			if (a[i][j] == '\0')
//			{
//				len[i] = j;
//				break;
//			}
//		printf("%6s: %d\n", a[i], len[i]);
//	}
//	//二维字符数组中调用一个维度 对该行元素进行整体的输入输出


	//char s1[10] = "abc", s2[10] = "xyz",s3[10] = "123";
	//strcpy(s3, s1);
	//printf("%s\n", s3);
	//strcat(s3, s2);
	//printf("%s\n", s3);
	//if(strcmp(s1,s2)>0)
	//	printf("%s\n", s1);
	//else
	//	printf("%s\n", s2);

//	return 0;
//}

//
//#include<stdio.h>
//int main()
//{
//	int score[10];
//	
//	int max,min,sum = 0;
//	for (int i = 0; i < 10; i++)
//		scanf("%d", &score[i]);
//	max = min = score[0];
//	for (int i = 0; i < 10; i++)
//	{
//		sum += score[i];
//		if (score[i] > max)
//			max = score[i];
//		if (score[i] < min)
//			min = score[i];
//	}
//	printf("最大值为：%d\n最小值为：%d\n平均值为：%.2f", max, min, sum / 10.0);
//
//	return 0;
//}
//
//#include<stdio.h>
//int main()
//{
//	int date[3][4] = { 1,2,3,4,9,8,7,6,-10,10,-5,2};
//	int i, j,max= date[0][0],i1,j1;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			if (date[i][j] > max)
//			{
//				max = date[i][j];
//				i1 = i; j1 = j;
//			}
//		}
//	}
//	printf("最大值为%d，行下标为：%d，列下标为：%d",max, i1, j1);
//	return 0;
//}


//#include<stdio.h>
//int main()
//{
//	int i, j, M = 0, C = 0, D = 0, S = 0;
//	int s[5][3];
//	for (i = 0; i < 5; i++)
//		for (j = 0; j < 3; j++)
//		{	
//			scanf("%d", &s[i][j]);
//			S += s[i][j];
//			if (0 == j)M += s[i][j];
//			if (1 == j)C += s[i][j];
//			if (2 == j)D += s[i][j];
//		}
//	
//	printf("Math,C,Datebase以及所有成绩的平均分分别为：%.2f %.2f %.2f %.2f ", M/5.0, C/5.0, D/5.0, S/15.0);
//
//
//	return 0;
//}