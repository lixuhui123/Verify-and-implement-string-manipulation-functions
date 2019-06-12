//#include<stdio.h>
//#include<stdlib.h>
//#include<string.h>
////实现strncpy
//void my_strncpy(char* str1, char* str2,int a,int len)
//{
//	if (a <= len)
//	{
//		for (int i = 0; i < a; ++i)
//		{
//			*(str1++) = *(str2++);
//		}
//
//	}
//	else//为了加'\0'
//	{
//		for (int i = 0; i <= len; ++i)
//		{
//			*(str1++) = *(str2++);
//		}
//		*(str1 + 1) = '\0';
//	}
//	
//}
//int main()
//{
//	char str1[30] = "xuhuiasdfghjkl";
//	char str2[10] = "321321";
//	int a=3;
//	scanf("%d", &a);
//	//strncpy(str1, str2, 8);
//	my_strncpy(str1, str2,a,strlen(str2));
//	puts(str1);
//    system("pause");
//	return 0;
//}
