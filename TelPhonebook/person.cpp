#include <stdio.h>
#include "person.h"



void InputPerson(Person* p) {
	printf("����� �̸� : ");
	gets_s(p->name, 20);
	printf("����� ��ȭ��ȣ : ");
	gets_s(p->phone, 20);
}

void PrintPerson(Person* p) {
	printf("�̸� : %s\n��ȭ��ȣ : %s\n", p->name, p->phone);
}