#include <stdio.h>

int main(void) {
	int x = 1000;
	int y = 924;
	// ktere cislo je vetsi?
	if (x > y) {
		printf("cislo %d ", x);
		printf("je vetsi nez cislo %d", y);
	}

	if (y > x) {
		printf("cislo %d ", y);
		printf("je vetsi nez cislo %d", x);
	}
}