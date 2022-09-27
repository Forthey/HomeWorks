#include <stdio.h>

void RemoveComments(char str[]) {
	int begin = 0, end = 0;
	while (1) {
		while (str[begin] != 0 && (str[begin] != '/' || str[begin + 1] != '*'))
			begin++;
		if (str[begin] != 0 && str[begin + 1] != 0 && str[begin + 2] != 0) {
			end = begin + 2;
			while (str[end] != 0 && (str[end] != '*' || str[end + 1] != '/'))
				end++;
			if (str[end] != 0) {
				int i = 1;
				end++;
				while (str[end + i - 1] != 0)
					str[begin + i - 1] = str[end + i], i++;
			}
			else
				break;
		}
		else
			break;
	}
}

int main(void) {
	char str[101];
	printf("The program removes from the string everything between the pair \"/*, */\"\n");

	while (1) {
		printf("Input string: ");
		gets(str);

		if (str[0] == 0)
			break;

		RemoveComments(str);

		printf("%s\n", str);
	}

	return 0;
}