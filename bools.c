#include<stdlib.h>
#include<stdbool.h>

int main(void) {
	bool isRunning = true;
	unsigned short counter = 0;
	while(isRunning) {
		counter++;
		if ( ! counter % 23) {
			isRunning = !isRunning;
		}
	}
	exit(EXIT_SUCCESS);
}
