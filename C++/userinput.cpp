#include <iostream>
using namespace std;

int main()
{
    int a, b, s;
    char name[20];

    cout << "Enter 2 numbers: ";
    cin >> a >> b;
    s = a + b;
    cout << "Summation of those numbers is: " << s << endl;

    cout << "btw who are u?" << endl;
    cin >> name;
    cout << "Hello " << name << " So you'r the absolute newbie! NO OFFENCE!!!";
    return 0;
}
