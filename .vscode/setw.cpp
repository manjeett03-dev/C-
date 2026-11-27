#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int a, b, c;
    cout << "Enter The Value of a : ";
    cin >> a;
    cout << "Enter The Value of b : ";
    cin >> b;
    cout << "Enter The Value of c : ";
    cin >> c;

    cout << "The Value of a : " << setw(3) << a << endl;
    cout << "The Value of b : " << setw(3) << b << endl;
    cout << "The Value of c : " << setw(3) << c << endl;
    cout << "The sum is :" << endl;
    cout << setw(4) << a << endl;
    cout << setw(4) << b << endl;
    cout << setw(4) << c << endl;
    cout << setw(4) << a + b + c << endl;

    return 0;
}