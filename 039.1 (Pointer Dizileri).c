#include <stdio.h>

char * gun_dondur (char * dizi [], int hangigun)
{
	return dizi [hangigun - 1];	
}
	
int main()
{
	char * gunler [7] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
	//	Burada char i�erikli ba�lang�� adreslerinden 7 adet i�eren gunler pointer dizisi yaratt�k.
	// 	Not:	char * gunler [7];
	//			gunler [7] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"}; yaz�lamaz.
	
	printf("%s \n",gunler [0]);	// pointer array olan gunler'in 0. indeksindeki "Pazartesi" metninde,
								// '\n' (null) karakterini g�rene kadar yazd�rd�.
	printf("%s",gun_dondur(gunler,2));	//	printf("%s",gun_dondur(gunler[7], 2)); kodu �al��maz.

}
