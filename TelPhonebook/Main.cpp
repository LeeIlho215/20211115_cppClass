#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include "Util.h"
#include "PersonArray.h"

int main() {
	PersonArray pa;
	int run = 1;
	InitPersonArray(&pa);
	while (run) {
		Menu();
		printf("메뉴를 선택하세요 : ");
		char sel = getchar(); Flush();
		//char sel = _getch();
		switch (sel)
		{
		case '1':
			AddPersonArray(&pa);
			break;
		case '2':
			PrintPersonArray(&pa);
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

	UninitPersonArray(&pa);
}