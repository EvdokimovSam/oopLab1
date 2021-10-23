#include "Set.h"
#include <iostream>
#include <vld.h>

using namespace std;


int main()
{
	int Power;
	cout << "Enter power a:" << endl;
	cin >> Power;
	try
	{
		if (Power == 0) throw 0;
	}
	catch (const int& e)
	{
		cout << "The ðower of The Set shouldn't be 0!" << endl;
		return 0;

	}

	Set a(Power);
	for (int i = 0; i <a.power(); i++)
	{
		cout << "Enter element [" << i + 1 << "]   ";
		unsigned int value;
		cin >> value;
		a.insert(i, value);
	}

	cout << "Enter power b:" << endl;
	cin >> Power;

	try
	{
		if (Power == 0) throw 0;
	}
	catch (const int& e)
	{
		cout << "The ðower of The Set shouldn't be 0" << endl;
		return 0;

	}

	Set b(Power);
	for (int i = 0; i < b.power(); i++)
	{
		cout << "Enter element [" << i + 1 << "]   ";
		unsigned int value;
		cin >> value;
		b.insert(i, value);
	}
	
	
	cout << "intersection: " << endl;
	Set c = a.Intersection(b);
	c.Output();
	


	return 0;
	system("Pause");
}
