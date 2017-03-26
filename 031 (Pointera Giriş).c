#include <stdio.h>

int main()
{
	int x=5;
	printf("%d \n",x);	
	printf("%d \n",*&x);			// * ve & birbirini n�trler ve sadece x ekrana yaz�l�r.
	
	int * x_yer;					// int pointer tipinde bir x_yer de�i�keni yaratt�k.
	x_yer = &x;						// x_yer de�i�keninde x'in adresi sakland�. 

	printf("%d \n",*x_yer); 		// x_yer de�i�kende &x (x'in adresi) vard�. *x_yer koduyla da 
									// o adresteki kutucu�un i�indeki de�eri, yani x'in de�erini yazd�rd�k.		
									
	printf("%p \n",x_yer); 			// x'in adresi olan x_yer'in RAM'deki numaras�n� yazd�rd�.				
}
