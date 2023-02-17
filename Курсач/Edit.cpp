#include "Edit.h"

void Edit::Edit_Type_Of_Housing()
{
	string type_of_housing, address; int count = 0;
	cout << "Для того щоб знайти потрібний запис:" << endl;
	cout << "Введіть тип приміщення(без пробілів)-->"; cin >> type_of_housing;
	cout << "Введіть адрессу(без пробілів)у форматі : вул_..._квартира-->"; cin >> address; 
	string buf;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].Type_Of_Housing == type_of_housing && vec[i].Address == address)
		{
			cout << "Введіть відредагований запис-->"; cin >> buf;
			vec[i].Type_Of_Housing = buf;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Такого запису не знайдено.Перевырте правильність введення данних." << endl;
	}
	else
	{
		cout << "ЗАПИС РЕДАГОВАНО!" << endl;
	}
}

void Edit::Edit_Number_Of_Floors()
{
	string type_of_housing, address; int count = 0;
	cout << "Для того щоб знайти потрібний запис:" << endl;
	cout << "Введіть тип приміщення(без пробілів)-->"; cin >> type_of_housing;
	cout << "Введіть адрессу(без пробілів)у форматі : вул_..._квартира-->"; cin >> address; 
	int buf;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].Type_Of_Housing == type_of_housing && vec[i].Address == address)
		{
			cout << "Введіть відредагований запис-->";
			try
			{
				cin >> buf;
				if (buf == 0)
				{
					throw exception("Некоректне значення параметру!");
				}
			}
			catch (const std::exception& e)
			{
				cout << e.what() << endl;
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				return;
			}
			vec[i].Number_Of_Floors = buf;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Такого запису не знайдено.Перевырте правильність введення данних." << endl;
	}
	else
	{
		cout << "ЗАПИС РЕДАГОВАНО!" << endl;
	}
}

void Edit::Edit_Number_Of_Rooms()
{
	string type_of_housing, address; int count = 0;
	cout << "Для того щоб знайти потрібний запис:" << endl;
	cout << "Введіть тип приміщення(без пробілів)-->"; cin >> type_of_housing;
	cout << "Введіть адрессу(без пробілів)у форматі : вул_..._квартира-->"; cin >> address; 
	int buf;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].Type_Of_Housing == type_of_housing && vec[i].Address == address)
		{
			cout << "Введіть відредагований запис-->";
			try
			{
				cin >> buf;
				if (buf == 0)
				{
					throw exception("Некоректне значення параметру!");
				}
			}
			catch (const std::exception& e)
			{
				cout << e.what() << endl;
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				return;
			}
			vec[i].Number_Of_Rooms = buf;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Такого запису не знайдено.Перевырте правильність введення данних." << endl;
	}
	else
	{
		cout << "ЗАПИС РЕДАГОВАНО!" << endl;
	}
}

void Edit::Edit_Address()
{
	string type_of_housing, address; int count = 0;
	cout << "Для того щоб знайти потрібний запис:" << endl;
	cout << "Введіть тип приміщення(без пробілів)-->"; cin >> type_of_housing;
	cout << "Введіть адрессу(без пробілів)у форматі : вул_..._квартира-->"; cin >> address; 
	string buf;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].Type_Of_Housing == type_of_housing && vec[i].Address == address)
		{
			cout << "Введіть відредагований запис-->"; cin >> buf;
			vec[i].Address = buf;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Такого запису не знайдено.Перевырте правильність введення данних." << endl;
	}
	else
	{
		cout << "ЗАПИС РЕДАГОВАНО!" << endl;
	}
}

void Edit::Edit_Price_Per_Month()
{
	string type_of_housing, address; int count = 0;
	cout << "Для того щоб знайти потрібний запис:" << endl;
	cout << "Введіть тип приміщення(без пробілів)-->"; cin >> type_of_housing;
	cout << "Введіть адрессу(без пробілів)у форматі : вул_..._квартира-->"; cin >> address; 
	float buf;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].Type_Of_Housing == type_of_housing && vec[i].Address == address)
		{
			cout << "Введіть відредагований запис-->"; try
			{
				cin >> buf;
				if (buf == 0)
				{
					throw exception("Некоректне значення параметру!");
				}
			}
			catch (const std::exception& e)
			{
				cout << e.what() << endl;
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				return;
			}
			vec[i].Price_Per_Month = buf;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Такого запису не знайдено.Перевырте правильність введення данних." << endl;
	}
	else
	{
		cout << "ЗАПИС РЕДАГОВАНО!" << endl;
	}
}

void Edit::Edit_Square_Meters()
{
	string type_of_housing, address; int count = 0;
	cout << "Для того щоб знайти потрібний запис:" << endl;
	cout << "Введіть тип приміщення(без пробілів)-->"; cin >> type_of_housing;
	cout << "Введіть адрессу(без пробілів)у форматі : вул_..._квартира-->"; cin >> address; 
	float buf;
	for (int i = 0; i < vec.size(); i++)
	{
		if (vec[i].Type_Of_Housing == type_of_housing && vec[i].Address == address)
		{
			cout << "Введіть відредагований запис-->"; try
			{
				cin >> buf;
				if (buf == 0)
				{
					throw exception("Некоректне значення параметру!");
				}
			}
			catch (const std::exception& e)
			{
				cout << e.what() << endl;
				if (cin.fail()) {
					cin.clear();
					cin.ignore(numeric_limits<streamsize>::max(), '\n');
				}
				return;
			}
			vec[i].Square_Meters = buf;
			count++;
		}
	}
	if (count == 0)
	{
		cout << "Такого запису не знайдено.Перевырте правильність введення данних." << endl;
	}
	else
	{
		cout << "ЗАПИС РЕДАГОВАНО!" << endl;
	}
}