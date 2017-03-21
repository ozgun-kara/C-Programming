#include <stdio.h>

main()
{
	char isim [10][20];
	int n;
	printf ("Kac adet isim girilecek? \n");
	scanf("%d",&n);
	
	for (int i=0;i<n;i++)
	{
		printf ("%d. isim: ",i+1);
		scanf ("%s",&isim[i]);		
	}
	
	printf ("\n Isimler \n");
	
	for (int i=0;i<n;i++)
	{
		printf ("%s\n",isim[i]);	
	}
}
