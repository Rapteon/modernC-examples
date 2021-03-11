#include<stdlib.h>
#include<stdio.h>

int main(void) {
	char p;
	unsigned char q;
	signed char r;

	/*
	 * 'unsigned char' and 'signed char' can be used to represent small integers,
	 * but not char.
	 */

	printf("Select an Option\n");
	printf("1\tEat\n");
	printf("2\tSleep\n");
	printf("3\tRepeat\n");
	printf("[1/2/3]?\n: ");
	scanf("%hhd", &q);

	printf("You selected %d\n", q);

	printf("Select another Option\n");
	printf("Eat\n");
	printf("Sleep\n");
	printf("Repeat\n");
	printf("[E/S/T]?\n: ");

	getc(stdin); //Reading the newline.
	scanf("%c", &p);

	printf("You selected %c\n", p);

	exit(EXIT_SUCCESS);
}
