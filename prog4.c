#include <stdio.h>
#include <stdlib.h>

typedef unsigned short int ti;

void binkiir(char s[5] , ti i){
     ti c = 1;
     unsigned short int n=0;
     printf("%s:%5d: ",s,i);
     do {
         if(i & c) printf("1");
         else printf("0");
         c = c << 1;
         if (n++, n % 8 == 0) printf(" ");
     
     }while(c);
     printf("\n");
     }

int main(){
	ti a, mask, mask2;
    
    a = 99;
    
	printf("Bit bekapcsolasa:\n");
    //Maszk letrehozasa 5. bit 1-es
    mask = 1<<4;
    binkiir("Ertk", a);
    binkiir("Mask", mask);

	//maszk alkalmazasa: 5. bit bekapcsolasa
    binkiir("Erdm", a | mask);
/*Eredmenye:
        99: 11000110 00000000
        16: 00001000 00000000
       115: 11001110 00000000
*/


    //maszk letrehozasa: 2. bit egyes
    printf("\ntoggle:\n");
    mask2 = 6;
    binkiir("Ertk", a);
    binkiir("Mask", mask2);
	// bit ertekenek megforditasa: 0-bol 1 lesz es forditva
    binkiir("Erdm", a ^ mask2);

    printf("\nclear:\n");
	// bit torlese: es muvelet a maszk negaltjaval:
    binkiir("Ertk", a);
    binkiir("Mask", mask2);
    binkiir("~Msk", ~mask2);
	binkiir("Erdm", a & ~mask2);
     
/*
        99: 11000110 00000000
         2: 01000000 00000000
        97: 10000110 00000000
*/

    
    system("PAUSE");
}
