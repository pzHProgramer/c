#include<stdio.h>
#include<stdlib.h>

int main() {
	int i, j;
	int x = 5;
	int y = 10;
	char input;

	while (1) {
		system("cls");
		for (i = 0; i < x;i++) {
			printf("\n");
		}
		for (j = 0; j < y; j++) {
			printf(" ");
		}
		printf("*");
		printf("\n");

		scanf_s("%c", &input);
		if (input == 'a') {
			y--;
		}
		else if (input == 'd') {
			y++;
		}
		else if (input == 'w') {
			x--;
		}
		else if (input == 's') {
			x++;
		}
		
		
	}


	return 0;

}