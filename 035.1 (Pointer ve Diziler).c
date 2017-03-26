#include <stdio.h>

int main()
{
	int dizi [] = {5,4,8,9,11};
	int * ptr;
	ptr = &dizi[0];			//	ptr = dizi; de yazýlabilirdi. ptr'ye dizi'nin 0. yani ilk indisinin yerini atadýk.
	printf("%p \n",&dizi);	//	printf("%p \n",&dizi[0]); da yazýlabilirdi.
	printf("%p \n",&ptr);	//  Ýçinde dizi'nin baþlangýç adresini tutan ptr'nin adresi.	
	printf("Dizinin 1. elemani = %d, adresi = %p \n",ptr[0],ptr);		//	Not: *ptr     <----> dizi[0] <----> ptr[0]	
	printf("Dizinin 2. elemani = %d, adresi = %p \n",ptr[1],ptr+1);		//	Not: *(ptr+1) <----> dizi[1] <----> ptr[1]
	printf("Dizinin 3. elemani = %d, adresi = %p \n",dizi[2],ptr+2);
	printf("Dizinin 4. elemani = %d, adresi = %p \n",*(ptr+3),&ptr[3]);	
	printf("Dizinin 5. elemani = %d, adresi = %p \n",*(ptr+4),&dizi[4]);	
	printf("Dizinin 6. elemani = %d, adresi = %p \n",*(ptr+5),ptr+5);
}
