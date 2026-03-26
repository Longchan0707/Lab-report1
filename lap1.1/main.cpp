#include <iostream>
#include <limits>
using namespace std;

int UCLN(int a, int b)
{
    if (b == 0)
        return a;
    return UCLN(b,a%b);
}

void RutGon(int &a, int &b)
{
    int c= UCLN(a,b);
    a=a/c;
    b/=c;
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

int main()
{
    int a,b;
    cout << "Nhap tu: ";

    kiemtra(a);
    cout << "Nhap mau: ";

    kiemtra(b);
    if ( b== 0)
    {
        cout << "Nhap lai "<< endl;
        kiemtra(b);
    }
    RutGon(a,b);
    if ( b == 1 )
        cout << a;
    else
        cout << a << "/" << b;
    return 0;
}
