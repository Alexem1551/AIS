#include "Methods.h"


void Methods::Show_all()
{
	 cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
	 cout << "|"; cout << setw(20) << left; cout << "Тип житла"; cout<<"|";
	 cout << setw(16) << left; cout << "К-ть поверхів"; cout << "|";
	 cout << setw(14) << left; cout << "К-ть кімнат"; cout << "|";
	 cout << setw(23) << left; cout << "Адресса"; cout << "|";
	 cout << setw(19) << left; cout << "Ціна за місяць"; cout << "|";
	 cout << setw(16) << left; cout << "Розмір прим(кв.м)"; cout << "|"; cout << endl;
	 cout << "--------------------------------------------------------------------------------------------------------------------" << endl;

	for (int i = 0; i < vec.size(); i++)
	{
		cout << "|"; cout << setw(19) << left; cout << vec[i].Type_Of_Housing << " "; cout << "|";
		cout << setw(15) << left; cout << vec[i].Number_Of_Floors << " "; cout << "|";
		cout << setw(13) << left; cout << vec[i].Number_Of_Rooms << " "; cout << "|";
		cout << setw(22) << left; cout << vec[i].Address << " "; cout << "|";
		cout << setw(18) << left; cout << vec[i].Price_Per_Month << " "; cout << "|";
		cout << setw(17) << left; cout << vec[i].Square_Meters; cout << "|" << endl;
	}
	cout << "--------------------------------------------------------------------------------------------------------------------" << endl;
}

