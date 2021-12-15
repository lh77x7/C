/* 
    rozwiazanie 1-8 z rozdziału 5
*/

#include <stdio.h>
#include <ctype.h>
float potegaTrzecia(float x);
double Temperatura(int stopnie);

int main(void){

    // zmienne do ćwiczeń
    //5.1
    /*
    int iloscMinut, ileGodzin, ileMinut;
    const int GODZINA = 60;
    
    //5.2
    int liczba;

    //5.3
    int iloscDni, ileTygodni, ileDni;
    const int TYDZIEN = 7;

    //5.4
    int wzrost;
    const float CAL = 2.54;    // 1 cal = 2.54 cm
    const float STOPA = 30.40;   // 1 stopa = 12 cali = 30.48 cm

    //5.5
    int licznik, suma, zakres;

    //5.6
    to co w 5.5

    //5.7
    float wartosc;
    */

    //5.8
    double ileStopni;

    // rozwiazania ćwiczeń
    // 5.1
    printf("---cwicz 1---\n");
    printf("Podaj liczbe minut (podanie 0 konczy program): ");
    scanf("%d", &iloscMinut);
    while(iloscMinut!=0 && iloscMinut>0) {
        ileGodzin = iloscMinut/GODZINA;
        ileMinut = iloscMinut%GODZINA;
        printf("%d minut to %d godzin i %d minut.\n", iloscMinut, ileGodzin, ileMinut);
        printf("Podaj liczbe minut (podanie 0 konczy program): ");
        scanf("%d", &iloscMinut);
    }
    printf("-------------\n");
    

    // 5.2
    printf("---cwicz 2---\n");
    printf("Podaj liczbe calkowita: "); scanf("%d", &liczba);
    int licznik = 0;
    while (licznik++<=10) {
        printf("%d ", liczba);
        liczba++;
    }
    printf("\n");
    printf("-------------\n");
    
   
    // 5.3
    printf("---cwicz 3---\n");
    printf("Podaj liczbe dni (0 lub -20 konczy dzialanie programu): ");
    scanf("%d", &iloscDni);
    while (iloscDni !=0 && iloscDni !=-20) {
        ileTygodni = iloscDni/TYDZIEN;
        ileDni = iloscDni%TYDZIEN;
        printf("%d dni to %d tygodni, %d dni.\n", iloscDni, ileTygodni, ileDni);
        printf("Podaj liczbe dni (0 lub -20 konczy program): ");
        scanf("%d", &iloscDni);
    } 
    printf("-------------\n");

    // 5.4
    printf("---cwicz 4---\n");
    printf("Podaj liczbe centymetrow: "); scanf("%d", &wzrost);
    //dopóki wzrost większy od 0 umożliwiaj podawanie wzrostu
    while(wzrost>0) {
        printf("%d wzrostu to %.2f stop, %.2f cali.\n", wzrost, wzrost/STOPA, wzrost/CAL);
        printf("Podaj wzrost w centymetrach (<=0 - koniec): ");
        scanf("%d", &wzrost);
    }
    printf("-------------\n");
    
    // 5.5
    printf("---cwicz 5 ---");
    licznik=0;
    suma = 0;
    printf("Do jakiego zakresu liczyc? "); scanf("%d", &zakres);
    while(licznik++<zakres) {
        suma = suma + licznik;
        printf("suma = %d\n", suma); 
    }
    printf("-------------\n");

    // 5.6
    printf("---cwicz 6---\n");
    
    licznik=0;
    suma = 0;
    printf("Do jakiego zakresu liczyc? "); scanf("%d", &zakres);
    while(licznik++<zakres) {
        suma = suma + (licznik*licznik);   //obliczam sume kawadratow liczb całkowitych
        printf("suma = %d\n", suma); 
    }
    printf("-------------\n");

    // 5.7
    printf("---cwicz 7---\n");
    printf("Podaj liczbe: "); scanf("%f", &wartosc);
    while(wartosc>0){
        float wynik = potegaTrzecia(wartosc);
        printf("%.2f podniesiona do potegi 3 wynosi %.2f\n", wartosc, wynik);
        printf("Wprowadz liczbę zmiennoprzecinkowa (0 lub liczba ujemna konczy): ");
        scanf("%f", &wartosc);
    }
    printf("-------------\n");

    // 5.8
    printf("---cwicz 8---\n");
    printf("Podaj stopnie w Fahrenheitach: "); scanf("%d", &ileStopni);
    //! zmienic warunek zakonczenia na nie jest liczba lub litera k
    while (ileStopni>0) {

        /*
        podaj dane w Fahr
        Cels -> 1.8 * Fahr + 32.0  (zadanie funkcji) (Celsjusz)
        Kelwin -> Cels + 273.16                      (Kelwin)
        */
        float Cels = Temperatura(ileStopni);
        float Kelwin = Cels + 273.16;        
        printf("%.2lf Fahrenheity to %.2f st. Celsiusza, %.2f st. Kelwina\n", ileStopni, Cels, Kelwin);
        printf("Podaj stopnie w Fahrenheitach: "); 
        scanf("%d", &ileStopni);
    }
    printf("-------------\n");

    return 0;
}

float potegaTrzecia(float x) {
    return x*x*x;
}

double Temperatura(int stopnie) {
    return 1.8*(double)stopnie + 32.0;  //fahrenheit -> celsjusz
}
