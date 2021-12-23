#include<stdio.h>
main()
{
	int n,q,r;
	printf("enter n value:");
	scanf("%d",&n);
	q=n/60;
	r=n%60;
	printf("%dhours %dminutes",q,r);
}
