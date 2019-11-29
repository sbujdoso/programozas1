/*
 * Feladatsor megoldásai
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){

		//Programozás feladatok 2019/2020 I. félév
		//1. Írjon programsort lebegő pontos típusú változó deklarálására!
	float f;

		//2. Írjon programsort karakter típusú változó deklarálására!
	char ch;

		//3. Írjon programsort egész típusú változó deklarálására!
	int i;

		//4. Írjon programsort N sorból álló egész elemű tömb deklarálására!
	int alma[10];

		//5. Írjon programsort N sorból és M oszlopból álló lebegő pontos számokat tartalmazó mátrix
		//deklarálására!
	int m[10][5];

		//6. Milyen elöl tesztelő ciklusszervező utasításokat ismer?
	for(i=0;i<10;i++) {
		// ciklusmag
	}

	while(i>0){
		i--;
	}

		//7. Milyen hátul tesztelő ciklusszervező utasításokat ismer?
	do{
		i++;
	} while(i<10);

		//8. Írjon példát az első 10 egész szám beolvasására for ciklussal!
    for(i=0; i<10; i++){
			printf("Kerem a %d. szamot:", i+1);
			scanf("%d", &alma[i]);
	}
		//9. Írjon példát az első 10 egész szám beolvasására while ciklussal!
    while(i<10){
			printf("Kerem a %d. szamot:", i+1);
			scanf("%d", &alma[i]);
			i++;
	}

		//10. Írjon példát az első 10 egész szám beolvasására do-while ciklussal!
		//11. Írjon programrészletet, amely kiírja az alma elnevezésű 10 elemű vektor elemeit a képernyőre egy
		//sorba!
	for(i=0; i<10; i++) printf("%d ",alma[i]);


	printf("\n---\n");
		//12. Írjon programrészletet, amely kiírja az alma elnevezésű 10 elemű vektor elemeit a képernyőre egy
		//oszlopba!
	for(i=0; i<10; i++) printf("%d\n",alma[i]);




	printf("\n---\n");
		//13. Hozzon létre írásra egy kiir nevű file-t!
		//14. Hozzon létre olvasásra egy beolvas nevű file-t!
		//15. Írja ki az alma elnevezésű 4 elemű vektor értékeit egy file nevű file-ba!
		//16. Írja ki az alma elnevezésű 4x4 egész elemű mátrix értékeit a képernyőre az elrendezés megtartása
		//mellett!
	
	int almak[4][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 0, 1, 2}, {3, 4, 5, 6}}; //valtozo deklaraciok csak hogy lefusson a program
	int k,l; //index valtozok
	//tenlyeges feladat:
	for(k=0; k<4; k++){
			for(l=0; l<4; l++) printf("%d ", almak[k][l]);
			printf("\n");
	}

	

	printf("\n---\n");
		//17. Írja ki az alma elnevezésű 4x4 egész elemű mátrix értékeit egy file-ba az elrendezés megtartása
		//mellett! (Vegye úgy, hogy a file már létre van hozva!)
	//Nem része a feladatnak, k, l, almak[][] fent definialt!
	FILE *fpalma;
	fpalma = fopen("alma_m.txt","w");
    //feladat:
	for(k=0; k<4; k++){
			for(l=0; l<4; l++) fprintf(fpalma, "%d ", almak[k][l]);
			fprintf(fpalma, "\n");
	}
	// nem resze a feladatnak:
	fclose(fpalma);




		//18. Soroljon fel legalább 3 példát arra az esetre, amikor nem kötelező a ; (pontosvessző) használata!
		//19. Milyen utasítást használhat kommentek beírására? (Írjon példát! :) )
		//20. Írjon példát feltételes utasításra!
		//21. Írjon programrészletet, amely az eper változó értékét az alábbi módon módosítja:
		//Ha felt = 0 eper állandó marad,
		//Ha felt > 0 eper egyel nő,
		//Ha felt < 0 eper egyel csökken.
		//22. Írjon programsort, ami beolvas egy karaktert a billentyűzetről!
		//23. Írjon programrészletet, ami az adott adat egész elemű vektor elemeinek átlagát
		//kiszámolja és beírja az átlag (lebegőpontos) változóba!
		//24. Írjon programrészletet, ami összeszorozza 1-tol 10-ig az egész számokat és az eredményt
		//a faktor változóban tárolja!
		//25. Írjon programrészletet, ami összeadja az a és b 10 elemű vektorok elemeit és az
		//eredményt a c vektorban tárolja!
		//26. Írjon programrészletet, ami összeszorozza az a és b 10 elemű vektorokat és az eredményt a szorzat
		//elnevezésű változóban tárolja!
		//27. Írjon programrészletet, ami összeszorozza az a és b 2x2-es mátrixokat és az eredményt a c mátrixban
		//tárolja!
		//Elokeszites, nem resze a feladatnak:
		int j;
		int a[2][2] = {{1,2},{3,4}};
		int b[2][2] = {{5,6},{7,8}};
		int c[2][2] = {{0,0},{0,0}};
		//
		//  c(i,j) elem a(i) sorának és b(j) oszlopának skaláris szorzata
		//Feladat:
		for(i=0; i<2; i++){
				for(j=0; j<2; j++){
						for(k=0;k<2; k++) {
								c[i][j] += a[i][k]* b[k][j];
						}
				}
		}

		// nem resze a feladatnak, kiirjuk:
		printf("\n---\nVektor szorzat 2x2:\n");
		for(i=0; i<2; i++){
				for(j=0; j<2; j++) printf("%d ",c[i][j]);
				printf("\n");
		}

		
		//28. Keresse meg és tárolja a maximum elnevezésű változóban a vektor nevű 10 elemű vektor
		//legnagyobb abszolút értékű elemét!
		//29. Adott egy alma elnevezésű 10 elemű vektor képezze az elemek abszolút értékét és tárolja el az alma
		//vektorban!
		//30. Adott egy 3 elemű e vektor. Képezze az egységvektorát és tárolja el az e0 vektorban!
		//33. Milyen header állományt kell használnia matematikai függvények használata esetén?
		//34. Írjon példát, milyen esetben kell szögletes zárójelet használni!
		//35. Írjon példát, milyen esetben kell kapcsos zárójelet használni!
		//36. Írjon példát, milyen esetben kell sima zárójelet használni!
		//37. Írjon programsort, ami az adat változó értékét 5-szörösére növeli!
		//38. Írjon programrészletet, ami az alma nevű lebegőpontos elemeket tartalmazó 360 elemű vektort
		//feltölti a sinus függvény értékeivel!
}
