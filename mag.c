#include <stdio.h>

int main(void) {


	for (int num = 1; num <= 9; num++) {
		int mag[1000], n = 0, l = num, pl = 0;

		mag[n++] = l;
		while (1) {
			if (n >= 1000) {
				printf("Oops, number is bigger than we expected :(\n");
				break;
			}
			l = l * 2 + pl;
			pl = l / 10;
			l = l % 10;
			if (l == num && pl == 0 && l != 0)
				break;
			mag[n++] = l;
		}

		for (int i = 0; i < n; i++)
			printf("%i", mag[n - i - 1]);
		printf("\n");
	}

	return 0;
}