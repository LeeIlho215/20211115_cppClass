#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Util.h"

int main() {
	int run = 1;
	while (run) {
		Menu();
		printf("메뉴를 선택하세요\n");
		char sel = getchar();
		switch (sel)
		{
		case '1':
			printf("기능1\n");
			break;
		case '2':
			printf("기능2\n");
			break;
		case '3':
			printf("기능3\n");
			break;
		case '4':
			printf("기능4\n");
			break;
		case '5':
			printf("기능5\n");
			break;
		case '0':
			run = 0;
			break;

		}
	}
}