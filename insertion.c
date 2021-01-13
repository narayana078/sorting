#ifndef __HEADER__
#include"header.h"
#endif
void insertion(int arr[],int n)
{
	gettimeofday(&tv1, NULL);
	int i=0,j=0,temp=0,p=0;
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
        gettimeofday(&tv2, NULL);
        time = (double) (tv2.tv_usec - tv1.tv_usec)/1000000 + (double) (tv2.tv_sec - tv1.tv_sec)*1000000;
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
