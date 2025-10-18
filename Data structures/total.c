#include<stdio.h>
struct student
{
	int rno;
	int m1,m2,m3,m4;
	float average,total;
};
  int main()
  {
struct student std[100];
int i,n;
scanf("%d",&n);
for(i=0;i<n;i++)
{
	printf("Enter roll no and 4 subject marks");
	scanf("%d%d%d%d%d",&std[i].rno,&std[i].m1,&std[i].m2,&std[i].m3,&std[i].m4);
}
for(i=0;i<n;i++)
{
  std[i].total=std[i].m1+std[i].m2+std[i].m3+std[i].m4;
  std[i].average=(float)(std[i].total/4);
printf("total=%f\naverage=%f\n",std[i].total,std[i].average);
}
   return 0;
}


