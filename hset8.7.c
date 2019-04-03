#include <stdio.h>

int main(void) {
	// your code goes here
	int a[100],i,j,count=0,n,m,sum=0,first;
	scanf("%d%d",&n,&m);
	for(i=0;i<m+m;i++)
	{
		scanf("%d",&a[i]);
	}
	first=a[0];
	for(i=0;i<m+m;i++)
	{
		count=0;
		for(j=i;j<m+m;j++)
		{
			if(a[i]==a[j])
			{
				count++;
			}
		}
		if(count>1)
		{
			a[i]=0;
		}
	}
	for(i=0;i<m+m;i++)
	{
		if(a[i]!=0)
		{
			sum=sum+a[i];
		}
	}
	sum=sum-first;
	if(sum==first)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
