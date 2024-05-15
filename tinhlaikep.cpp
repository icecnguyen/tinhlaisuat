#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

int main()
{
    //kí hiệu
    cout << "p: so tien ban dau" << endl;
    cout << "r: lai suat" << endl;
    cout << "n: thoi gian" << endl;
    cout << "a: so tien sau" << endl;

    //khai báo biến
    int x, y, z;
    double a;
    double p;
    double r;
    double n;

    //nhập số liệu
    cout << "nhap so tien ban dau: ";
    cin >> p;
    cout << "nhap phan tram lai: ";
    cin >> r;
    cout << "nhap thoi gian: ";
    cin >> n;
    
    //tính lãi suất kép
    a = p * pow( 1.0 + r, n );
    cout << "so tien sau la: " << a << endl;
    return 0;
}