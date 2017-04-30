#include <stdio.h>

struct ogrenci
{
	char ad [20];	
	char bolum [50];
	int sinif;
	float ort;	
};

int main()
{
	struct ogrenci ogr [3] = {{"Ali","Kamu Yonetimi",3,2.25},{"Cem","Iktisat",2,3.10},{"Mert","Gida Muh.",1,2.80}};	
				     	  
	struct ogrenci * ogrptr = ogr;	// struct ogrenci tipindeki ogr dizisinin adresini tutan bir 
					// struct ogrenci tipinde ogrptr pointer dizisi yaratildi.
	for (int i=0; i<3; i++)
	{
		printf("Ad:	%s\n", ogrptr -> ad);
		printf("Bolum:	%s\n", ogrptr -> bolum);
		printf("Sinif:	%d\n", ogrptr -> sinif);
		printf("Ortalama:	%.2f\n\n", ogrptr -> ort);
		* ogrptr ++;	// Burada struct ogrenci tipinde ogrptr pointer dizisinin indeksi 1 artiyor.
	}	
}
