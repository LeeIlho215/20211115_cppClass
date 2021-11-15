#include <stdio.h>
#include <string.h>
#include "PersonArray.h"


void InitPersonArray(PersonArray* pa) {
	pa->perCount = 0;
}

void UninitPersonArray(PersonArray* pa) {
	pa->perCount = 0;
}

void AddPersonArray(PersonArray* pa) {
	Person per;
	InputPerson(&per);
	pa->arr[pa->perCount++] = per;
}

void PrintPersonArray(PersonArray* pa) {
	for (int i = 0; i < pa->perCount; i++) {
		printf("==========================\n");
		PrintPerson(&pa->arr[i]);
		printf("==========================\n");
	}
}

void SearchPersonArray(PersonArray* pa) {
	char name[20];
	printf("검색할 이름을 입력해주세요 : ");
	gets_s(name, 20);
	for (int i = 0; i < pa->perCount; i++) {
		if (strcmp(name, pa->arr[i].name) == 0) {
			printf("찾은 이름 : [%d] :", i);
			PrintPerson(&pa->arr[i]);
			break;
		}
	}
}

void RemovePersonArray(PersonArray* pa) {
	char name[20];
	printf("삭제할 이름을 입력해주세요 : ");
	gets_s(name, 20);
	for (int i = 0; i < pa->perCount; i++) {
		if (strcmp(name, pa->arr[i].name) == 0) {
			printf("삭제할 이름 : [%d] :", i);
			
			for (int j = i; pa->perCount; i++) {
				pa->arr[j] = pa->arr[j + 1];
			}
			--pa->perCount;
			printf("삭제 완료");

			break;
		}
	}
}

void WriteTextPersonArray(PersonArray* pa) {
	FILE* fp = NULL;

	fopen_s(&fp, "telephonebook.txt", "w");

	if (fp == NULL)
		return;

	for (int i = 0; i < pa->perCount; i++) {
		fprintf(fp, "Person : [%d]-name : %s, phone:%s\n", pa->arr[i].name, pa->arr[i].phone);
	}

	fclose(fp);
}