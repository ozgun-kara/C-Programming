#include <stdio.h>

int main()
{	
	char ad[20],soyad[20];
	int gsaat, gdakika,csaat,cdakika,ksaat,kdakika;
	float borc;
	printf("Adinizi ve soyadinizi giriniz:\n");
	scanf("%s %s",&ad,&soyad);
	printf("Giris saatinizi Saat ve Dakika Olarak Giriniz (Saat:Dakika):\n");
	scanf("%d %d",&gsaat,&gdakika);
	printf("Cikis saatinizi Saat ve Dakika Olarak Giriniz (Saat:Dakika):\n");
	scanf("%d %d",&csaat,&cdakika);
	ksaat = csaat - gsaat;
	kdakika = cdakika - gdakika;
	if (kdakika>59)
	{
		kdakika=kdakika-60;
		ksaat=ksaat+1;
	}
	
	else if (kdakika<0)
	{
		kdakika=kdakika+60;
		ksaat=ksaat-1;
	}
				
	if (1<=ksaat && ksaat<5)
		borc=5; 
		
	else if (5<=ksaat && ksaat<10)
		borc=10;
		
	else
		borc=15; 
		
	printf("------------------------------------\n");
	printf("Sayin %s %s \n",ad,soyad);
	printf("Giris Saatiniz: %d %d\n",gsaat,gdakika);
	printf("Cikis Saatiniz: %d %d\n",csaat,cdakika);
	printf("Kaldiginiz Toplam Sure = %d saat %d dakikadir.\n",ksaat,kdakika);
	printf("------------------------------------\n");
	printf("Borcunuz = %.2f TL dir.\n",borc);
}
