// here we convert upper case to lower and lower case to upper.
#include <iostream>
using namespace std;
int main()
{
    string a;
    cin >> a;
    for (int i = 0; a[i] != '\0'; i++)
    {
        if (a[i] >= 65 && a[i] <= 90)
        {
            a[i] = a[i] + 32;
        }
        else
        {
            a[i] = a[i] - 32;
        }
    }
    cout << a;
    return 0;
}