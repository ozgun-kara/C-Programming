#include <stdio.h>

void artir (int dizi [], int boyut, int artis)
{
	int i;
	int * ptr;		
	ptr = &dizi[0];
	for (i=0; i<boyut; i++)
	{
		*ptr = *ptr + artis;
		printf("%d ", *ptr);
		ptr = ptr + 1;		//	dizi'nin baþlangýç adresini tutan ptr pointerý 1 artarak
							//	memory'de 4 byte ilerideki adresi göstermeye baþladý.
	}
}

int main()
{
	int boyut, i, n;
	int dizi [5] = {0,1,2,3,4};
	for (int i=0; i<5; i++)
		printf("%d ", dizi[i]);
	printf("\nDizinin elemanlari kac artirilacak?\n");
	scanf("%d",&n);
	artir(dizi,5,n);			
}
