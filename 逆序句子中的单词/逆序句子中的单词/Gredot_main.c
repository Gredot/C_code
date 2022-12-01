#include<stdio.h>
#include<string.h>
void reverse(char* left, char* right)
{
	while (left < right)
	{
		char t = *left;
		*left = *right;
		*right = t;
		left++; right--;
	}
}
int main()
{
	char ch[100];
	gets(ch);
	char* temp = ch;
	char* start = temp;
	char* end = temp;
	while (1)
	{
		while (*end != ' ' && *end != '\0')
		{
			end++;
		}
		reverse(start, end - 1);
		start = end + 1;
		if (*end == ' ')
			end++;
		else if (*end == '\0')
			break;
	}
	int len = strlen(ch);
	char* right = ch + len - 1;
	reverse(ch, right);
	printf("%s", ch);
	return 0;
}
