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

void Tong ( int a, int b, int c, int d)
{
    int e = a*d;
    int f= c*b;
    int m = e+f;
    int n = b*d;
    RutGon(m,n);
    cout << "Tong: " << m << "/" << n;
}

void Hieu ( int a, int b, int c, int d)
{
    int e = a*d;
    int f= c*b;
    int m = e-f;
    int n = b*d;
    RutGon(m,n);
    cout << "Hieu: " << m << "/" << n;
}

void Tich ( int a, int b, int c, int d)
{
    int e = a*c;
    int n = b*d;
    RutGon(e,n);
    cout << "Tich: " << e << "/" << n;
}

void Thuong ( int a, int b, int c, int d)
{
    int e = a*d;
    int n = b*c;
    RutGon(e,n);
    cout << "Thuong: " << e << "/" << n;
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
    Tong(a,b,c,d);
    cout << endl;
    Hieu(a,b,c,d);
    cout << endl;
    Tich(a,b,c,d);
    cout << endl;
    Thuong(a,b,c,d);
    cout << endl;
    return 0;
}
