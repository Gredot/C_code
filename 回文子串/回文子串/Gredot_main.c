#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
						//  给你一个字符串s， 找到s中最长的回文子串


char* longestPalindrome(char* s) 
{
	int i, j = 0, k = 0, max = 0, s_len, target[2] = { 0 };
	s_len = strlen(s);
	if (s_len < 3) {
		if (s[0] == s[s_len - 1])
			return s;
		else 
			return s + s_len - 1;
	}
	for (i = 0; i < s_len - 1; i++)
	{
		if (*(s + i) == *(s + i + 1)) 
		{	//even
			j = 0;
			while (i - j >= 0 && i + j + 1 < s_len)
			{
				if (*(s + i - j) != *(s + i + 1 + j))
					break;
					j++;
			}
			if (j * 2 > max)
			{
				max = j * 2;
				target[0] = i - (j - 1);
				target[1] = i + j; //s+i+1+(j-1)
			}
		}
		if (*(s + i) == *(s + i + 2))
		{   //odd
			j = 0;
			while (i - j >= 0 && i + j + 2 < s_len)
			{
				if (*(s + i - j) != *(s + i + 2 + j)) break;
				j++;
			}
			if (j * 2 + 1 > max)
			{
				max = j * 2 + 1;
				target[0] = i - (j - 1);
				target[1] = i + 2 + (j - 1);
			}
		}
	}
	s[target[1] + 1] = 0;
	return s + target[0];
}


int main ()	
{
	char s[1000] = { 0 };
	gets(s);
	puts(longestPalindrome(s));
	return 0;
}