#include <stdio.h>

int main(void) {
	// your code goes here
	int m,n,i,j,temp;
	scanf("%d%d",&m,&n);
	int a[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++)
	{
		for(j=i+1;j<m;j++)
		{
			if(a[i]<a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("%d",a[n-1]);
	return 0;
}
