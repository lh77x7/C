/* 
    rozwiazanie 1-8 z rozdziału 5
*/

/*

1. Użyj pętli while do przeliczania czasu w minutach na godziny i minuty. Utwórz
stałą symboliczną dla liczb 60 przy pomocy #define lub const i pamiętaj o zapewnieniu
sposobu zakończenia pętli.

2. Napisz program, który prosi o podanie liczby całkowitej, a następnie wyświetla 
wszystkie liczby całkowite od tej wartości do wartości większej od 10 (włącznie).
(Jeśli zatem wpisano liczbę 5, program wyświetla liczby od 5 do 15).

3. Napisz program, który prosi użytkownika o wprowadzenie liczby dni, a następnie
zamienia je na tygodnie i dni. Dla przykadu, program zamieni 18 dni na 2 tygodnie 
i 4 dni. Wyświetl wynik w następujące postaci:

    18 dni to 2 tygodnie, 4 dni.

W programie wykorzystaj pętlę while, aby użytkownik mógł wielokrotnie wprowadzać
liczbę dni. Koniec programu nastąpi po wprowadzeniu wartości 0 lub -20.

4. Napisz program, który prosi użytkownika o wprowadzenie wzrostu w centymetrach,
a następnie wyświetla tę wartość w centymetrach, w stopach i calach (dopuszczając
ułamkowe wartości centymetrów i cali). Użytkownik powinien móc podawać wzrost 
w pętli, dopóki nie wprowadzi wartości niedodatniej. Przykład działania programu
przedstawiono poniżej:

    Podaj wzrost w centymerach: 182
    182.0 cm = 5 stop, 11.7 cali
    Podaj wzrost w centymetrach (<=0 - koniec): 168
    168.0 cm = 5 stop, 6.1 cali
    Podaj wzrost w centymetrach (<= 0 - koniec): 0
    Do widzenia!

5. Zmień program addemup.c (listing 5.13), który oblicza sumę pierwszych 20 liczb
całkowitych (jeżeli wolisz, możesz traktować go jak program, który oblicza ile
pieniędzy otrzymasz za 20 dni, jeżli zarobisz 1$ za pierwszy dzień, 2$ za drugi,
3$ dolary za trzeci itd.). Zmodyfikuj program tak, by pozwalał użytkownikowi określić
zakres przeprowadzanych obliczeń. Oznacza to, że należy zamienić stałą 20 na zmienną
podawaną przez użytkownika.

6. Teraz zmodyfikuj powyższy program tak, by obliczał sumę kwadratów liczb całkowitych.
(Jeżeli wolisz, możesz traktować go jak program, który oblicza ile pieniędzy otrzymasz,
jeśli zarobisz 1$ za pierwszy dzień, 4$ za drugi, 9$ za trzeci itd. Wygląda to na
lepszy interes!). Język C nie zawiera funkcji obliczających kwadrat, skorzystaj więc
z innego wzoru - kwadrat liczb n, to n*n.

7. Napisz program, który pobiera liczbę typu float i wyświetla jej wartość podniesioną
do trzeciej potęgi. Wykorzystaj w tym celu zaprojektowaną przez siebie funkcję, 
która podniesie pobraną wartość do sześcianu i wyświetli ją. Funkcja main() 
powinna przekazywać pobraną wartość (jako argument) do Twojej funkcji.

8. Napisz program, który pobiera wartość temperatury w Fahrenheitach. Program powinien
pobierać wartości typu double i przekazywać (jako argument) własnej funkcji
użytkownika o nazwie Temperatura(). Funkcja ta powinna obliczyć odpowiednią wartość
w skalach Celsjusza i Kelwina, a następnie wyświetlić wszystkie trzy wartości, 
z zachowaniem precyzji dwóch miejsc po przecinku. Funkcja powinna zwracać każdą 
wartość w skali. Oto formuła zamieniająca stopnie w skali Fahrenheita na Celsjusza:

    Celsjusz = 1.8 * Fahrenheit + 32.0

Skala Kelwina, powszechnie używana w nauce, jest skalą, w której 0 odpowiada zeru 
absolutnemu, czyli dolnej granicy temperatur. Oto formuła zamieniająca wartości
w skali Celsjusza na Kelwina:

    Kelwin = Celsjusz + 273.16

Funkcja Temperatura() powinna używać słowa kluczowego const dla symboli 
reprezentujących stałe występujące w powyższych formułach. Natomiast main()
powinna stosować pętle, aby umożliwić użytkownikowi wielokrotne zastosowanie
funkcji konwertującej. Pętla kończy swój cykl, gdy użytkownik wprowadzi - 
zamiast temperatury - literę k (koniec) lub inną wartość nie będącą liczbą.

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
