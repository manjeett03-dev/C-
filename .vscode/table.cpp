#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n;
    cout << "Enter the no. whose table you want : ";
    cin >> n;
    for (int i = 1; i < 11; i++)
    {
        cout << n << "  X " << setw(2) << i << "  = " << setw(3) << n * i << "\n";
    }

    return 0;
}