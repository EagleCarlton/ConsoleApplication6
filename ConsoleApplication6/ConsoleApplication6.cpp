// ConsoleApplication6.cpp : 定义控制台应用程序的入口点。
//筛法求质数

#include "stdafx.h"
#include "stdio.h"
#include "stdlib.h"
void sieve(int n);
int main()
{
	sieve(18);
    return 0;
}
void sieve(int n)
{
	int i, j, *s = (int*)malloc((n + 1) * sizeof(int));
	if (s == NULL)
	{
		printf("allocation failuere");
		exit(1);
	}
	for (i = 0; i < n; ++i)
		s[i] = 0;
	s[0] = s[1] = 1;
	for (i = 2; i < n + 1; ++i)
		if (s[i] == 0)
			for (j = 2 * i; j < n + 1; j = j + i)
				s[j] = 1;
	for (i = 0; i < n; ++i)
		if (s[i] == 0)
			printf("%d\t", i);
	free(s);
}
