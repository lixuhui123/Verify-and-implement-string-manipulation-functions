#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <errno.h>
int main1()
{
	/*char a1[30] = "my name is lixuhui";
	char a2[20] = "hellow world";
	strncpy(a1,a2,5);
	printf("%s", a1);*///hellome is lixuhui
	//char a1[30] = "my name is lixuhui";
	//char a2[20] = "hellow world";
	//strncat(a1, a2, 5);
	//printf("%s", a1);//my name is lixuhuihello
	/*char a1[30] = "my name is lixuhui";
	char a2[20] = "hellow world";
	int ret=strncmp(a1, a2, 5);
	printf("%d", ret);*///1
	/*char str[] = "this is a simple string";
	char *pch = NULL;
	pch = strstr(str, "simple");
	strncpy(pch, "sample", 7);
	puts(str);*///this is a sample 当要拷贝的字符串的长度不够时函数会在后面补0
	/*FILE * pFile;
	pFile = fopen("unexist.ent", "r");
	if (pFile == NULL)
		printf("Error opening file unexist.ent: %s\n", strerror(errno));*/
	//errno: Last error number
	//Error opening file unexist.ent: No such file or directory
	//printf("■");

	system("pause");
    return 0;

}