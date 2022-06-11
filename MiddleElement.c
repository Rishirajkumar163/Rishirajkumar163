#include<stdio.h>

int main(){
	int a[100],n,c,i;
	printf("Enter n Number of element:");
	scanf("%d",&n);
	printf("These are elements\n");
	for(i=1;i<=n;i++)
	{
	scanf("%d",&a[i]);	
	}
	if(n%2==0)
	{
	printf("The middle elements are: %d and %d ",a[n/2],a[(n+2)/2]);
	}
	else
	{
	printf("The middle element is: %d",a[(n+2)/2]);
	}
	return 0;
}
