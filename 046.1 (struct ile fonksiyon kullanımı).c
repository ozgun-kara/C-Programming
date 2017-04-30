#include <stdio.h>

struct Futbolcu
{
	char ad [20];
	char takim [20];
	int yas;
};

void Futbolcu_Bilgisi_Yaz (struct Futbolcu f)
{
	printf("%s	%s %d \n\n",f.ad,f.takim,f.yas);	
}

struct Futbolcu Sporcu_Uret ()	// Bu fonksiyon, hi� bir parametre almadan struct Futbolcu tipinde yap� d�nd�r�yor.
{
	struct Futbolcu yeni;
	
	printf("Sporcunun Bilgilerini Giriniz: (Ad/Takim/Yas) \n");
	scanf("%s %s %d", &yeni.ad, &yeni.takim, &yeni.yas);
	return yeni;	
}

int main()
{
	struct Futbolcu F1 = {"Zidane","JUVENTUS",27};
	Futbolcu_Bilgisi_Yaz(F1);
	struct Futbolcu F2;		//	struct Futbolcu F2 = Sporcu_Uret(); yaz�larak da nesne �retilebilirdi.
	F2 = Sporcu_Uret();
	Futbolcu_Bilgisi_Yaz(F2);
}
