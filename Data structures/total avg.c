#include<stdio.h>
struct student{
	int rno;
	char name[30];
	float total,avg;
};
int main()
{
struct student std[100];
int n,i;
printf("enter n value");
scanf("%d",&n);
for(i=0;i<n;i++){
printf("rno,phy che,eng,math");
scanf("%d %d %d %d %d",&std[i].rno,&std[i].phy,&std[i].che,&std[i].eng,&std[i].math);
}
printf("enter total and avg");
for(i=0;i<n;i++)
std[i].total=std[i].m1+std[i].m2+std[i].m3+std[i].m4;
std[i].avg=(float)total/4;
printf("%d\t%s\t%f",std[i].rno,std[i].phy,std[i].che,std[i].eng,std[i].math);
}
return 0;
}
