#include <iostream>
#include <limits>
using namespace std;



void RutGon(int &a, int &b)
{
    if ( b < 0)
    {
        a = -a;
        b = -b;
    }
}

void kiemtra ( int &a )
{
    while (true)
    {
        cin >> a;
        if (cin.fail())
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n' );
            cout << "Nhap lai ";
        }
        else break;
    }
}

void SoSanh ( int a, int b, int c, int d)
{
    int e = a*d;
    int f= c*b;
    if ( e > f )
        cout << a << "/" << b;
    else
        cout << c << "/" << d;
}

int main()
{
    int a,b,c,d;
    cout << "Nhap tu phan so 1: ";

    kiemtra(a);
    cout << "Nhap mau phan so 1: ";

    kiemtra(b);
    if ( b== 0)
    {
        cout << "Nhap lai "<< endl;
        kiemtra(b);
    }
    RutGon(a,b);
    cout << "Nhap tu phan so 2: ";

    kiemtra(c);
    cout << "Nhap mau phan so 2: ";

    kiemtra(d);
    if ( d == 0)
    {
        cout << "Nhap lai "<< endl;
        kiemtra(d);
    }
    RutGon(c,d);
    SoSanh(a,b,c,d);
    return 0;
}

