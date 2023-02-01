/*
    Created by carlo on 01.02.2023.
    C-Vorkurs: Erste Schritte
*/

// IMPORTS
#include <stdio.h>
#include <math.h>

// DEKLARATION
int power(int, int);

int sinus();

int print_test();


// DEFINITION
// MAIN
int l01() {
    sinus();
    print_test();
    return 0;
}

/**
 * Calculates the power of a @p number
 *
 * @param base The base number.
 * @param n The power of @p.
 * @return The base to the power of p
 */
int power(int base, int n) {
    int i, p = 1;
    for (i = 1; i <= n; i++) {
        p *= base;
    }
    return p;
}

int sinus() {
    double x = 0;
    while (x < M_PI_2) {
        printf("sin(%g) = %g\n", x, sin(x));
        x += 0.05;
    }
    return 0;
}

int print_test() {
    // Standardausgabe: printf(const char *format, ...);
    printf("Hello World!\n");

    // %s => String
    printf("%s\n", "Hallo Welt!");

    // %d => Ganze Zahl
    printf("Ergebnis: %d\n", power(2, 5));

    // %08d => 8-stellige ganze Zahl
    printf("%08d\n", 1);

    // 0x%04x => 4-stellige hexadezimale Zahl
    printf("0x%04x\n", 16);

    // %p => Pointer der Funktion
    printf("%p\n", l01);

    // %12.4f => Fließzahl mit 12 Stellen vor und 4 Stellen nach dem Komma
    printf("%12.4f\n", M_PI);

    // %12.*f => Fließzahl mit 12 Stellen vor und beliebig Stellen nach dem Komma
    // printf("%12.*f\n", 1234.5678);

    // %2$12.*1$f =>
    printf("%2$12.*1$f\n", 4, 12.3);

    // %.*s => String der Länge s bestehend aus chars in einem Array
    char tmp[] = {0x68, 0x75, 0x68, 0x75};
    printf("%.*s\n", (int) sizeof(tmp), tmp);
}