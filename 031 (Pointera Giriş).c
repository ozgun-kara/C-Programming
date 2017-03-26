#include <stdio.h>

int main()
{
	int x=5;
	printf("%d \n",x);	
	printf("%d \n",*&x);			// * ve & birbirini nötrler ve sadece x ekrana yazılır.
	
	int * x_yer;					// int pointer tipinde bir x_yer değişkeni yarattık.
	x_yer = &x;						// x_yer değişkeninde x'in adresi saklandı. 

	printf("%d \n",*x_yer); 		// x_yer değişkende &x (x'in adresi) vardı. *x_yer koduyla da 
									// o adresteki kutucuğun içindeki değeri, yani x'in değerini yazdırdık.		
									
	printf("%p \n",x_yer); 			// x'in adresi olan x_yer'in RAM'deki numarasını yazdırdı.				
}
