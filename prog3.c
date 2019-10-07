#include <stdio.h>
#include <stdlib.h>

int main(){
// fajl mutato deklaralasa
    FILE *fp;
    int i,j, sum;
    int n = 0;

// fajl megnyitasa
    fp = fopen("kfile.txt", "r");

//opcionalis - most meg nem kell, hiba kezelese
    if (fp == NULL) {
           printf("fail megnyitasi hiba...");
           exit(-1);
           }
//Masik modszer a beolvasasra
//  while(fscanf(fp, "%d\n", & j) != EOF) {
    
//A fajl vegeig...
    while(!feof(fp)) {
			//Beolvasunk egy sort
			fscanf(fp, "%d\n", & j);

			//Kiirjuk a kepernyore
			printf("%d, ",j);

			//nyilvan tartjuk hany sort olvasuk be 
			n++;

			//osszegezzuk a beolvasott szamokat. sum = sum + j
			sum += j;
          }



/*    
 *    //Ha csak 10 sort akarunk beolvasni:
 *    for(i =0; i< 10; i++){
 *        fscanf(fp, "%d\n", & j);
 *        sum += j;
 *        }
 */

	// Kiirjuk az adatokat:
    printf("\nBeolvasott ertekek szama: %d\nOsszeg: %d\nAtlag: %f\n",n,sum, (float) sum / n);

    system("PAUSE");
}
