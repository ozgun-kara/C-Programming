#include <stdio.h>

int otobus_bilet()
{
	return 50;
}

int ucak_bilet()
{
	return 100;
}

int main()
{
	int tercih;
	printf("Yolculuk otobusle mi ucakla mi olacak? (otobus:1,ucak:2) \n");
	scanf("%d",&tercih);	
	if (tercih == 1)
	{
		printf("Otobus ucreti = %d TL",otobus_bilet());
	}
	else
	{
		printf("Ucak ucreti = %d TL",ucak_bilet());
	}
}
