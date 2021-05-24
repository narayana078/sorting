#include<stdio.h>
#include<stdlib.h>
#include<sys/time.h>
extern double time;
extern struct timeval tv1,tv2;

extern void bubble(int arr[],int n);
extern void insertion(int arr[],int n);
extern void selection(int arr[],int n);

extern void merge(int arr[], int beg, int mid, int end);
extern void merge_sort(int arr[], int beg, int end);
extern int partition(int a[],int lb,int ub);
extern void display(int arr[],int n);
extern void quick(int a[], int beg, int end);
