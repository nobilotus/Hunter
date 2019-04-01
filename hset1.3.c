#include <stdio.h>
 
int main(void) {
	// your code goes here
	int n,a[100],i,j;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		if(i==a[i])
		{
			printf("%d",i);
		}
	}
 
	return 0;
}
