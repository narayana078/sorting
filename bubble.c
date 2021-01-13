#ifndef __HEADER__
#include"header.h"
#endif
void bubble(int arr[],int n)
{
	gettimeofday(&tv1, NULL);
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
       printf(" %f\n",time);
}
