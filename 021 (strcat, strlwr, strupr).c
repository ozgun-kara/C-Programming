#include <stdio.h>
#include <string.h>

int main()
{	
	char mesaj1 [] = "Hello ", mesaj2 [] = "World";
	char ad1 [] ="ZINEDINE", ad2[]="zidane";
	strcat(mesaj1,mesaj2);					// mesaj2'yi mesaj1'e ekledi. 
	printf("%s\n",mesaj1);
	printf("%s\n",strlwr(ad1));				// ad1'in b�t�n harflerini k���k harfe d�n��t�rd�.
	printf("%s\n",strupr(ad2));				// ad2'nin b�t�n harflerini b�y�k harfe d�n��t�rd�.
}
