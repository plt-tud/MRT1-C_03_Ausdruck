/* Berechnungsreihenfolge - MRT1, LUR (c) 2007 */
#include <stdio.h>

/* Ergebnis der Ausdrücke mit debugger ansehen */
int main() {
	int a;
	a = 1 + 4 * 2 / ( 3 + 1 ) ;
	a = 1 + 4 * ( 2 / ( 3 + 1 ) );
	
	a = 1 + 4 / ( 3 + 1 ) * 2 ;
	a = 1 + 4 / ( ( 3 + 1 ) * 2 );
	
	return 0;
}  
