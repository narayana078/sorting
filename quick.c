#include<stdio.h>
int partition(int [],int,int);
void quick(int a[], int beg, int end);
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
