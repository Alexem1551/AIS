#include "Show.h"

void Show::Show_Type_Of_Housing()
{
	string type_of_housing;
	cout << "������ ��� ���������(��� ������)-->"; cin>>type_of_housing; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "|"; cout << setw(20) << left; cout << "��� �����"; cout << "|";
	cout << setw(16) << left; cout << "�-�� ��������"; cout << "|";
	cout << setw(14) << left; cout << "�-�� �����"; cout << "|";
	cout << setw(23) << left; cout << "�������"; cout << "|";
	cout << setw(19) << left; cout << "ֳ�� �� �����"; cout << "|";
	cout << setw(16) << left; cout << "����� ����(��.�)"; cout << "|"; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
	for (DataBase i : vec)
	{
		if (i.Type_Of_Housing == type_of_housing)
			i.Print();
	}
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
}

void Show::Show_Number_Of_Floors()
{
	int number_of_floors_min, number_of_floors_max;
	cout << "������ �������� �-�� ��������-->"; cin>>number_of_floors_min; cout << endl;
	cout << "������ ����������� �-�� ��������-->"; cin>>number_of_floors_max; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "|"; cout << setw(20) << left; cout << "��� �����"; cout << "|";
	cout << setw(16) << left; cout << "�-�� ��������"; cout << "|";
	cout << setw(14) << left; cout << "�-�� �����"; cout << "|";
	cout << setw(23) << left; cout << "�������"; cout << "|";
	cout << setw(19) << left; cout << "ֳ�� �� �����"; cout << "|";
	cout << setw(16) << left; cout << "����� ����(��.�)"; cout << "|"; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	for (DataBase i : vec)
	{
		if (i.Number_Of_Floors >= number_of_floors_min && i.Number_Of_Floors <= number_of_floors_max)
			i.Print();
	}
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
}

void Show::Show_Number_Of_Rooms()
{
	int number_of_rooms_min, number_of_rooms_max;
	cout << "������ �������� �-�� �����-->"; cin >> number_of_rooms_min; cout << endl;
	cout << "������ ����������� �-�� �����-->"; cin >> number_of_rooms_max; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "|"; cout << setw(20) << left; cout << "��� �����"; cout << "|";
	cout << setw(16) << left; cout << "�-�� ��������"; cout << "|";
	cout << setw(14) << left; cout << "�-�� �����"; cout << "|";
	cout << setw(23) << left; cout << "�������"; cout << "|";
	cout << setw(19) << left; cout << "ֳ�� �� �����"; cout << "|";
	cout << setw(16) << left; cout << "����� ����(��.�)"; cout << "|"; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	for (DataBase i : vec)
	{
		if (i.Number_Of_Rooms >= number_of_rooms_min && i.Number_Of_Rooms <= number_of_rooms_max)
			i.Print();
	}
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
}

void Show::Show_Address()
{
	string address;
	cout << "������ �������(��� ������)� ������ : ���_..._��������-->"; cin>> address; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "|"; cout << setw(20) << left; cout << "��� �����"; cout << "|";
	cout << setw(16) << left; cout << "�-�� ��������"; cout << "|";
	cout << setw(14) << left; cout << "�-�� �����"; cout << "|";
	cout << setw(23) << left; cout << "�������"; cout << "|";
	cout << setw(19) << left; cout << "ֳ�� �� �����"; cout << "|";
	cout << setw(16) << left; cout << "����� ����(��.�)"; cout << "|"; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	for (DataBase i : vec)
	{
		if (i.Address == address)
			i.Print();
	}
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
}

void Show::Show_Price_Per_Month()
{
	float price_per_month_min, price_per_month_max;
	cout << "������ �������� ����-->"; cin >> price_per_month_min; cout << endl;
	cout << "������ �����������  ����-->"; cin >> price_per_month_max; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "|"; cout << setw(20) << left; cout << "��� �����"; cout << "|";
	cout << setw(16) << left; cout << "�-�� ��������"; cout << "|";
	cout << setw(14) << left; cout << "�-�� �����"; cout << "|";
	cout << setw(23) << left; cout << "�������"; cout << "|";
	cout << setw(19) << left; cout << "ֳ�� �� �����"; cout << "|";
	cout << setw(16) << left; cout << "����� ����(��.�)"; cout << "|"; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	for (DataBase i : vec)
	{
		if (i.Price_Per_Month >= price_per_month_min && i.Price_Per_Month <= price_per_month_max)
			i.Print();
	}
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
}

void Show::Show_Square_Meters()
{
	float square_meters_min, square_meters_max;
	cout << "������ �������� �-�� �.�� ���������-->"; cin >> square_meters_min; cout << endl;
	cout << "������ ����������� �-�� �.�� ���������-->"; cin >> square_meters_max; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
	cout << "|"; cout << setw(20) << left; cout << "��� �����"; cout << "|";
	cout << setw(16) << left; cout << "�-�� ��������"; cout << "|";
	cout << setw(14) << left; cout << "�-�� �����"; cout << "|";
	cout << setw(23) << left; cout << "�������"; cout << "|";
	cout << setw(19) << left; cout << "ֳ�� �� �����"; cout << "|";
	cout << setw(16) << left; cout << "����� ����(��.�)"; cout << "|"; cout << endl;
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	for (DataBase i : vec)
	{
		if (i.Square_Meters >= square_meters_min && i.Square_Meters <= square_meters_max)
			i.Print();
	}
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
}
