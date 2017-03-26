#include <stdio.h>

char * gun_dondur (char * dizi [], int hangigun)
{
	return dizi [hangigun - 1];	
}
	
int main()
{
	char * gunler [7] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
	//	Burada char içerikli baþlangýç adreslerinden 7 adet içeren gunler pointer dizisi yarattýk.
	// 	Not:	char * gunler [7];
	//			gunler [7] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"}; yazýlamaz.
	
	printf("%s \n",gunler [0]);	// pointer array olan gunler'in 0. indeksindeki "Pazartesi" metninde,
								// '\n' (null) karakterini görene kadar yazdýrdý.
	printf("%s",gun_dondur(gunler,2));	//	printf("%s",gun_dondur(gunler[7], 2)); kodu çalýþmaz.

}
