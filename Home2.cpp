/*
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <locale.h>

using namespace std;



int main()
{
    setlocale(LC_ALL, "Rus");
    //������� 1

    float S, V;
    int h, R, r, l;
    const double PI = acos(-1.0);

    cout << "������� ��������:" << endl << "h R r l" << endl;
    cin >> h >> R >> r >> l;

    if (R > r && l > h && h > 0 && R > 0 && r > 0 && l > 0)
    {
        cout << "������� " << PI * (pow(R, 2) + l * (R + r) + pow(r, 2)) << endl;
        cout << "����� " << (PI * h * (pow(R, 2) + R * r + pow(r, 2))) / 3 << endl;
    }
    else 
    {
        cout << "�������, ��������!!!" << endl;
    }

    //������� 2
    int x, a;
    cout << "������� ��������" << endl << "x a" << endl;
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
        cout << "�� ��(��) ���� �������, � �������, �� ������(��) ���-��!?" << endl;
    }


    //������� 3
    int y, b;
    cout << "������� ��������" << endl << "x y b" << endl;
    cin >> x >> y >> b;
    if (b > y && b >= x) 
    {
        cout << log(b-y) * pow(b-x,0.5) << endl;
    }
   

    //������� 4
    int N;
    cout << "������� ��������" << endl << "N" << endl;
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
        cout << "���� ����� �� �����������!!!" << endl;
    }


    //������� 5
    
    for (float i = -4; i <= 4; i+= 0.5)
    {
        cout << (pow(i, 2) - 2 * i + 2) / (i - 1) << endl;
    }
    cout << endl;

    system("pause");
    return 0;
}
*/