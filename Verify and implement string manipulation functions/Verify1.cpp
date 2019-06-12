/* memcpy example 
函数memcpy从source的位置开始向后复制num个字节的数据到destination的内存位置。
这个函数在遇到 '\0' 的时候并不会停下来。
如果source和destination有任何的重叠，复制的结果都是未定义的。*/
#include <stdio.h>
#include<stdlib.h>
#include <string.h>
struct {
	char name[40];
	int age;
} person, person_copy;
int main2()
{
	char myname[] = "Pierre de Fermat";
	memcpy(person.name, myname, strlen(myname));
	person.age = 46;
	
	memcpy(&person_copy, &person, sizeof(person));
	//person_copy: Pierre de Fermat, 46
	printf("person_copy: %s, %d \n", person_copy.name, person_copy.age);
	system("pause");
	return 0;
}