#include <stdio.h>

int main()
{
	int secenek,taban,yukseklik,r,kenar1,kenar2;
	float alan;
	
	printf("1:Ucgen\n");
	printf("2:Daire\n");
	printf("3:Diktortgen\n");
	printf("Seciminizi giriniz:\n");
	scanf("%d",&secenek);
	switch(secenek)
	{          
	           case 1: printf("Taban degerini giriniz:\n");            
	                   scanf("%d",&taban);                                  
	                   printf("Yukseklik degerini giriniz:\n");            
	                   scanf("%d",&yukseklik); 
	                   alan = (float)((taban*yukseklik)/2);
	                   printf("Alan = %.2f\n",alan);
	                   break;
	           case 2: printf("Yaricap degerini giriniz:\n");            
	                   scanf("%d",&r);                                  
	                   alan = (3.14)*r*r;
	                   printf("Alan = %.2f\n",alan);
	                   break;
	           case 3: printf("1. Kenar degerini giriniz:\n");            
	                   scanf("%d",&kenar1);                                  
	                   printf("2. Kenar degerini giriniz:\n");            
	                   scanf("%d",&kenar2);
	                   alan = kenar1*kenar2;
	                   printf("Alan = %.2f\n",alan); 
	                   break;
	           default:printf("Yanlis Deger!\n");            	                                                   
	}               
}
