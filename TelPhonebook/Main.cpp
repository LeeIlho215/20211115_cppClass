#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void Menu() {
	puts("=====================");
	puts("1. ��ȭ��ȣ ���");
	puts("2. ��ȭ��ȣ ����");
	puts("3. ��ȭ��ȣ ����");
	puts("4. ��ȭ��ȣ ����");
	puts("5. ��ȭ��ȣ txt���� ���");
	puts("0. ���α׷� ����");
	puts("=====================");
}

int main() {
	int run = 1;
	while (run) {
		printf("�޴��� �����ϼ���\n");
		Menu();
		char sel = getchar();
		switch (sel)
		{
		case '1':
			printf("���1\n");
			break;
		case '2':
			printf("���2\n");
			break;
		case '3':
			printf("���3\n");
			break;
		case '4':
			printf("���4\n");
			break;
		case '5':
			printf("���5\n");
			break;
		case '0':
			run = 0;
			break;

		}
	}
}