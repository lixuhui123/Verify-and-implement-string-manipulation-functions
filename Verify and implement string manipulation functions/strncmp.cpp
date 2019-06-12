#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define M 30
#define N 10
//ÊµÏÖstrncmp
int  my_strncmp(char* str1, char* str2, int a, int len2)
{
	int i = 0;
	for (i = 0; i < a; i++)
	{
		if (*(str1 + i) > *(str2 + i))
		{
			return 1;
		}
		else if (*(str1 + i) == *(str2 + i))
		{
			continue;
		}
		else if (*(str1 + i) < *(str2 + i))
		{
			return -1;
		}
		
    }
        if (i == a)
		{
		return 0;
		}

}
int main()
{
	char str1[M] = "32134123";
	char str2[N] = "32132";
	int a = 3;
	scanf("%d", &a);
	/*int c=strncmp(str1, str2, 55);
	printf("%d ", c);*/
	int jie=my_strncmp(str1, str2, a, strlen(str2));
	printf("%d ", jie);
	system("pause");
	return 0;
}
