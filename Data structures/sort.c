#include<stdio.h>
void mergesort(int a[],int left,int right,int mid)
{
	int temp[right-left+1];
	int i,j,k=0;
	i=left;
	j=mid+1;
	while(i<=mid&&j<=right)
	{
		if(a[i]<a[j])
		{
			temp[k]=a[i]; 
			i++;
		}
		else
		{
			temp[k]=a[j];
			j++;
		}
		k++;
	}
	while(i<=mid)
	{
		temp[k]=a[i];
		i++;
		k++;
	}
	while(j<=right)
	{
		temp[k]=a[j];
		j++;
		k++;
	}
	for(i=left,k=0,i<=right;i++,k++)
	{
		a[i]=temp[k];
	}
	void mergesort(int a[],int left,int right)
	{
		int mid;
		if(left<right)
		{
		mid=left+right/2;
		mergesort=(a,left,mid);
		mergesort=(a,mid+1,right);
		mergesort=(a,left,mid,right);	
	}
}
  int main()
  {
  	int arr[25],n,i;
  	printf("enter n value");
  	scanf("%d",&n);
  	printf("enter %d values");
  	for(i=0;i<n;i++)
  	{
  		scanf("%d",&arr[i]);
	  }
	  mergesort=(arr,0,n-1);
	  printf("sorted array is\n");
	  for(i=0;i<n;i++)
	  {
	  	printf("%d",arr[i]);
	  }
  }
  return 0;
}
