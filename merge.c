#include <stdio.h>
void merge(int [], int beg, int mid, int end);
void merge_sort(int arr[], int beg, int end);
int main()
{
	int a[]={34,65,3,76,44,90,43,21,54,75};
	int n=sizeof(a)/sizeof(int);
	int i;
	printf("unsorted: ");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	printf("\nsorted:");
	merge(a,n);
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
	return 0;
}

void merge(int arr[], int beg, int mid, int end)
{
	int i=beg, j=mid+1, k=beg, temp[size],l;
	while((i<=mid) && (j<=end))
	{
		 if(arr[i] <= arr[j])
		 {
			temp[k] = arr[i];
			i++;
		 }
		 else
		 {
			temp[k] = arr[j];
			j++;
		 }
		k++;
	}
		while(j<=end)
		 {
			temp[k] = arr[j];
			j++;	
			k++;
		 }

		 while(i<=mid)
		 {
			temp[k] = arr[i];
			i++;
			k++;
		 }
	
	for(l=beg;l<k;l++)
	arr[l] = temp[l];
}	


void merge_sort(int arr[], int beg, int end)
{
	int mid;
	if(beg<end)
	{
		mid = (beg+end)/2;
		merge_sort(arr,beg, mid);
		merge_sort(arr, mid+1, end);
		merge(arr, beg, mid, end);
	}
}



