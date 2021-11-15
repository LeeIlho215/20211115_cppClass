#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Menu() {
	puts("=====================");
	puts("1. 전화번호 등록");
	puts("2. 전화번호 삭제");
	puts("3. 전화번호 갬석");
	puts("4. 전화번호 식제");
	puts("5. 전화번호 txt파일 출력");
	puts("0. 프로그램 종료");
	puts("=====================");
}

int main() {
	int run = 1;
	while (run) {
		printf("메뉴를 선택하세요\n");
		Menu();
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