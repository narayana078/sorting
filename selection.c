#include<stdio.h>
void selection(int [],int);
int main()
{
	int a[]={34,65,3,76,44,90,43,21,54,75};
	int n=sizeof(a)/sizeof(int);
	int i;
	printf("unsorted: ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nsorted:");
	selection(a,n);
        for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}

void selection(int arr[],int n)
{
	int i,j,temp,p;
	for(i=0;i<n;i++)
	{
		p=i;
	for(j=i+1;j<n;j++)
	{	if(arr[j]<arr[p])
			p=j;
	}
		temp=arr[p];
		arr[p]=arr[i];
		arr[i]=temp;
	}
}
