#pragma once
#include <stdio.h>
#include "person.h"

typedef struct _personArray {
	Person arr[1000];
	int perCount;
} PersonArray;

void InitPersonArray(PersonArray* pa);
void UninitPersonArray(PersonArray* pa);
void AddPersonArray(PersonArray* pa);
void PrintPersonArray(PersonArray* pa);

