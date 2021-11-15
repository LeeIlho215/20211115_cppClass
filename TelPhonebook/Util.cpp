#include <stdio.h>

void Menu() {
	puts("=====================");
	puts("1. 전화번호 등록");
	puts("2. 전화번호 출력");
	puts("3. 전화번호 검색");
	puts("4. 전화번호 삭제");
	puts("5. 전화번호 txt파일 출력");
	puts("0. 프로그램 종료");
	puts("=====================");
}

void Flush() {
	while (getchar() != '\n')
		;
}