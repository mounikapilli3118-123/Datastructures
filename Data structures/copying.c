#include<stdio.h>
struct student
{
int rno;
char name[30];
float avg;
}s1,s2;
int main()
{
	struct student s3={101,"Raju",78.95};
	s2=s3;
	printf("\nEnter roll no,name and avg:\n");
	scanf("%d%s%%f",&s1.rno,&s1.name,&s1.avg);
	printf("%d\t%s\t%f\n",s3.rno,s3.name,s3.avg);
	printf("%d\t%s\t%f\n",s1.rno,s1.name,s1.avg);
	return 0;
}

