/*
    Created by carlo on 01.02.2023.
    C-Vorkurs: Erste Schritte
*/

// DATENTYPEN
/* - [signed|unsigned] char
 * - [signed|unsigned] [short|long[long]] int
 * - wchar_t (wide char)
 * - Enum-Type
 * - float
 * - [long] double
 * - void
 */
#include <stdlib.h>  // For EXIT_SUCCESS and EXIT_FAILURE
#include <stdio.h>

// size_t: unsigned (Größe des Objekts)
// ptrdiff_t: signed (Differenz zwischen Zeigern)
// intN_t, uintN_t: Variablen fester Größe

/* const double x = 123 || final int x = 123
 * enum status { off, idle, running };
 * typedef enum status stat;
 * => enum status s1 = off
 * => stat s2 = off
 * oder
 * typedef enum { off, idle, running } stat;
 * stat s3 = off
 */

// Gesetzte Bits zählen
int bitCount(unsigned x) {
    int count;
    for (count = 0; x != 0; x = x >> 1) {
        if (x & 1) { count++; }
    }
    return count;
}

//AUFGABE 2.1
long int *pl;
unsigned short arr[64];
char *a[100];
char **pp;

// AUFGABE 2.3
typedef enum {
    Toast, Schwarzbrot, Croissant, Maisfladen, Schokoladenkuchen
} types;

types gebaeck(types type) {
    switch (type) {
        case Toast:
            printf("Toast\n");
            break;
        case Schwarzbrot:
            printf("Schwarzbrot\n");
            break;
        case Croissant:
            printf("Croissant\n");
            break;
        case Maisfladen:
            printf("Maisfladen\n");
            break;
        case Schokoladenkuchen:
            printf("Schokoladenkuchen\n");
            break;
        default:
            printf("Invalid input\n");
            return EXIT_FAILURE;
    }
}