void Methods::Add()
{
	string type_of_housing, address;
	int number_of_floors, number_of_rooms;
	float price_per_month, square_meters;
	cout << "Введіть тип приміщення(без пробілів)-->";   cin >> type_of_housing; 
	cout << "Введіть к-ть поверхів приміщення-->"; 
	try
	{
		cin >> number_of_floors;
		if (number_of_floors == 0)
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
	cout << "Введіть к-ть кімнат у приміщенні-->"; 
	try
	{
		cin >> number_of_rooms;
		if (number_of_rooms == 0)
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
	cout << "Введіть адрессу(без пробілів)у форматі : вул_..._квартира-->"; cin>>address;
	cout << "Введіть ціну за місяць оренди-->"; 
	try
	{
		cin >> price_per_month;
		if (price_per_month == 0)
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
	cout << "Введіть розмір приміщення(кв.м)-->"; 
	try
	{
		cin >> square_meters;
		if (square_meters == 0)
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
	vec.push_back(DataBase(type_of_housing, number_of_floors, number_of_rooms, address, price_per_month, square_meters));
	cout << "ЗАПИС ДОДАНО!"; 

}

void Methods::Dellete(string path)
{
	string type_of_housing, address; int buf = 0;
	cout << "Для того щоб знайти потрібний запис:" << endl;
	cout << "Введіть тип приміщення-->"; cin>>type_of_housing;
	cout << "Введіть адрессу(без пробілів)у форматі : вул_..._квартира-->"; cin >> address;
	vector<DataBase>::iterator it = vec.begin();
	for (DataBase i : vec)
	{
		if (i.Type_Of_Housing == type_of_housing && i.Address == address)
		{
			vec.erase(it); buf++;
			break;
		}
		it++;
	}
	if (buf == 0)
	{
		cout << "Такого запису не знайдено.Перевырте правильність введення данних." << endl;
	}
	else
	{ 
	cout << "ЗАПИС ВИДАЛЕНО!" << endl;
	}
}
void Methods::Show(string path)
{
	int q=1;
	while (q != 7)
	{
		cout << "Введіть ~(1)~ щоб вивести на екран всі записи з обраними типом нерухомості" << endl;
		cout << "Введіть ~(2)~ щоб вивести на екран всі записи з обраною к-тю поверхів" << endl;
		cout << "Введіть ~(3)~ щоб вивести на екран всі записи з обраною к-тю кімнат" << endl;
		cout << "Введіть ~(4)~ щоб вивести на екран всі записи з обраною адресою" << endl;
		cout << "Введіть ~(5)~ щоб вивести на екран всі записи з обраною вартістю за місяць" << endl;
		cout << "Введіть ~(6)~ щоб вивести на екран всі записи з обраною квадратурою приміщення" << endl;
		cout << "Введіть ~(7)~ щоб повернутися до попереднього меню" << endl;
		cout << "Оберіть дію-->"; 
		try
		{
			cin >> q;
			if (q == 0)
			{
				throw exception("Некоректне значення параметру!");
			}
			system("cls");
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
		switch (q)
		{
		case 7: {break;}
		case 1:
		{
			show.Search(path);
			show.Show_Type_Of_Housing();
			vec.clear();
			break;
		}
		case 2:
		{
			show.Search(path);
			show.Show_Number_Of_Floors();
			vec.clear();
			break;
		}
		case 3:
		{
			show.Search(path);
			show.Show_Number_Of_Rooms();
			vec.clear();
			break;
		}
		case 4:
		{
			show.Search(path);
			show.Show_Address();
			vec.clear();
			break;
		}
		case 5:
		{
			show.Search(path);
			show.Show_Price_Per_Month();
			vec.clear();
			break;
		}
		case 6:
		{
			show.Search(path);
			show.Show_Square_Meters();
			vec.clear();
			break;
		}
		default:
			if (q != 7) {
				cout << "Не існує такої дії =(" << endl;
				break;
			}
			
		}
		vec.clear();
		cout << "Продовжити роботу? " << endl;
		cout<< "Так - введіть ~(1)~ , повернутися до попереднього меню - введіть ~(7)~" << endl;
		cout << "Оберіть дію-->"; cin >> q; system("cls");
	}
}
void Methods::Edit(string path)
{
	int q=1;
	while (q != 7)
	{
		cout << "Введіть ~(1)~ щоб редагувати тип нерухомості" << endl;
		cout << "Введіть ~(2)~ щоб редагувати к-ть поверхів" << endl;
		cout << "Введіть ~(3)~ щоб редагувати к-ть кімнат" << endl;
		cout << "Введіть ~(4)~ щоб редагувати адрессу" << endl;
		cout << "Введіть ~(5)~ щоб редагувати вартість за місяць" << endl;
		cout << "Введіть ~(6)~ щоб редагувати квадратуру приміщення" << endl;
		cout << "Введіть ~(7)~ щоб повернутися до попереднього меню " << endl;
		cout << "Оберіть дію-->"; 
		try
		{
			cin >>q;
			if (q == 0)
			{
				throw exception("Некоректне значення параметру!");
			}
			system("cls");
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
		switch (q)
		{
		case 7: {break; }
		case 1:
		{
			edit.Search(path);
			edit.Edit_Type_Of_Housing();
			edit.Save(path);
			break;
		}
		case 2:
		{
			edit.Search(path);
			edit.Edit_Number_Of_Floors();
			edit.Save(path);
			break;
		}
		case 3:
		{
			edit.Search(path);
			edit.Edit_Number_Of_Rooms();
			edit.Save(path);
			break;
		}
		case 4:
		{
			edit.Search(path);
			edit.Edit_Address();
			edit.Save(path);
			break;
		}
		case 5:
		{
			edit.Search(path);
			edit.Edit_Price_Per_Month();
			edit.Save(path);
			break;
		}
		case 6:
		{
			edit.Search(path);
			edit.Edit_Square_Meters();
			edit.Save(path);
			break;
		}
		default:
			if (q != 7) {
				cout << "Не існує такої дії =(" << endl;
				break;
			}
		}
		vec.clear();
		cout << "Продовжити роботу? " << endl;
		cout << "Так - введіть ~(1)~ , повернутися до попереднього меню - введіть ~(7)~" << endl;
		cout << "Оберіть дію-->"; cin >> q; system("cls");
	}
}
Methods::Methods(string type_of_housing, int number_of_floors, int number_of_rooms, string address, float price_per_month, float square_meters)
{
	Type_Of_Housing = type_of_housing;
	Number_Of_Floors = number_of_floors;
	Number_Of_Rooms = number_of_rooms;
	Address = address;
	Price_Per_Month = price_per_month;
	Square_Meters = square_meters;
}

Methods::Methods()
{
	Type_Of_Housing = "";
	Number_Of_Floors = 0;
	Number_Of_Rooms = 0;
	Address = "";
	Price_Per_Month = 0;
	Square_Meters = 0;
}
