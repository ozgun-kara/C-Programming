#include <stdio.h>
	
int main()
{
	char * gunler [7] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"};
	//	Burada char içerikli baþlangýç adreslerinden 7 adet içeren gunler pointer dizisi yarattýk.
	// 	Not:	char * gunler [7];
	//			gunler [7] = {"Pazartesi","Sali","Carsamba","Persembe","Cuma","Cumartesi","Pazar"}; yazýlamaz.
	
	printf("%s \n",gunler [0]);	// pointer array olan gunler'in 0. indeksindeki "Pazartesi" metninde,
								// '\n' (null) karakterini görene kadar yazdýrdý.
	printf("%c \n",* gunler [0]);	
	printf("%c \n",* (gunler [0]+1));
	printf("%c \n",* (gunler [0]+2));
	printf("%c \n",* (gunler [0]+3));
	printf("%c \n",* (gunler [0]+4));
	printf("%c \n",* (gunler [0]+5));
	printf("%c \n",* (gunler [0]+6));
	printf("%c \n",* (gunler [0]+7));
	printf("%c \n",* (gunler [0]+8));
}
