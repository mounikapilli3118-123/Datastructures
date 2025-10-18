#include<stdio.h>
struct date{
  int dd;
  int mm;
  int yy;	
};
struct student
{
	char name[32];
	struct date dob;
	float avg;
};
int main()
{
	struct student s1={"Ramu",{15,12,2006},78.95};
	printf("Memory created=%d\n", size (s1));
	printf("%s\t%d_%d_%d\t%f\n",s1.name,s1.dob.dd,s1.dob.mm,s1.dob.yy,s1.avg);
}

	

