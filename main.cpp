// ConsoleApplication1.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include <iostream>
#include "proverka.h"
int main(){
	setlocale(LC_ALL, "Russian");//установлен русский язык
	using namespace std;
	int size;
	extern int counter;
	cout << "Введите размер массива=";
	cin >> size;//ввод размера массива
	int *mass = new int[size];//динамическое выделение памяти под масстив 
	cout << "Заполните массив" << endl;
	for (int i = 0; i < size; i++) {
		cout << "(" << i << ")=";	
		cin >> mass[i];
	}//ввод массива
	proverca();//вызов функции
	if (counter=size) {
		cout << "Массив упорядочен" << endl;
	}
	else {
		cout << "Массив не упорядочен" << endl;
	}
	//проверка состояния счетчика
	system("pause");
    return 0;
}

