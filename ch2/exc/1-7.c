/* cwiczenia 1 - 4 */

#include <stdio.h>
void fun1(void);
void fun2(void);
void usmiech(void);
void raz_trzy(void);
void dwa(void);

int main(void) {
    int wiek, liczba, licznik=0;
    /* cwiczenie 1 */
    printf("\n===cwiczenie 1===\n");
    printf("Hans Kloss\n");
    printf("Hans\nKloss\n");
    printf("Hans"); printf(" Kloss\n");
    printf("=================");
    /* ==================== */

    /* cwiczenie 2 */
    printf("\n===cwiczenie 2===\n");
    printf("Imie: Leszek\n");
    printf("Adres zamieszkania: Sudecka 4/2 48-100 Glubczyce. Polska\n");
    printf("======================");
    /* ==================== */

    /* cwiczenie 3 */
    printf("\n===cwiczenie 3===\n");
    printf("Przeliczenie wielu w latach na wiek w dniach (jako liczba calkowita i bez uwzglednienia przestepnych lat.)\n");
    printf("Moj wiek to 34 lata i 85 dni (stan na 16.11.2021).\n");
    wiek = (34 - 9) * 365 + 85;
    printf("Moj wiek w dniach wynosi %d dni!\n", wiek);
    printf("=====================");
    /* ==================== */

    /* cwiczenie 4 */
    printf("\n===cwiczenie 4===\n");
    printf("\nPanie Janie!\n");
    fun1();
    fun2();
    printf("=====================");
    /* ==================== */    

    /* cwiczenie 5 */
    liczba = 10;
    printf("\n===cwiczenie 5===\n");
    printf("Liczba = %d, podwojona liczba = %d, kwadrat liczby = %d\n", liczba, 2*liczba, liczba*liczba);
    printf("=====================\n");
    /* ==================== */


    /* cwiczenie 6 */
    /*for (int i=3, j=3; i>0, j>0; i--) {
            usmiech();
            j--;
        
    }*/

    printf("\n===cwiczenie 6===\n");
    usmiech(); usmiech(); usmiech(); 
    printf("\n");
    usmiech(); usmiech();
    printf("\n");
    usmiech();
    printf("\n");
    printf("=====================\n");
    /* ===================== */

    /* cwiczenie 7 */

    printf("\n===cwiczenie 7===\n");
    printf("zaczynamy: \n");
    raz_trzy();
    printf("koniec!\n");
    printf("=====================\n");
    /* ======================*/

    return 0;
}

void fun1(void) {
    printf("Panie Janie!\n");
}

void fun2(void) {
    printf("Rano wstan!\n");
}

void usmiech(void) {
    printf("Usmiech! ");
}

void raz_trzy(void) {
    printf("jeden\n");
    dwa();
    printf("trzy\n");    
}

void dwa(void) {
    printf("dwa\n");
}