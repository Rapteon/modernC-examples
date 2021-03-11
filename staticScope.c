#include<stdio.h>
#include<stdlib.h>

void increment(void) {
	static unsigned int counter = 0;
	counter++;
	if(printf("%d ", counter) < 0) {
		exit(EXIT_FAILURE);
	}
}
int main(void) {
	for (int i = 0; i < 5; i++) {
		increment();
	}
	if (printf("\n") < 0) {
		exit(EXIT_FAILURE);
	}
	return 0;
}


