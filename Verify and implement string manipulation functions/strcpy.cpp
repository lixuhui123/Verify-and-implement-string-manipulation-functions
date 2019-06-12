////模拟实现strcpy,附带动态开辟内存
//#include <stdio.h>
//#include<stdlib.h>
//#include <string.h>
//#include<assert.h>
//char* my_strlen(char *str1, char *str2)
//{
//	char *p = str1;
//	char *temp = NULL;
//	assert(NULL != str1);
//	assert(NULL != str2);
//	while (*(++str2))
//	{
//		if (*(++str1))
//			temp = (char*)realloc(str1, strlen(str2)*sizeof(char)+20);
//		if (NULL != temp)
//		{
//			str1 = temp;
//		}
//		*str1 = *str2;
//	}
//	return p;
//	//puts(temp);
//}
//int main20()
//{
//	char str1[15] = "lixuhui";
//	char str2[] = "123456789123456789000";
//	char* p=my_strlen(str1, str2);
//	puts(p);
//	system("pause");
//	return 0;
//}
