#include<iostream>
using namespace std;

int main(){
    double a, b;
    cin >> a >> b;
    cout << a << "+" << b << "=" << a+b << endl;
    cout << a << "-" << b << "=" << a-b << endl;
    cout << a << "*" << b << "=" << a*b << endl;
    cout << a << "/" << b << "=" << fixed << (a/b);
    return 0;
}