#include <stdio.h>
#include <string.h>

struct ogrenci
{
	char ad [20];	
	char bolum [50];
	int sinif;
	float ort;	
};

int main()
{
	struct ogrenci ogr1[3] = {{"Ali","Kamu Yonetimi",3,2.25},{"Cem","Iktisat",2,3.10},{"Mert","Gida Muh.",1,2.80}};	
	//	NOT: Yukarida ogrenci yapisinda 3 adet struct üretildi. Bunlar ogr1 struct dizisinde tutuluyor.			
	for (int i=0;i<3;i++)
	{
		printf("Ad:	%s\n",ogr1[i].ad);
		printf("Bolum:	%s\n",ogr1[i].bolum);
		printf("Sinif:	%d\n",ogr1[i].sinif);
		printf("Ortalama:	%.2f\n\n",ogr1[i].ort);
	}	
	
	printf("-----------------------------------------------------\n");
	
	struct ogrenci ogr2[2];
	
	strcpy(ogr2[0].ad,"Meltem");
	strcpy(ogr2[0].bolum,"Kimya");
	ogr2[0].sinif = 3;
	ogr2[0].ort = 2.14;	
	
	strcpy(ogr2[1].ad,"Kemal");
	strcpy(ogr2[1].bolum,"Insaat Muh.");
	ogr2[1].sinif = 2;
	ogr2[1].ort = 2.75;	 
	
	for (int i=0;i<2;i++)
	{
		printf("Ad:	%s\n",ogr2[i].ad);
		printf("Bolum:	%s\n",ogr2[i].bolum);
		printf("Sinif:	%d\n",ogr2[i].sinif);
		printf("Ortalama:	%.2f\n\n",ogr2[i].ort);
	}
}
