#pragma once
#include "DataBase.h"

class Show : public virtual DataBase
{
public:
	Show(string type_of_housing, int number_of_floors, int number_of_rooms, string address, float price_per_month, float square_meters) : 
		DataBase(type_of_housing, number_of_floors, number_of_rooms, address,price_per_month,square_meters) {};
	Show() :DataBase() {};
	void Show_Type_Of_Housing();
	void Show_Number_Of_Floors();
	void Show_Number_Of_Rooms();
	void Show_Address();
	void Show_Price_Per_Month();
	void Show_Square_Meters();
};