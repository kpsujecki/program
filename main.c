#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


void menu(){
system("@cls||clear");
printf("1. MACIERZ 2D\n");
printf("2. MACIERZ 3D\n");
printf("3. WYJSCIE\n\n");

}

void menu2(){
printf("\n===MACIERZ 2D===\n");
printf("1. WPROWADZ MACIERZ\n");
printf("2. OBLICZ A+B\n");
printf("3. OBLICZ A-B, B-A\n");
printf("4. OBLICZ A*B, B*A\n");
printf("5. MACIERZ ODWORTNA\n");
printf("6. WYJSCIE\n\n");
}
int main()
{
   int mac,n,m, *wsk, *wsk2, licznik=0;
   double wyznacznik, wyznacznikB;
   do{
        menu();
        scanf("%d", &n);
        if(n==1)        mac=2;
        else if(n==2)   mac=3;
        else if(n==3)   return 0;
        else printf("\nNiepoprawna wartosc, wprowadz jeszcze raz");
        int A[mac][mac], B[mac][mac];

        int (*wsk)[mac][mac] = &A, (*wsk2)[mac][mac] = &B;

            do{
                menu2();
                scanf("%d", &m);
                if(m==1){

                    for(int i=0; i<mac; i++){
                        for(int j=0; j<mac; j++){
                            printf("A[%d,%d] = ", i, j);
                            while(scanf("%d", &(*wsk)[i][j]) != 1) //czy podaja wartosc jest liczbą
                            {
                                printf("Podana wartosc to nie liczba, sprobuj jeszcze raz\n");
                                printf("A[%d,%d] = ", i, j);
                                int c;
                                while((c = getchar()) != '\n' && c != EOF); //pętla wyciągająca znaki z bufora
                            }
                            licznik++;
                        }
                    }
                    printf("\n");
                    for(int i=0; i<mac; i++){
                        for(int j=0; j<mac; j++){
                            printf("B[%d,%d] = ", i, j);
                            while(scanf("%d", &(*wsk2)[i][j]) != 1) //czy podaja wartosc jest liczbą
                            {
                                printf("Podana wartosc to nie liczba, sprobuj jeszcze raz\n");
                                printf("B[%d,%d] = ", i, j);
                                int c;
                                while((c = getchar()) != '\n' && c != EOF); //pętla wyciągająca znaki z bufora
                            }
                            licznik++;
                        }
                    }
                    printf("\n");
                }
                if(m==2){
                    system("@cls||clear");
                    if(licznik==8||licznik==18){
                    printf("A+B:\n");
                    for(int i=0;i<mac;i++){
                        for(int j=0;j<mac;j++){
                            printf("%d\t",(*wsk)[i][j]+(*wsk2)[i][j]);
                        }
                        printf("\n");
                    }
                    }
                    else printf("Nie wypielnies macierzy! Wypelnij ja, a nastepnie wroc do dalszego wykonywania programu");
                }
                if(m==3){
                    system("@cls||clear");
                    if(licznik==8||licznik==18){
                    printf("A-B:\n");
                    for(int i=0;i<mac;i++){
                        for(int j=0;j<mac;j++){
                            printf("%d\t",(*wsk)[i][j]-(*wsk2)[i][j]);
                        }
                        printf("\n");

                    }
                    printf("\n");
                    printf("\n");
                    printf("B-A:\n");
                    for(int i=0;i<mac;i++){
                        for(int j=0;j<mac;j++){
                            printf("%d\t",(*wsk2)[i][j]-(*wsk)[i][j]);
                        }
                        printf("\n");

                    }
                    }
                    else printf("Nie wypielnies macierzy! Wypelnij ja, a nastepnie wroc do dalszego wykonywania programu");
                }
                if(m==4){
                       system("@cls||clear");
                        if(licznik==8||licznik==18){
                        if(mac==2){
                                printf("A*B:\n");
                                printf("%d\t",(*wsk)[0][0]*(*wsk2)[0][0] + (*wsk)[0][1]*(*wsk2)[1][0]);
                                printf("%d\t",(*wsk)[0][0]*(*wsk2)[0][1] + (*wsk)[0][1]*(*wsk2)[1][1]);
                                printf("\n");
                                printf("%d\t",(*wsk)[1][0]*(*wsk2)[0][0] + (*wsk)[1][1]*(*wsk2)[1][0]);
                                printf("%d\t",(*wsk)[1][0]*(*wsk2)[0][1] + (*wsk)[1][1]*(*wsk2)[1][1]);
                                printf("\n");
                                printf("\n");
                                printf("B*A:\n");
                                printf("%d\t",(*wsk2)[0][0]*(*wsk)[0][0] + (*wsk2)[0][1]*(*wsk)[1][0]);
                                printf("%d\t",(*wsk2)[0][0]*(*wsk)[0][1] + (*wsk2)[0][1]*(*wsk)[1][1]);
                                printf("\n");
                                printf("%d\t",(*wsk2)[1][0]*(*wsk)[0][0] + (*wsk2)[1][1]*(*wsk)[1][0]);
                                printf("%d\t",(*wsk2)[1][0]*(*wsk)[0][1] + (*wsk2)[1][1]*(*wsk)[1][1]);
                                printf("\n");
                                printf("\n");
                            }
                        if(mac==3){
                             printf("A*B:\n");
                             printf("%d\t",(*wsk)[0][0]*(*wsk2)[0][0] + (*wsk)[0][1]*(*wsk2)[1][0] + (*wsk)[0][2]*(*wsk2)[2][0]);
                             printf("%d\t",(*wsk)[0][0]*(*wsk2)[0][1] + (*wsk)[0][1]*(*wsk2)[1][1] + (*wsk)[0][2]*(*wsk2)[2][1]);
                             printf("%d\t",(*wsk)[0][0]*(*wsk2)[0][2] + (*wsk)[0][1]*(*wsk2)[1][2] + (*wsk)[0][2]*(*wsk2)[2][2]);
                             printf("\n");
                             printf("%d\t",(*wsk)[1][0]*(*wsk2)[0][0] + (*wsk)[1][1]*(*wsk2)[1][0] + (*wsk)[1][2]*(*wsk2)[2][0]);
                             printf("%d\t",(*wsk)[1][0]*(*wsk2)[0][1] + (*wsk)[1][1]*(*wsk2)[1][1] + (*wsk)[1][2]*(*wsk2)[2][1]);
                             printf("%d\t",(*wsk)[1][0]*(*wsk2)[0][2] + (*wsk)[1][1]*(*wsk2)[1][2] + (*wsk)[1][2]*(*wsk2)[2][2]);
                             printf("\n");
                             printf("%d\t",(*wsk)[2][0]*(*wsk2)[0][0] + (*wsk)[2][1]*(*wsk2)[1][0] + (*wsk)[2][2]*(*wsk2)[2][0]);
                             printf("%d\t",(*wsk)[2][0]*(*wsk2)[0][1] + (*wsk)[2][1]*(*wsk2)[1][1] + (*wsk)[2][2]*(*wsk2)[2][1]);
                             printf("%d\t",(*wsk)[2][0]*(*wsk2)[0][2] + (*wsk)[2][1]*(*wsk2)[1][2] + (*wsk)[2][2]*(*wsk2)[2][2]);
                             printf("\n");
                             printf("\n");
                             printf("\n");
                             printf("B*A:\n");
                             printf("%d\t",(*wsk2)[0][0]*(*wsk)[0][0] + (*wsk2)[0][1]*(*wsk)[1][0] + (*wsk2)[0][2]*(*wsk)[2][0]);
                             printf("%d\t",(*wsk2)[0][0]*(*wsk)[0][1] + (*wsk2)[0][1]*(*wsk)[1][1] + (*wsk2)[0][2]*(*wsk)[2][1]);
                             printf("%d\t",(*wsk2)[0][0]*(*wsk)[0][2] + (*wsk2)[0][1]*(*wsk)[1][2] + (*wsk2)[0][2]*(*wsk)[2][2]);
                             printf("\n");
                             printf("%d\t",(*wsk2)[1][0]*(*wsk)[0][0] + (*wsk2)[1][1]*(*wsk)[1][0] + (*wsk2)[1][2]*(*wsk)[2][0]);
                             printf("%d\t",(*wsk2)[1][0]*(*wsk)[0][1] + (*wsk2)[1][1]*(*wsk)[1][1] + (*wsk2)[1][2]*(*wsk)[2][1]);
                             printf("%d\t",(*wsk2)[1][0]*(*wsk)[0][2] + (*wsk2)[1][1]*(*wsk)[1][2] + (*wsk2)[1][2]*(*wsk)[2][2]);
                             printf("\n");
                             printf("%d\t",(*wsk2)[2][0]*(*wsk)[0][0] + (*wsk2)[2][1]*(*wsk)[1][0] + (*wsk2)[2][2]*(*wsk)[2][0]);
                             printf("%d\t",(*wsk2)[2][0]*(*wsk)[0][1] + (*wsk2)[2][1]*(*wsk)[1][1] + (*wsk2)[2][2]*(*wsk)[2][1]);
                             printf("%d\t",(*wsk2)[2][0]*(*wsk)[0][2] + (*wsk2)[2][1]*(*wsk)[1][2] + (*wsk2)[2][2]*(*wsk)[2][2]);
                             printf("\n");
                        }
                        }
                        else printf("Nie wypielnies macierzy! Wypelnij ja, a nastepnie wroc do dalszego wykonywania programu");
                        }
                if(m==5){
                    system("@cls||clear");
                    if(licznik==8||licznik==18){
                    if(mac==2){
                        wyznacznik = (*wsk)[0][0]*(*wsk)[1][1] - (*wsk)[1][0]*(*wsk)[0][1];
                        wyznacznikB = (*wsk2)[0][0]*(*wsk2)[1][1] - (*wsk2)[1][0]*(*wsk2)[0][1];
                        if(wyznacznik!=0){
                             printf("\nMacierz odwrotna do A:\n");
                             printf("% .5f\t\t% .5f\n", (1*(*wsk)[1][1])/wyznacznik, ((-1)*(*wsk)[1][0])/wyznacznik);
                             printf("% .5f\t\t% .5f\n", ((-1)*(*wsk)[0][1])/wyznacznik, (1*(*wsk)[0][0])/wyznacznik);
                             printf("\n");
                        }
                        else printf("Nie mo¿na wyznaczyc macierzy odwrotnej A");

                        if(wyznacznikB!=0){
                             printf("\nMacierz odwrotna do B:\n");
                             printf("% .5f\t\t% .5f\n", (1*(*wsk2)[1][1])/wyznacznikB, ((-1)*(*wsk2)[1][0])/wyznacznikB);
                             printf("% .5f\t\t% .5f\n", ((-1)*(*wsk2)[0][1])/wyznacznikB, (1*(*wsk2)[0][0])/wyznacznikB);
                             printf("\n");
                        }
                        else printf("Nie mo¿na wyznaczyc macierzy odwrotnej");
                    }
                    if(mac==3){
                        wyznacznik = ((*wsk)[0][0]*(*wsk)[1][1]*(*wsk)[2][2] + (*wsk)[0][1]*(*wsk)[1][2]*(*wsk)[2][0]+(*wsk)[0][2]*(*wsk)[1][0]*(*wsk)[2][1])-((*wsk)[0][2]*(*wsk)[1][1]*(*wsk)[2][0] + (*wsk)[0][0]*(*wsk)[1][2]*(*wsk)[2][1]+(*wsk)[0][1]*(*wsk)[1][0]*(*wsk)[2][2]);
                        wyznacznikB = ((*wsk2)[0][0]*(*wsk2)[1][1]*(*wsk2)[2][2] + (*wsk2)[0][1]*(*wsk)[1][2]*(*wsk2)[2][0]+(*wsk2)[0][2]*(*wsk2)[1][0]*(*wsk2)[2][1])-((*wsk2)[0][2]*(*wsk2)[1][1]*(*wsk2)[2][0] + (*wsk2)[0][0]*(*wsk2)[1][2]*(*wsk2)[2][1]+(*wsk2)[0][1]*(*wsk2)[1][0]*(*wsk2)[2][2]);
                    if(wyznacznik!=0)
                    {
                        printf("\nMacierz odwrotna do A:\n");
                        printf("% .5f\t", (((*wsk)[1][1]*(*wsk)[2][2])-((*wsk)[1][2]*(*wsk)[2][1]))/wyznacznik);
                        printf("% .5f\t", (((*wsk)[0][2]*(*wsk)[2][1])-((*wsk)[0][1]*(*wsk)[2][2]))/wyznacznik);
                        printf("% .5f\t", (((*wsk)[0][1]*(*wsk)[1][2])-((*wsk)[0][2]*(*wsk)[1][1]))/wyznacznik);
                        printf("\n");
                        printf("% .5f\t", (((*wsk)[1][2]*(*wsk)[2][0])-((*wsk)[1][0]*(*wsk)[2][2]))/wyznacznik);
                        printf("% .5f\t", (((*wsk)[0][0]*(*wsk)[2][2])-((*wsk)[0][2]*(*wsk)[2][0]))/wyznacznik);
                        printf("% .5f\t", (((*wsk)[0][2]*(*wsk)[1][0])-((*wsk)[0][0]*(*wsk)[1][2]))/wyznacznik);
                        printf("\n");
                        printf("% .5f\t", (((*wsk)[1][0]*(*wsk)[2][1])-((*wsk)[1][1]*(*wsk)[2][0]))/wyznacznik);
                        printf("% .5f\t", (((*wsk)[0][1]*(*wsk)[2][0])-((*wsk)[0][0]*(*wsk)[2][1]))/wyznacznik);
                        printf("% .5f\t", (((*wsk)[0][0]*(*wsk)[1][1])-((*wsk)[0][1]*(*wsk)[1][0]))/wyznacznik);
                        printf("\n");
                    }
                    else printf("Nie mozna wyznaczyc macierzy odwrotnej");
                    if(wyznacznikB!=0){
                        printf("\nMacierz odwrotna do B:\n");
                        printf("% .5f\t", (((*wsk2)[1][1]*(*wsk2)[2][2])-((*wsk2)[1][2]*(*wsk2)[2][1]))/wyznacznikB);
                        printf("% .5f\t", (((*wsk2)[0][2]*(*wsk2)[2][1])-((*wsk2)[0][1]*(*wsk2)[2][2]))/wyznacznikB);
                        printf("% .5f\t", (((*wsk2)[0][1]*(*wsk2)[1][2])-((*wsk2)[0][2]*(*wsk2)[1][1]))/wyznacznikB);
                        printf("\n");
                        printf("% .5f\t", (((*wsk2)[1][2]*(*wsk2)[2][0])-((*wsk2)[1][0]*(*wsk2)[2][2]))/wyznacznikB);
                        printf("% .5f\t", (((*wsk2)[0][0]*(*wsk2)[2][2])-((*wsk2)[0][2]*(*wsk2)[2][0]))/wyznacznikB);
                        printf("% .5f\t", (((*wsk2)[0][2]*(*wsk2)[1][0])-((*wsk2)[0][0]*(*wsk2)[1][2]))/wyznacznikB);
                        printf("\n");
                        printf("% .5f\t", (((*wsk2)[1][0]*(*wsk2)[2][1])-((*wsk2)[1][1]*(*wsk2)[2][0]))/wyznacznikB);
                        printf("% .5f\t", (((*wsk2)[0][1]*(*wsk2)[2][0])-((*wsk2)[0][0]*(*wsk2)[2][1]))/wyznacznikB);
                        printf("% .5f\t", (((*wsk2)[0][0]*(*wsk2)[1][1])-((*wsk2)[0][1]*(*wsk2)[1][0]))/wyznacznikB);
                        printf("\n");
                    }
                    }
                    }
                    else printf("Nie wypielnies macierzy! Wypelnij ja, a nastepnie wroc do dalszego wykonywania programu");
                }


        }while(m!=6);
        n=0;
      }while(n!=3);
    return 0;
}
