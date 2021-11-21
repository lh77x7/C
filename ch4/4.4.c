#include <stdio.h>
#define PI 3.14159
int main(void) {
    float powierzchnia, obwod, promien;

    printf("Ile wynosi promien twojej pizzy?\n");
    scanf("%f", &promien);
    powierzchnia = PI * promien * promien;
    obwod = 2.0 * PI * promien;
    printf("Podstawowe parametry Twojej pizzy to:\n");
    printf("Obwod = %1.2f, powierzchnia = %1.2f\n", obwod, powierzchnia);

    return 0;
}