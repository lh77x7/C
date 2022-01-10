// rozwiazanie 14.5 - rozwiazanie zdania 5 z rodziału 14
#include <stdio.h>
#define N 4

struct daneos {
    char imie[20];
    char nazwisko[20];
};

struct student {
    struct daneos studdan;
    float oceny[3];
    float srednia;
};

int main(void){
    float suma = 0;
    float sredniaAll = 0;
    int i = 0;
    int j = 0;

    struct student studenci[N] = {
        {"Leszek", "Bialy"},
        {"Leszek", "Czarny"},
        {"Mieszko", "Pierwszy"},
        {"Boleslaw", "Chrobry"}
    };

    // podawanie ocen studentow
    while(i < N)
    {
        printf("Podaj oceny studenta: %s %s\n", studenci[i].studdan.imie, studenci[i].studdan.nazwisko);
        for(j = 0; j < 3; j++){
            printf("Ocena %d: ", j+1);
            scanf("%f", &studenci[i].oceny[j]);
            suma += studenci[i].oceny[j];
            if(j == 2)
            {
                studenci[i].srednia = suma/3;
                suma = 0;
            }
        }
        i++;
    }

    // srednia wszystkich studentow
    for(i = 0; i < N; i++){
        sredniaAll = +studenci[i].srednia;
    }
    sredniaAll = sredniaAll / N;

    // wyswietlanie wszystkich danych
    for(i = 0; i < N; i++){
        printf("----------------------------------------------------\n");
        printf("Student: %s %s\n", studenci[i].studdan.imie, studenci[i].studdan.nazwisko);
        printf("Oceny: ");
        for(j = 0; j < 3; j++) {
            printf("%.2f ", studenci[i].oceny[j]);
        }
        putchar('\n');
        printf("Srednia ocen studenta: %.2f\n", studenci[i].srednia);
        printf("----------------------------------------------------\n");
    }

    printf("Srednia wszystkich studentow: %.2f\n", sredniaAll);

    return 0;
}