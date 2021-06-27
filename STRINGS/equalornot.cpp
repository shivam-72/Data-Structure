#include <iostream>
using namespace std;
int main()
{
    string s1;
    string s2;
    cout << "enter the first string s1 : ";
    getline(cin, s1);
    cout << "enter the second string s2 : ";
    getline(cin, s2);
    int i;
    int j;
    for (i = 0, j = 0; s1[i] != '\0' || s1[j] != '\0'; i++, j++)
    {
        if (s1[i] != s2[j])
        {
            break;
        }
    }
    if (s1[i] == s2[j])
        cout << "equal";
    else if (s1[i] > s2[j])
        cout << "s1 is greater";
    else
        cout << "s2 is greater";
    return 0;
}