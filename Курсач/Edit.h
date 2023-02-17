#pragma once
#include "DataBase.h"

class Edit :public virtual DataBase
{
public:
	Edit(string type_of_housing, int number_of_floors, int number_of_rooms, string address, float price_per_month, float square_meters) : 
		DataBase(type_of_housing, number_of_floors, number_of_rooms, address, price_per_month, square_meters) {};
	Edit() : DataBase() {};
	void Edit_Type_Of_Housing();
	void Edit_Number_Of_Floors();
	void Edit_Number_Of_Rooms();
	void Edit_Address();
	void Edit_Price_Per_Month();
	void Edit_Square_Meters();
};