#include <stdio.h>
#include <stdlib.h>

main()
{
	int sayilar[]={44,58,75,12,34,25,10,8,20,67};
	int sayi;
	printf("Sayi giriniz: ");
	scanf("%d",&sayi);
	system("CLS");
	for (int i=0;i<10;i++)
	{ 
		if (sayilar[i]==sayi)
		{	
			printf("Girilen %d degeri, dizinin %d. indisinde bulundu.",sayi,i);
			goto finish;
		}
	}
	printf("Girilen deger, dizide bulanamadi");			
	finish:
	printf("\n");	
}
