#include <iostream>
#include <cstdlib>
#include <cmath>
#include <fstream>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");
	/*
	//Задание 1
	double r, m, S, p, n;
	cout << "Введите" << endl << "S p n" << endl;
	cin >> S >> p >> n;
	r = p / 100;
	if (pow(1+r,n) != 1 && S>0 && p>0 && n>0) 
	{
		m = ((S*r*pow(1+r,n)) / (12*(pow(1+r,n)-1)));
		cout << "Месячная выплата равна " << m << endl;
	}
	else 
	{
		cout << "Данные, введенные вами, неверны!" << endl;
	}

	//Задание 2
    double m1 = 0;
    cout << "Введите" << endl <<"S m n" << endl;
    cin >> S >> m >> n;
    for (p = 1; m1 < m; p++)
    {
        r = p / 100;
        m1 = ((S * r * (pow((1 + r), n))) / (12 * (pow((1 + r), n)) - 1));
        if (m1 > m) {
            cout << "Кредит давался под " << p << "%" << endl;
        }
        else {
            cout << "не может быть более 100% " << endl;
            return 0;
        }
    }
	*/

	// Задание 3
	ifstream file;
	file.open("text.txt");
	if (file.is_open())
	{
		char buff;
		while (file.get(buff)) 
		{
			cout << buff;
		}
	}
	else 
	{
		cout << "Лооооох" << endl;
	}
	cout << endl;
	file.close();

	*/
	// Задание 4
	ifstream file;
	file.open("text.txt");
	if (file.is_open())
	{
		char buff;
		while (file.get(buff))
		{
			if (buff >= 48 && buff <= 57)
			{
				cout << buff;
			}
		}
	}
	else
	{
		cout << "Лооооох" << endl;
	}
	cout << endl;
	file.close();


	system("pause");
	return 0;
}