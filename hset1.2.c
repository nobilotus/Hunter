#include <stdio.h>

int main(void) {
	// your code goes here
	int n,a[100],i,j,temp,pos=1;
	long int sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n-1;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(i=0;i<n;i++)
	{
	          //printf("%d",a[i]);
		
		sum=(sum*pos)+a[i];
		pos=10;
		//printf("  %ld",sum);
	
	}
	printf("  %ld",sum);
	return 0;
}
