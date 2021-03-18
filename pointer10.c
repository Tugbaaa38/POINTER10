#include <stdio.h>
#include <stdlib.h>

// ++ ve -- isleclerinin pointerlar ile birlikte kullanimi

int main() {
     
     int sayilar[]={1,2,3,4,5};
     int i;
     int *ptr;
     ptr=sayilar;   //sayilar dizisinin ilk elemanini ptr degiskenine atadik..
     ++*ptr;       //dizinin 0.indexindeki elemani 1 arttir demek.
    
     for(i=0;i<5;i++)
     {
     	printf("%d ",*(ptr+i));  //2 2 3 4 5 ciktisini verir.Cunku yukarida dizinin 0.indexindeki elemani 1 arttirdik.
	 }
     
     
    
	return 0;
}

