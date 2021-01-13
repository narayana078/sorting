#ifndef __HEADER__
#include"header.h"
#endif
void selection(int arr[],int n)
{
	gettimeofday(&tv1, NULL);
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
        gettimeofday(&tv2, NULL);
        time = (double) (tv2.tv_usec - tv1.tv_usec)/1000000+ (double) (tv2.tv_sec - tv1.tv_sec)*1000000;
        for(i=0;i<n-1;i++)
	{if(arr[i]<=arr[i+1])
		continue;
	else
		printf("failure\t");
	}
	if(i==n-1)
	printf("sucess\t");
	printf("%f\n",time);
}
