#include<stdio.h>
int partition(int [],int,int);
void quick(int a[], int beg, int end);
int main()
{
	int a[]={34,65,3,76,44,90,43,21,54,75};
	int n=sizeof(a)/sizeof(int);
	int i;
	printf("unsorted: ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nsorted:");
	quick(a,0,n-1);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}

int partition(int a[], int lb, int ub)
{

	int pivot,start,end,temp;
	pivot=a[lb];
	start=lb;
	end=ub;
	while(start<end)
	{
		while(a[start]<=pivot)
		{
			start++;
		}
		while(a[end]>pivot)
		{
			end--;
		}
		if(start<end)
		{
			temp=a[start];
			a[start]=a[end];
			a[end]=temp;
		}
	}	
	temp=a[lb];
	a[lb]=a[end];
	a[end]=temp;
	return end;
}
void quick(int a[], int beg, int end)
{	
	int loc;
	if(beg<end)
	{
		 loc = partition(a, beg, end);
		quick(a, beg, loc-1);
		quick(a, loc+1, end);
	}
}
