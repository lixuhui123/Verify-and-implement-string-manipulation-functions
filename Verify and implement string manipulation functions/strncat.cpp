//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
//#define M 30
//#define N 10
////实现strncpy
//int my_strncat(char* str1, char* str2,int a,int len2)
//{
//
//	int count = 0;
//	while (*(str1++))
//	{
//		++count;//8，刚好是\0
//	}
//	str1--;
//	//printf("%d", count);
//	if ((M - count) > a)
//	{
//		while (a)
//		{
//			*(str1++) = *(str2++);
//			//printf("%c", *(str2));
//			a--;
//		}
//		return 1;
//	}
//	if ((M - count) < a)
//	{
//		return 0;
//	}
//	
//}
//int main()
//{
//	char str1[M] = "xudfghkw";
//	char str2[N] = "32132";
//	int a = 3;
//	scanf("%d", &a);
//	//strncat(str1, str2, 22);
//	int jie=my_strncat(str1, str2,a,strlen(str2));
//	if (jie)
//	
//		puts(str1);
//	}
//	else
//	{
//		printf("目标字符串空间不足sorry\n");
//	}
//    system("pause");
//	return 0;
//}
