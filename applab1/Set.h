#include <iostream> 
#pragma once
class Set
{
private:
	//Поля
	int Power;
	unsigned int* Arr = nullptr;

public:
	//Конструкторы
	Set();

	Set(int _Power);

	Set(const Set& p);
	
	//Методы
	Set Intersection(Set const& b); //метод нахождения пересечений
	void realloc(int new_pow); //граммотное выделение памяти
	int power() const; //возврат мощности
	void Output(); //вывод массива
	unsigned int& at(size_t index); //возврат элемента по индексу
	void insert(size_t index, unsigned int value); //добавление элемента по индексу
	//Деструктор
	~Set();
};

