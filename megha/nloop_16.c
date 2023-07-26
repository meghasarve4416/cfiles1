# include<stdio.h>
int main()
{
	int n,k;
	printf("enter the value of n-:");
	scanf("%d",&n);
	printf("enter the value of k-:");
	scanf("%d",&k);
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=i;j++)
			{
				printf(" %d",k);
			}
			printf("\n");
			k+=2;
		}
return 0;
}
