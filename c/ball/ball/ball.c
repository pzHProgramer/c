#include<stdio.h>
#include<stdlib.h>
#include<windows.h>

void init(int bottom,int right) {
	for (int i = 0; i <= bottom + 1; i++) {
		for (int j = 0; j <= right + 1; j++) {
			if (j == right + 1 && i != bottom + 1) {
				printf("|");
			}
			if (i == bottom + 1) {
				printf("_");
			}
		}
	}
}


int main() {
	int i, j;
	int x = 5;
	int y = 0;
	int top = 0;
	int bottom = 20;
	int left = 0;
	int right = 10;
	int x_velocity = 1;
	int y_velocity = 1;

	while (1) {
		x = x + x_velocity;
		y = y + y_velocity;

		system("cls");
		//init(bottom, right);
		for (i = 0; i < x; i++) {
			printf("\n");
		}
		for (j = 0; j < y; j++) {
			printf(" ");
		}
		printf("o");
		printf("\n");
		/*windows.h库的函数,控制速度*/
		Sleep(50);

		if (x == top || x == bottom) {
			x_velocity = -x_velocity;
		}
		if (y == left || y == right) {
			y_velocity = -y_velocity;

		}
	}

	return 0;


}