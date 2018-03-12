#pragma once
#ifndef proverka
#define proverka
#include <iostream>
int size;
int *mass;
int counter = 0;//обнуление счетчика
void proverca() {
	for (int i = size-1; i >0 ; i--) {
		if (mass[i]<mass[i - 1]) {
			break;
		}
		else {
			counter++;
		}
	}//проверка массива с первой позиции если один дольше последующего остановка проверки изменемие счетчика
}
#endif