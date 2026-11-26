#include <iostream>
using namespace std;
int func(int a)
{
    int b = 10;
    return a * b;
}
int main()
{
    int m = 18;
    int f = func(m);
    cout << "Poduct is : " << f;
    return 0;
}