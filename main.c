#include"header.h"
double time;
struct timeval tv1,tv2;
int main(int argc,char *argv[])
{
	int n=argc-2,i=0,arr[n],ch=atoi(argv[1]);
	for(i=2;i<argc;i++)
		arr[i-2]=atoi(argv[i]);
	switch(ch)
	{
		case 0:bubble(arr,n);break;
		case 1:selection(arr,n);break;
		case 2:insertion(arr,n);break;
        	case 3:gettimeofday(&tv1, NULL);
			merge_sort(arr,0,n-1);
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
			printf("%f\n",time);break;
		case 4:gettimeofday(&tv1, NULL);
			quick(arr,0,n-1);
			gettimeofday(&tv2, NULL);
			time = (double) (tv2.tv_usec - tv1.tv_usec)/1000000 + (double) (tv2.tv_sec - tv1.tv_sec)*1000000;
/*			printf("unsorted array:");
			for(i<0;i<n;i++)
			printf("%d\t",arr[i]);
			printf("\n");*/
			for(i=0;i<n-1;i++)
			{if(arr[i]<=arr[i+1])
				continue;
			else
				printf("failure\t");
			}
			if(i==n-1)
			printf("sucess\t");
			printf("%f\n",time);break;
		default:break;
	}
	return 0;
}

