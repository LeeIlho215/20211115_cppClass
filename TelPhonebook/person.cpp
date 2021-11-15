#include <stdio.h>
#include "person.h"



void InputPerson(Person* p) {
	printf("사람의 이름 : ");
	gets_s(p->name, 20);
	printf("사람의 전화번호 : ");
	gets_s(p->phone, 20);
}

void PrintPerson(Person* p) {
	printf("이름 : %s\n전화번호 : %s\n", p->name, p->phone);
}