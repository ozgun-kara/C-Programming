#include <stdio.h>

char * dizitopla (int * dizi1 ,int * dizi2, int size)
{
	char toplamdizi [size];
	for (int i=0;i<size;i++)
	{
		toplamdizi [i] = dizi1 [i] + dizi2 [i];
	}
	return toplamdizi;	
}

int main()
{
	int matris1 [] = {1,2,3,4};
	int matris2 [] = {5,6,7,8};
	char * p;
	p = dizitopla(matris1,matris2,4);
	printf("%d %d %d %d", *p, *(p+1), *(p+2), *(p+3));	// printf("%d %d %d %d", p[0], p[1], p[2], p[3]); kodu da yazilabilir.
}
