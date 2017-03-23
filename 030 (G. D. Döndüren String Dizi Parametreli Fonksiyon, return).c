#include <stdio.h>

int uzunluk_bul(char dizi [])
{
	int uzunluk=0;
	
	for (int i=0; dizi[i] != NULL ;i++)		// NULL yerine '\0' da yazýlabilir.
	{
			uzunluk++;
	}
	return uzunluk;
}

int main()
{
	char isim [] = "Zidane";	
	char isim2 [100] = "Oliver Khan";			
	char isim3 [] = "Meta11ica";
	char isim4 [6] = {'P','u','y','o','l'};			// char isim4 [] = {'P','u','y','o','l'}; yazýlýrsa hata çýkar. Dizinin sonu belirtilmeli.
	char isim5 [] = {'P','u','y','o','l','\0'};
	printf("%s isminin uzunlugu = %d \n",isim,uzunluk_bul(isim));	
	printf("%s isminin uzunlugu = %d \n",isim2,uzunluk_bul(isim2));	
	printf("%s isminin uzunlugu = %d \n",isim3,uzunluk_bul(isim3));	
	printf("%s isminin uzunlugu = %d \n",isim4,uzunluk_bul(isim4));	
	printf("%s isminin uzunlugu = %d \n",isim5,uzunluk_bul(isim5));		
}
