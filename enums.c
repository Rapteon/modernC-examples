#include<stdio.h>
#include<stdlib.h>

/*
 * This is an enum. Also called an enumerable set.
 * By default, they are assigned values starting with 0,
 * unless custom values are specified.
 * If we assign the value 3 to mon, and no other values 
 * for the consecutive constants, the values 4, 5 6 and so on
 * will be assigned. Custom values for each constant can also
 * be assigned. Note that only integer values can be used.
 */

//Globally declared enums.
enum days { mon = 1, tue, wed, thu, fri, sat, sun };
enum directions { north = 0, north_east = 45, east = 90, south_east = 135, south = 180, south_west = 225, west = 270, north_west = 315};

void which_day(void);
void which_direction(void);

int main(void) {
	which_day();
	which_direction();

	exit(EXIT_SUCCESS);
}

void which_day(void) {
	unsigned char day_of_week;

	printf("What day is it?\n");
	printf("1\tMonday\n");
	printf("2\tTuesday\n");
	printf("3\tWednesgay\n");
	printf("4\tThursday\n");
	printf("5\tFriday\n");
	printf("6\tSaturday\n");
	printf("7\tSunday\n");
	printf("[1/2/3/4/5/6/7]?\n: ");
	
	scanf("%hhd", &day_of_week);
	

	switch(day_of_week) {
		case mon:
			printf("It's Monday.\n");
			break;
		case tue:
			printf("It's Tuesday.\n");
			break;
		case wed:
			printf("It's Wednesday.\n");
			break;
		case thu:
			printf("It's Thursday.\n");
			break;
		case fri:
			printf("It's Friday.\n");
			break;
		case sat:
			printf("It's Saturday.\n");
			break;
		case sun:
			printf("It's Sunday.\n");
		default:
			printf("I don't know that day.\n");
	}
}

void which_direction(void) {
	unsigned short direction;
	printf("Which direction are you facing?\n");
      	printf("1\t North\n");
	printf("2\t North-East\n");
	printf("3\t East\n");
	printf("4\t South-East\n");
	printf("5\t South\n");
	printf("6\t South-West\n");
	printf("7\t West\n");
	printf("8\t North-West\n");
	printf("[1/2/3/4/5/6/7/8]?\n: ");

	scanf("%hd", &direction);

	switch(direction) {
		case 1:
			printf("North is %hd degrees.\n", north);
			break;
		case 2:
			printf("North-East is %hd degrees.\n", north_east);
			break;
		case 3:
			printf("East is %hd degrees.\n", east);
			break;
		case 4:
			printf("South-East is %hd degrees.\n", south_east);
			break;
		case 5:
			printf("South is %hd degrees.\n", south);
			break;
		case 6:
			printf("South-West is %hd degrees.\n", south_west);
			break;
		case 7:
			printf("West is %hd degrees.\n", west);
			break;
		case 8:
			printf("North-West is %hd degrees.\n", north_west);
			break;
		default:
			printf("I don't know that direction.\n");
	}
}
