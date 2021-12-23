// rand0.c - generuje liczby losowe
// stosujac przenosny algorytm ANSI C
static unsigned long int nast = 1;
int rand0(void){
    // magiczna formula generujaca liczby losowe
    nast = nast * 1103515245 + 12345;
    return (unsigned int) (nast/65536) % 32768;
}
