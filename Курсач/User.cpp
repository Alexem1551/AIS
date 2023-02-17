#include "User.h"

//USER---------------------------------------------------------------------

void User::Show_All(string path)
{
	methods.Search(path);
	methods.Show_all();
	vec.clear();

}

void User::Show(string path)
{
	methods.Show(path);
}

//ADMIN--------------------------------------------------------------------

string Admin::SetPath()
{
	return methods.SetPath();
}

void Admin::AddBD()
{
	methods.NewDataBase();
}

void Admin::Add(string path)
{
	methods.Search(path);
	methods.Add();
	methods.Save(path);
}

void Admin::Delete(string path)
{
	methods.Search(path);
	methods.Dellete(path);
	methods.Save(path);
}

void Admin::Edit(string path)
{
	methods.Edit(path);
}
