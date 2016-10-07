#include <stdio.h>
typedef struct student
{
	char *a;
}stu;
int main()
{
	stu s;
	s.a ="hi";
	printf("%s\n",s.a );
}s