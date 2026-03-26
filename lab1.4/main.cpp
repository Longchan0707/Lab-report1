#include <iostream>
#include <limits>
using namespace std;

bool KiemTraNhuan( int a)
{
    if ( a % 4 == 0 && a % 100 != 0 || a % 400 == 0 )
        return true;
    return false;
}

struct NextDay
{
    int day, month, year;
};

void Nhap ( NextDay &a )
{
    while (true)
    {
        cout << "Nhap ngay/ thang/ nam: ";
        cin >> a.day;

        cin >> a.month;

        cin >> a.year;
        if (a.day < 1 || a.day > 31 || a.month < 1 || a.month > 12 || a.year < 0 || cin.fail() || a.day > 28 && a.month == 2 && !KiemTraNhuan(a.year) || a.day > 29 && a.month == 2 && KiemTraNhuan(a.year))
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "NHAP LAI" << endl;

        }
        else break;
    }
    if ( a.month == 1 || a.month == 3 || a.month == 5 || a.month == 7 || a.month == 8 || a.month == 10 || a.month == 12 )
    {
        if ( a.day == 31 )
            {
                a.day = 1;
                if (a.month == 12 )
                {
                    a.month = 1;
                    a.year += 1;
                }
                else
                    a.month += 1;
            }
        else
            a.day += 1;
    }
    if ( a.month == 4 || a.month == 6 || a.month == 9 || a.month == 11 )
    {
        if ( a.day == 30 )
            {
                a.day = 1;
                a.month += 1;
            }
        else
            a.day += 1;
    }
    if ( a.month == 2 && KiemTraNhuan(a.year) )
    {
        if ( a.day == 29 )
            {
                a.day = 1;
                a.month += 1;
            }
            else a.day += 1;
    }
    else if ( a.month == 2 )
    {
        if ( a.day == 28 )
        {
            a.day = 1;
            a.month += 1;
        }
        else
            a.day += 1;
    }
    cout << a.day << "/" << a.month << "/" << a.year;
}



int main()
{
    NextDay a;
    Nhap(a);

    return 0;
}
