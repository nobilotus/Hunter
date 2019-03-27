#include <stdio.h>
 
int main(void) {
	// your code goes here
	int a[100],n,i,j,count=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		count=0;
		for(j=0;j<n;j++)
		{
			if(a[i]==a[j]&& a[j]!=0)
			{
				count++;
				if(count>1)
				{
					a[j]=0;
				}
			}
		}
		if(count>1){
			printf("%d",a[i]);
		}
	}
	return 0;
}
