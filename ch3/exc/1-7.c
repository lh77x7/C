/* rozwiązanie do ćwiczeń 1-7 */

/*

1. Zbadaj, jak zachowuje się Twój system w sytuacji przepełnienia zmiennej całkowitej,
przepełnienia zmiennej zmiennoprzecinkowej i nadmiaru zmiennej zmiennoprzecinkowej.
Zastosuj metodę doświadczalną - napisz program, w którym występują te problemy.

2. Napisz program, który prosi o podanie kody ASCII, np. 66, a następnie wyświetla 
znak odpowiadający temu kodowi.

3. Napisz program, który wydaje sygnał dźwiękowy, po czym wyświetla następujący
tekst:

    Sally, przerazona niespodziewanym odglosem, krzyknela "A niech mnie, co to bylo!?"

4. Napisz program, który pobiera liczbę zmiennoprzecinkową i wyświetla ją napierw 
w postaci ułamka dziesiętnego, a potem w notacji wykładniczej. Zastosuj następujący
wzorzec dla danych wyjściowych:

    Podana liczba to 21.290000 lub 2.129000e+001.

5. W roku jest około 3.156 x 10e7 s. Napisz program, który pobiera Twój wiek w latach,
a następnie przelicza go na sekundy.

6. Masa cząsteczki wody to około 3.0x 10e-23 g. Litr wody to 1000 g. Napisz program, 
który pobiera objętość wody w litrach i wyświetla liczbę cząsteczek wody 
w tej objętości.

7. Calowi odpowiada 2.54 centymetra. Napisz program, który pyta o podanie Twojego 
wzrostu w centymetrach i wyświetla go w calach i odwrotnie.

*/

#include <stdio.h>
int main(void) {

    printf("Rozwiazania cwiczen 1-7 roz. 3\n\n");
    /*--cwicz1 */
    int i = 2147483647;  // górny zakres liczby całkowitej int
    float j = -3.4e38;   // dolny zakres liczby zmiennoprzecinkowej (-3.4e38 : 3.4e38)
    float stala = 10e10;
    printf("--cwiczenie 1--\n");
    printf("liczba int = %d, liczba int+1 = %d\n", i, i+1);
    printf("liczba float =%.2f, liczba float*10e10 = %f\n", j, j*stala);
    printf("liczba float =%.2f, liczba float+1 = %f\n", j, j+1);
    printf("---------------\n");

    /***********/

    /*--cwicz2 */
    printf("--cwiczenie 2--\n");
    char znak;
    printf("Podaj znak: \n");
    scanf("%c", &znak);
    printf("Kod znaku %c to %d.\n", znak, znak);
    printf("---------------\n");

    /***********/

    /*--cwicz3 */
    printf("--cwiczenie 3--\n");
    printf("\aSally, przerazona niespodziewanym odglosem, krzyknela \"A niech mnie, co to bylo!?\"\n");
    printf("---------------\n");

    /***********/

    /*--cwicz4 */
    float liczba;
    printf("--cwiczenie 4--\n");
    printf("Podaj liczbe zmiennoprzecinkowa: \n");
    scanf("%f", &liczba);
    printf("Podana liczba %.6f lub %e\n", liczba, liczba);
    printf("---------------\n");

    /***********/

    /*--cwicz5 */
    int lata;
    float sekundRoku = 3.156e7;
    printf("--cwiczenie 5--\n");
    printf("Przelicze twoje lata na sekundy! Podaj ile masz lat: \n");
    scanf("%d", &lata);
    printf("Zyjesz %.2f sekund!\n", sekundRoku*lata);
    printf("---------------\n");

    /***********/

    /*--cwicz6 */
    printf("--cwiczenie 6--\n");
    float czasteczkaWody = 3.0e-23;
    int ilosc, litr = 1000;
    printf("Podaj ilosc litrow: ");
    scanf("%d", &ilosc);
    printf("%d litrow to %.2e czasteczek wody!\n", ilosc, czasteczkaWody*ilosc*litr);
    printf("---------------\n");

    /***********/

    /*--cwicz7 */
    float stalaZamiany = 2.54, cale;
    int wzrost;
    printf("--cwiczenie 7--\n");
    printf("Podaj Twoj wzrost w centymetrach: \n");
    scanf("%d", &wzrost);
    printf("Twoj wzrost %d w centymetrach to %.2f w calach!\n", wzrost, wzrost/stalaZamiany);
    printf("---------------\n");
    printf("Podaj wzrost w calach: \n");
    scanf("%f", &cale);
    printf("Twoj wzrost %.2f w calach to %.2f centymetrow!\n", cale, cale*stalaZamiany);
    /***********/
    printf("============KONIEC==============");
    return 0;
}