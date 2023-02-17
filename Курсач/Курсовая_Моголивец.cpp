
#include <iostream>
#include <string>
#include <Windows.h>
#include "User.h"
#include <limits>

using namespace std;
bool login_admin()
{
    string value, password = "1";
    cout << "Введіть пароль щоб увійти як АДМІНІСТРАТОР-->"; cin >> value; system("cls");
    if (password== value)
    {
        cout << "Ви увійшли в акаунт як АДМІНІСТРАТОР! =)" << endl;
        return true;
    }
    else
    {
        cout << "Невірний пароль! =( " << endl;
        return false;
    }
}
int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    User user;
    Admin admin;
    int MainMenu = 10, UserMenu = 10, AdminMenu = 10;
   string current_path = admin.SetPath();    
    while (MainMenu != 3)
    {
        cout << "Введіть ~(1)~ щоб увійти як КОРИСТУВАЧ" << endl;
        cout << "Введіть ~(2)~ щоб увійти як АДМІНІСТРАТОР" << endl;
        cout << "Введіть ~(3)~ щоб завершити роботу =(" << endl;
        cout << "Оберіть тип роботи--> "; 
        try
        {
            cin >> MainMenu;
            if (MainMenu == 0)
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
        switch (MainMenu)
        {
        case 3:break;
        case 1:
        {   
            UserMenu = 0;
            while (UserMenu != 3)
            {
                cout << "Введіть ~(1)~ щоб продивитися всі наявні записи" << endl;
                cout << "Введіть ~(2)~ щоб подивитися запис за конкретними ознаками" << endl;
                cout << "Введіть ~(3)~ щоб  повернутися до попереднього меню " << endl;
                cout << "Оберіть дію-->"; 
                try
                {
                    cin >> UserMenu;
                    if (UserMenu == 0)
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
                switch (UserMenu)
                {
                case 3:break;
                case 1:
                {
                    user.Show_All(current_path);
                    break;
                }
                case 2:
                {
                    user.Show(current_path);
                    break;
                }
                default:
                {
                    cout << "Не існує такої дії =(" << endl;
                    break;
                }
                break;
                }
                cout << "Продовжити роботу?" << endl;
                cout << "Так - введіть ~(1)~ , повернутися до попереднього меню - введіть ~(3)~" << endl;
                cout << "Оберіть дію-->";  
                try
                {
                    cin >> UserMenu;
                    if (UserMenu == 0)
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
            }
            break;
        }
        case 2:
        {
            if (login_admin() == false)
            {
                break;
            }
            AdminMenu = 0;
            while (AdminMenu != 7)
            {
                cout << "Введіть ~(1)~ щоб додати новий запис" << endl;
                cout << "Введіть ~(2)~ щоб видалити існуючий запис" << endl;
                cout << "Введіть ~(3)~ щоб продивитися всі наявні записи" << endl;
                cout << "Введіть ~(4)~ щоб подивитися запис за конкретними ознаками" << endl;
                cout << "Введіть ~(5)~ щоб редагувати анкету" << endl; 
                cout << "Введіть ~(6)~ щоб додати нове місто(базу даних)" << endl;
                cout << "Введіть ~(7)~ щоб повернутися до попереднього меню" << endl;
                cout << "Оберіть дію-->"; 
                try
                {
                    cin >> AdminMenu;
                    if (AdminMenu == 0)
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
                switch (AdminMenu)
                {
                case 7:break;
                case 1:
                {
                    admin.Add(current_path);
                    break;
                }
                case 2:
                {
                    admin.Delete(current_path);
                    break;
                }
                case 3:
                {
                    admin.Show_All(current_path);
                    break;

                }
                case 4:
                {
                    admin.Show(current_path);
                    break;
                }
                case 5:
                {
                    admin.Edit(current_path);
                    break;
                }
                case 6:
                {
                    admin.AddBD();
                    break;
                }
                default:
                    cout << "Не існує такої дії =(" << endl;
                    break;
                }
                cout << "Продовжити роботу?" << endl;
                cout << "Так - введіть ~(1)~ , повернутися до попереднього меню - введіть ~(7)~" << endl;
                cout << "Оберіть дію-->"; 
                try
                {
                    cin >> AdminMenu;
                    if (AdminMenu == 0)
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
              
            }
           break;  
        }
        default:
            cout << "Не існує такої дії = (" << endl;
            break;
        }
        cout << "Продовжити роботу?" << endl;
        cout << "Так - введіть ~(1)~ , завершити роботу =( ~(3)~" << endl;
        cout << "Оберіть дію-->";
        try
        {
            cin >> MainMenu;
            if (MainMenu == 0)
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
      
   }

}
 


