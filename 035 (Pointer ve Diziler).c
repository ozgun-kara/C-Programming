#include <stdio.h>

int main()
{
	int dizi [] = {5,4,8,9,11};
	int * ptr;
	ptr = &dizi[0];			// ptr = dizi; de yazılabilirdi. ptr'ye dizi'nin 0. yani ilk indisinin yerini atadık.
	printf("%p \n",&dizi);	// printf("%p \n",&dizi[0]); da yazılabilirdi.
	printf("%p \n",&ptr);	// İçinde dizi'nin başlangıç adresini tutan ptr'nin adresi.	
	printf("Dizinin 1. elemani = %d, adresi = %p \n",*ptr,ptr);
	printf("Dizinin 2. elemani = %d, adresi = %p \n",*(ptr+1),ptr+1);
	printf("Dizinin 3. elemani = %d, adresi = %p \n",*(ptr+2),ptr+2);
	printf("Dizinin 4. elemani = %d, adresi = %p \n",*(ptr+3),ptr+3);	
	printf("Dizinin 5. elemani = %d, adresi = %p \n",*(ptr+4),ptr+4);	
}
