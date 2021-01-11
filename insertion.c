#include<stdio.h>
void insertion(int [],int);
int main()
{
	int a[]={34,65,3,76,44,90,43,21,54,75};
	int n=sizeof(a)/sizeof(int);
	int i;
	printf("unsorted: ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nsorted:");
	insertion(a,n);
        for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}

void insertion(int arr[],int n)
{
	int i,j,temp,p;
	for(i=1;i<n;i++)
	{
		temp=arr[i];
		j=i-1;
	while((temp<arr[j])&&(j>=0))
	{
		arr[j+1]=arr[j];
		j--;
	}
	arr[j+1]=temp;
	}
}
