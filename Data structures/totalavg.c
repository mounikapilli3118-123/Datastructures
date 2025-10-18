#include<stdio.h>
struct student
{
	int rno;
	int T,M,S,E;
	float avg,total;
};
int main()
{
	struct student std[100];
	int n,i;
	printf("Enter no of students:\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n Enter roll no,t,m,s,e\n");
		scanf("%d%d%d%d",&std[i].rno,&std[i].T,&std[i].M,&std[i].S,&std[i].E);
	}
	printf("Rollno\telugu\tmaths\tscience\tenglish\n");
	for(i=0;i<n;i++)
	{
		printf("%d %d %d %d\n",std[i].rno,std[i].T,std[i].M,std[i].S,std[i].E);
		
	}
	printf("R0ll.no\ttotal\taverage");
	for(i=0;i<n;i++)
	{
		std[i].total=std[i].T+std[i].M+std[i].S+std[i].E;
		std[i].avg=std[i].total/4.0;
		printf("%d%f\t%f\t",std[i].total,std[i].avg);
	}
	return 0;
}

	

