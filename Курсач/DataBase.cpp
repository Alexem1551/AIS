#include "DataBase.h"

DataBase::DataBase(string type_of_housing, int number_of_floors, int number_of_rooms, string address, float price_per_month, float square_meters)
{
	Type_Of_Housing = type_of_housing;
	Number_Of_Floors = number_of_floors;
	Number_Of_Rooms = number_of_rooms;
	Address = address;
	Price_Per_Month = price_per_month;
	Square_Meters = square_meters;
}

DataBase::DataBase()
{
	Type_Of_Housing = "";
	Number_Of_Floors = 0;
	Number_Of_Rooms = 0;
	Address = "";
	Price_Per_Month = 0;
	Square_Meters = 0;
}

void DataBase::Search(string path)
{

	if (!vec.empty())
	{
	vec.clear();
    }
	string Type_Of_Housing="";
	int Number_Of_Floors=0;
	int Number_Of_Rooms=0;
	string Address="";
	float Price_Per_Month=0;
	float Square_Meters=0;
	
	ifstream fin;
	fin.open(path);
	while (!fin.eof())
	{
		fin >> Type_Of_Housing;
		fin >> Number_Of_Floors;
		fin >> Number_Of_Rooms;
		fin >> Address;
		fin >> Price_Per_Month;
		fin >> Square_Meters;
		if (Square_Meters != 0)
		{
			vec.push_back(DataBase(Type_Of_Housing, Number_Of_Floors, Number_Of_Rooms, Address, Price_Per_Month, Square_Meters));
			 Type_Of_Housing = "";
			 Number_Of_Floors = 0;
			 Number_Of_Rooms = 0;
			 Address = "";
			 Price_Per_Month = 0;
			 Square_Meters = 0;
		}
	}
	fin.close();
}

void DataBase::Save(string path)
{
		ofstream fout;
		fout.open(path, ofstream::trunc);
		fout.close();
		for (DataBase item : vec)
		{
			item.Addition(path);
		}
		vec.clear();
}

void DataBase::Addition(string path)
{
		ofstream fout;
		fout.open(path, ofstream::app);
		if (fout.is_open())
		{
			fout << this->Type_Of_Housing << ' ';
			fout << this->Number_Of_Floors << ' ';
			fout << this->Number_Of_Rooms << ' ';
			fout << this->Address << ' ';
			fout << this->Price_Per_Month << ' ';
			fout << this->Square_Meters  << endl;
		}
		fout.close();
}

void DataBase::Print()
{
	cout << "|"; cout << setw(19) << left; cout << Type_Of_Housing << " "; cout << "|";
	cout << setw(15) << left; cout << Number_Of_Floors << " "; cout << "|";
	cout << setw(13) << left; cout << Number_Of_Rooms << " "; cout << "|";
	cout << setw(22) << left; cout << Address << " "; cout << "|";
	cout << setw(18) << left; cout << Price_Per_Month << " "; cout << "|";
	cout << setw(17) << left; cout << Square_Meters; cout << "|" << endl;
}

void DataBase::NewDataBase()
{
	cout << "Ви створюєте нове місто!"<< endl;
	cout << "Список існуючих міст у базі:" << endl;
	cout <<  endl;
	for (int i = 0; i < vec_city.size() - 1; i++)
	{
		cout << vec_city[i]  << endl;
	}
	cout << endl;
	cout << "Введіть назву міста для якого хочете сворити БД-->";
	cin >> newCity;
	strcat_s(newCity,".txt");
	ofstream fin(newCity);
	fin.close();
	ofstream fout("city.txt", ofstream::app);
	fout << newCity; fout << endl;
	fout.close();
}

string DataBase::SetPath()
{
	if (!vec_city.empty())
	{
		vec_city.clear();
	}
	string city = ""; int choice;
	ifstream fin;
	fin.open("city.txt", ifstream::in);
	while (!fin.eof())
	{
		   fin >> city;
		
		   vec_city.push_back(string(city));
	}
	fin.close();
	cout << "                Список усіх міст,що є у базі               "<< endl;
	for (int i = 0; i < vec_city.size()-1; i++)
	{
		cout <<"Введіть ~(" << i+1 << ")~ якщо будете використовувати цю базу:  ~("<<vec_city[i]<<")~"<< endl;
	}
	cout << "Введіть номер бази,з якою хочете працювати-->";
	try
	{
		cin >> choice;
		if (choice == 0)
		{
			throw exception("Некоректне значення параметру!");
		}
		system("cls");
	}
	catch (const std::exception& e)
	{

		if (cin.fail()) {
			cin.clear();
			cin.ignore(cin.rdbuf()->in_avail());
		}
		cout << e.what() << endl;
	}
	for (int i = 0; i < vec_city.size(); i++)
	{
		if (i == choice - 1) { path = vec_city[i]; }
	}
	return path;
}



