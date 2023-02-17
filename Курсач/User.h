#pragma once
#include "Methods.h"

class User : protected Methods
{
private:
	Methods methods;
public:
	User(string type_of_housing, int number_of_floors, int number_of_rooms, string address, float price_per_month, float square_meters) : 
		Methods(type_of_housing, number_of_floors, number_of_rooms, address, price_per_month, square_meters) {};
	User() : Methods() {};

	void Show_All(string path);
	void Show(string path);

};

class Admin : public User
{
private:
	Methods methods;
public:
	Admin(string type_of_housing, int number_of_floors, int number_of_rooms, string address, float price_per_month, float square_meters) : 
		User(type_of_housing, number_of_floors, number_of_rooms, address, price_per_month, square_meters) {};
	Admin() : User() {};
	string SetPath();
	void AddBD();
	void Delete(string path);
	void Edit(string path);
	void Add(string path);
};