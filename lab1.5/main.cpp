#include <iostream>
#include <limits>
using namespace std;

struct SinhVien
{
    string name;
    double math, literature;
};

void Nhap(SinhVien &a)
{
    while (true)
    {
        cout << "Insert full name, math score, literature score: ";
        getline(cin,a.name);
        cin >> a.math;
        cin >> a.literature;
        if ( cin.fail() || a.math < 0 || a.literature < 0 || a.math > 10 || a.literature > 10 )
        {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "INVALID INFORMATION"<< endl;
        }
        else break;
    }
}

int main()
{
    SinhVien a;
    Nhap(a);
    cout << (a.math + a.literature)/2;
    return 0;
}
