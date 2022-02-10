//insertion sort
#include<stdio.h>
#define MAX 100
int a[MAX],n,i,j;
void input()
{
	printf("\nEnter the number of elements in the array: ");
	scanf("%d",&n);
	printf("\nEnter the elements in the array:\n");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
}
void output()
{
	printf("\n\nThe sorted array is:\t");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
void insertionsort()
{
	int k,l=1,t;
	for(i=1;i<n;i++)
	{
		k=a[i];
		for(j=i-1; j>=0 && k<a[j];j--)
			a[j+1]=a[j];
		a[j+1]=k;
		printf("\nIteration %d:\t",l);
		for(t=0;t<n;t++)
			printf("%d\t",a[t]);
		l++;
	}
}
int main()
{
	input();
	insertionsort();
	output();
}
