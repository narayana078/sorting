#include<stdio.h>

void bubble(int [],int);
int main()
{
	int a[]={34,65,3,76,44,90,43,21,54,75};
	int n=sizeof(a)/sizeof(int);
	int i;
	printf("unsorted: ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nsorted:");
	bubble(a,n);
        for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}

void bubble(int arr[],int n)
{
	int i,j,temp;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp=arr[j+1];
				arr[j+1]=arr[j];
				arr[j]=temp;
			}
		}

	}
}
