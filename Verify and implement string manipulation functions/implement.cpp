#include <stdio.h>
#include<stdlib.h>
#include <string.h>
//ģ��ʵ��strlen
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
		return 1+my_strlen(str+1);*///������7��1֮�ͣ���ջ���㣬��Ȼ�᷵��0
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