#include<stdio.h>
struct student{
	int rno;
	char name[30];
	float avg;
}s1,s2;
int main()
{
	struct student s3={101,"ramu",78.95};
	s2=s3;
	printf("%d\n",s1.rno);
	printf("%s\n",s1.name);
	printf("%f\n",s1.avg);
	return 0;
}


