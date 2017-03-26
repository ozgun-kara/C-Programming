#include <stdio.h>

// NOT: String dizilere, diğer dizilerden farklı olarak 
// son kutucuğa bilgisayar tarafından '\0' (null) karakteri eklenir. 

int uzunluk_bul(char *p)		// Bu fonksiyona gönderilen dizi'nin başlangıç adresi p'ye gitti.
{
	int uzunluk = 0;
	for	(int i=0; p[i] != '\0'; i++)		// En son p[5] sağlanır. p[6] == '\0' olduğu için döngüden çıkar. 
	{
		uzunluk++;	
	}
	return uzunluk;	
}

int main()
{
	char dizi [] = "Zidane";
	printf("%s metninin uzunlugu = %d \n",dizi,uzunluk_bul(dizi));
}
