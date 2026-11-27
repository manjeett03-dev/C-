#include <iostream>
using namespace std;
struct students
{
    int id;
    char course[20];
    int year;
    float cgpa;
} aryan, rahul, manish;
int main()
{
    aryan.id = 111;
    aryan.year = 2;
    aryan.cgpa = 7.5;
    rahul.id = 222;
    rahul.year = 1;
    rahul.cgpa = 8.5;
    manish.id = 333;
    manish.year = 4;
    manish.cgpa = 8;
    cout << "NAME:   |Aryan|Rahul|Manish |\n";
    cout << "ID:     | %d | %d | %d   |  "<< aryan.id << rahul.id << manish.id;
 cout<<"COURSE: |%s | %s| %s   |\n", aryan.course, rahul.course, manish.course);
 cout<<"YEAR:   | %d   | %d   |   %d   |\n", aryan.year, rahul.year, manish.year);
 cout<<"CGPA:   |%.1f  | %.1f | %.1f   |\n", aryan.cgpa, rahul.cgpa, manish.cgpa);

 return 0;
}