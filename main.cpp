#include <stdio.h>
#include <Windows.h>
#include <locale.h>

void main(int) {
	setlocale(0, "");
	for (int i = 0; i < 256; i++)
		printf("#%i - %c\n", i, i);
	system("pause");
}
