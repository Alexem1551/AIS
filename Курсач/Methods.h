#pragma once
#include "Show.h"
#include "Edit.h"

class Methods :  public Edit, public Show
{
private:
	Edit edit;
	Show show;
public:
	Methods(string type_of_housing, int number_of_floors, int number_of_rooms, string address, float price_per_month, float square_meters) ;
	Methods() ;
	void Show_all();
	void Add();
	void Dellete(string path);
	void Show(string path);
	void Edit(string path);
};