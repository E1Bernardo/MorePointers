﻿#include <iostream>


int main () {
	setlocale(LC_ALL, "Russian");
		int n, m;

		//Нейтральный адрес
		int* pointer;

		//pointer = 0; //рабочий, но не удобный способ/ нейтральный адрес (выглядит как простая переменная)
		//pointer = NULL; //нейтральный адрес NULL = 0, понятно, что это не просто переменная/ более удобный способ, просто костыль
		pointer = nullptr; // 0, только для адреса, специально для указания, что адрес нейтральный/ самый эффективный и правильный способ

		if (pointer != nullptr)
			std::cout << pointer << std::endl;
		else
			std::cout << "Указатель не инициализирован\n";

		//Модификации доступа указателей
		n = 7;

		//Указатель на константу. 
		//
		//Может быть объявлена не инициализированным и перенаправляться на другие области памяти
		//но с его помощью невозможно посенять значение памятиЮ на которую он направлен
		const int* pn1;
		pn1 = &n;
		// *pn1 = 5 // Ошибка!
		std::cout << *pn1 << std::endl;


		//Константный указатель или указатель - константа
		//
		// не может быть объявлен без инициализации 
		// не может быть перенаправлен на другие области памяти
		// с его помощью можно менять память на которую он направлен
		int* const pn2 = &n;
		// pn2 = &m; // ошибка
		*pn2 = 15;
		std::cout << *pn2 << std::endl;


		//Константный указатель на константу
		//
		// Не может быть объявлен без инициализации 
		// Не может быть перенаправлен на другую область памяти
		// С его помощью невозможно менять память, на которую он направлен
		// Можно только получать значения памяти, на которую он направлен
		const int* const pn3 = &n;
		// pn3 = &m; //ошибка!
		// *pn3 = 42;//ошибка!
		std::cout << *pn3 << std::endl;



		return 0;
}