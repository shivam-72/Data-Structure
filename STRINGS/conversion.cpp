//here we can also use strupr and strlwr for upper and lower case
//letter and for input getline(cin,name).
//ascii value of upper case 65-90 and lower case is 97 to 122.
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;
    cin >> s;

    for (int i = 0; s[i] != '\0'; i++)
    {
        s[i] = s[i] + 32;
    }
    cout << s;

    return 0;
}