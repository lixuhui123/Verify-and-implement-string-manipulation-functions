#include <stdio.h>
#include<stdlib.h>
#include <string.h>
//模拟实现strlen
int my_strlen(char *str)
{
	/*int count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return count;*/
	/*if ('\0' == *str)
		return 0;
	else
		return 1+my_strlen(str+1);*///返回了7个1之和，出栈计算，不然会返回0
	/*char *p = str;
	while (*p)
	{
		p++;
	}
	return p - str;*/
}
int main()
{
	char str[] = "lixuhui";
	int num=my_strlen(str);
	printf("%d ", num);
	system("pause");
	return 0;
}