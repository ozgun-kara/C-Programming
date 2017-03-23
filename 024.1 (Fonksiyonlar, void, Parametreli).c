#include <stdio.h>

void cizim (int b,int e)
{
	for (int i=0;i<=b;i++)
	{
		for (int j=0;j<=e;j++)
		{
			printf("*");
		}
		printf("\n");
	}	
}

int main()
{
	int boy,en;
	printf("Seklin boyunu giriniz: \n");
	scanf("%d",&boy);
	printf("Seklin enini giriniz: \n");
	scanf("%d",&en);
	printf("\n");
	cizim(boy,en);			
}
