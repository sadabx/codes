#include <iostream>
using namespace std;

int main()
{
    int a, b;

    cout << "Enter two numbers(a,b) ";
    cin >> a >> b;

    float ans = (float)a / b;
    cout << "a/b=" << ans << endl;

    float rem = a % b;
    cout << "The reminder is " << rem;
    return 0;
}