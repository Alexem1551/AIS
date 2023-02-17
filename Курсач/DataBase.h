#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <fstream>
#include <iomanip>

using namespace std;

class DataBase 
{

public:
	string Type_Of_Housing;
	int Number_Of_Floors;
	int Number_Of_Rooms;
	string Address;
	float Price_Per_Month;
	float Square_Meters;
	
	string path;
	vector<DataBase> vec;
	vector<string> vec_city;
    char newCity[20];
	DataBase(string type_of_housing, int number_of_floors, int number_of_rooms, string address, float price_per_month, float square_meters);
	DataBase();
	void Search(string path);
	void Save(string path);
	void Addition(string path);
	void Print();
	void NewDataBase();
	string SetPath();
	
};

