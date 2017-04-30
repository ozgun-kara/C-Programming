#include <stdio.h>
#include <string.h>

struct ogrenci
{
	char ad [20];
	char soyad [20];	
	char bolum [50];
	int numara;
	int sinif;
	float ortalama;	
};

int main()
{
	struct ogrenci ogr1,ogr2;	
	strcpy(ogr1.ad,"Meltem");		
	strcpy(ogr1.soyad,"Aydin");
	strcpy(ogr1.bolum,"Yonetim Bilisim Sistemleri");
	ogr1.numara=2014102009;
	ogr1.sinif=3;
	ogr1.ortalama=3.25;
	
	strcpy(ogr2.ad,"Ahmet");
	strcpy(ogr2.soyad,"Aslan");
	strcpy(ogr2.bolum,"Yonetim Bilisim Sistemleri");
	ogr2.numara=2015102009;
	ogr2.sinif=2;
	ogr2.ortalama=2.50;
	
	printf("Ad:	%s\n",ogr1.ad);				//	printf("Ad:	%s\n",ogr1.ad[15]); yazilamaz. 
	printf("Soyad:	%s\n",ogr1.soyad);
	printf("Bolum:	%s\n",ogr1.bolum);
	printf("Numara:	%d\n",ogr1.numara);
	printf("Sinif:	%d\n",ogr1.sinif);
	printf("Ortalama:	%.2f\n\n",ogr1.ortalama);
	
	printf("Ad:	%s\n",ogr2.ad);
	printf("Soyad:	%s\n",ogr2.soyad);
	printf("Bolum:	%s\n",ogr2.bolum);
	printf("Numara:	%d\n",ogr2.numara);
	printf("Sinif:	%d\n",ogr2.sinif);
	printf("Ortalama:	%.2f\n",ogr2.ortalama);
}
