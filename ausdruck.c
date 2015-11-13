/* Berechnungsreihenfolge - MRT1, LUR (c) 2007 */
#include <stdio.h>
 
/* Question 1: Who does the calculation? Your Compiler or your micro cntroller? 
 * Question 2: What results do you expect in a,b,c,d */
void fixed_int_arithmetics() {
	int a, b, c, d;
	a = 1 + 4 * 2 / ( 3 + 1 ) ;
	b = 1 + 4 * ( 2 / ( 3 + 1 ) );
	c = 1 + 4 / ( 3 + 1 ) * 2 ;
	d = 1 + 4 / ( ( 3 + 1 ) * 2 );
}

/* Question 3: What results do you expect in a,b when called with c=2,d=3.1415,e=4 */
/* Question 4: What results do you expect in a,b when called with c=2,d=3.1415,e=100.000 */
void mixed_type_arithmetics(int c, double d, short e) {
	double a;
	int b;
	a = c * d + e;
	b = c * d + e;
}

int main() {
	fixed_int_arithmetics();
	mixed_type_arithmetics(2,3.1415,4);
	mixed_type_arithmetics(2,3.1415,100000);
	return 0;
}  
