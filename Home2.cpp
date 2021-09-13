/*
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <locale.h>

using namespace std;



int main()
{
    setlocale(LC_ALL, "Rus");
    //Задание 1

    float S, V;
    int h, R, r, l;
    const double PI = acos(-1.0);

    cout << "Введите значения:" << endl << "h R r l" << endl;
    cin >> h >> R >> r >> l;

    if (R > r && l > h && h > 0 && R > 0 && r > 0 && l > 0)
    {
        cout << "Площадь " << PI * (pow(R, 2) + l * (R + r) + pow(r, 2)) << endl;
        cout << "Объем " << (PI * h * (pow(R, 2) + R * r + pow(r, 2))) / 3 << endl;
    }
    else 
    {
        cout << "ЭЭЭЭЭЭЭ, котакбас!!!" << endl;
    }

    //Задание 2
    int x, a;
    cout << "Введите значения" << endl << "x a" << endl;
    cin >> x >> a;
    if (abs(x) < 1 && x != 0) 
    {
        cout << a * log(abs(x)) << endl;
    }
    else if(abs(x) >= 1 && a >= pow(x, 2)) 
    {
        cout << pow((a - pow(x, 2)), 0.5) << endl;
    }
    else 
    {
        cout << "Ну ты(вы) прям Архимед, а правила, не знаешь(те) что-ли!?" << endl;
    }


    //Задание 3
    int y, b;
    cout << "Введите значения" << endl << "x y b" << endl;
    cin >> x >> y >> b;
    if (b > y && b >= x) 
    {
        cout << log(b-y) * pow(b-x,0.5) << endl;
    }
   

    //Задание 4
    int N;
    cout << "Введите значение" << endl << "N" << endl;
    cin >> N;
    if (N > 0) 
    {
        for (int i = 0; i < 10; i++)
        {
            cout << N + i << " ";
        }
        cout << endl;
    }
    else 
    {
        cout << "Ваше число не натуральное!!!" << endl;
    }


    //Задание 5
    
    for (float i = -4; i <= 4; i+= 0.5)
    {
        cout << (pow(i, 2) - 2 * i + 2) / (i - 1) << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
*/