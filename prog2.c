#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(){
	 //Veletlen szam tartomany also erteke:
     int S_MIN = 0;
	 //Veletlen szam tartomany felso erteke: (3-al osztatosag miatt /3 !)
     int S_MAX = 100/3;

	 //Hany darab szamot generaljunk:
     int S_NUM = 10;

     int i = 0;
     int j;
     float szam;
     int szam2;
     int lk, ln;
     
     int csere = 0;
     int t;
     
     FILE * fnev;
     
     int v[100];
   
     /* Inicializalas, hogy mukodjon a veletlen szam generalas*/
     srand(time(0));
    
     // Harommal oszthato egesz szamok generalasa S_MIN es S_MAX kozott
     for(i = 0; i < S_NUM; i++) 
           v[i] = (rand() % (S_MAX - S_MIN) + S_MIN )* 3;
     
     // Legkisebb es legnagyobb ertekek megkeresese
     // Kiindulaskent a vektor elso elemet valasztjuk
     lk = v[0];
     ln = v[0];
      
     // Vegig megyunk a vektoron es megnezzuk, hogy az adott elem... 
     for(i = 0; i < S_NUM; i++) {
           // kisebb-e mint lk, ha igen, eltaroljuk
           if (v[i] < lk ) lk = v[i];
           // nagyobb-e mint ln, ha igen, eltaroljuk
           if (v[i] > ln ) ln = v[i];
           }
     
     // Kiirjuk a vektor elemeit
     for(i = 0; i < S_NUM; i++)            
           printf("v[%2d] = %3d\n", i, v[i]);
     // Kiirjuk a legkisebb es legnagyobb elemeket
     printf("--\nLegkisebb: %3d\tLegnagyobb: %3d\n",lk,ln);

  
	 //Buborek rendezessel novekvo sorredbe:
     printf("Novekvo sorban a tomb:\n");
     for(i=0; i < S_NUM ; i++){
         for(j=0; j < S_NUM -1 - i ; j++){
                  if (v[j] > v[j+1]) { //a ket elem felcserelese
						  t = v[j];
						  v[j]=v[j+1];
						  v[j+1]=t;
				  }
		}
     }
     // Kiirjuk a kepernyore:
     for(i = 0; i < S_NUM; i++)
           printf("v[%2d] = %3d\n", i, v[i]);
     
       
     // Kiirjuk a kfile.txt-nevu file-ba az aktualis konyvtarban
	 // file megnyitasa
     fnev = fopen("kfile.txt", "w");

     for(i = 0; i < S_NUM; i++)
		   //kiiras file-ba
           fprintf(fnev,"%d\n", v[i]);
           
	 //file bezarasa
     fclose(fnev);
  
  
  
     // Buborek rendezes csokkeno sorrendben:
     printf("Csokkeno sorban a tomb:\n");
     for(i=0; i < S_NUM; i++){
         for(j=S_NUM -1; j >i ; j--){
                  if (v[j] > v[j-1]){
						  t=v[j];
						  v[j]=v[j-1];
						  v[j-1]=t;
				  }
         }
     }
     // Kiirjuk a kepernyore:
     for(i = 0; i < S_NUM; i++)
           printf("v[%2d] = %3d\n", i, v[i]);
     
     system("PAUSE");
}
