#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

int main() {
	char c;
	int x, y, z;
	double d, e, f;
	char* ptr;
	char s1[100], s2[100];

	//a)
	printf("Print letter:");
	scanf("%c", &c);
	printf("Letter \"%c\" in big register is: ", c);
	c = toupper(c);
	printf("\"%c\"\n\n", c);

	//b)
	printf("Parametr c with simbl  is %c\n%s %s\n\n", c, isdigit (c) ? "is a": "is not a", "number" );

	//c)
	printf("%ld\n\n", atol("123456"));

	//d)
	printf("Parametr c is \"%c\" and %s control simbul\n\n", c, iscntrl(c) ? "is": "is not" );

	//e)
	printf("Enter a line of text:");
	fgets(s1, 10, stdin);
	printf("This text is:");
	fputs(s1, stdout);
	//f)

	//g)

	//h)

	//i)

	//j)

	//k)

	//l)

	//m)

	//n)

	//o)

	//p)

	//q)

	//r)

	//s)

	//t)

	//u)

	//v)

	//w)

	return 0;
}