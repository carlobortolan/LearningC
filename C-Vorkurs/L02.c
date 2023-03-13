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

#include <stdint.h>
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
