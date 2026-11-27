#include <iostream>
using namespace std;
struct students
{
    int id;
    char course[20];
    int year;
    float cgpa;
int main()
{
    struct students aryan, rahul, manish;
    aryan.id = 111;
    aryan.year = 2;
    aryan.cgpa = 7.5;
    rahul.id = 222;
    rahul.year = 1;
    rahul.cgpa = 8.5;
    manish.id = 333;
    manish.year = 4;
    manish.cgpa = 8;
    cout << "NAME:   Aryan\tRahul\tManish\t" << endl;
    cout << "CGPA: \t" << aryan.cgpa << "\t" << rahul.cgpa << "\t" << manish.cgpa << endl;
    cout << "ID  :   " << aryan.id << "\t" << rahul.id << "\t" << manish.id << endl;
    cout << "YEAR:   " << aryan.year << "\t" << rahul.year << "\t" << manish.year << endl;

    return 0;
}