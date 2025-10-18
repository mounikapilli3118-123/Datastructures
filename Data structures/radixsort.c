#include<stdio.h>
void radixsort(int a[],int n)
{
  int max,digits=0,i,j,k,steps,div=1;
  int bucket[10][n],count[10],pos;
  max=a[0];
  for(i=0;i<n;i++)
  {
  	if(a[i]>max)
  	max=a[i];
	  }
	  while(max>0)
	  {
	  	digits++;
	max=max/10;
		  }	
	for(steps=1;steps<=digits;steps++)
	{
		for(i=0;i<10;i++)
		{
			count[i]=0;
		}
		for(i=0;i<10;i++)
		{
			pos=(a[i]/div)%10;
			bucket[pos][count[pos]]=a[i];
			count[pos]++;
		}
		k=0;
		for(i=0;i<n;i++)
		{
			for(j=0;j<count[i];j++)
			{
				a[k]=bucket[i][j];
				k++;
			}
		}
		div=div*10;
	}
}
    int main()
    {
    	int arr[50],n,i;
    	printf("Enter n value");
    	scanf("%d",&n);
    	printf("Enter %d values",n);
    	for(i=0;i<n;i++)
    	{
    		scanf("%d",&n);	
		}
		radixsort(arr,n);
		printf("\n sorted array is..");
		for(i=0;i<n;i++)
		{
			printf("%d",arr[i]);
		}
		return 0;
    
	}

