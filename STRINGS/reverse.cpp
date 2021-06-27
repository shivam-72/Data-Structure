#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    getline(cin, a);
    char b[100];
    int i;
    int j;
    cout << "original string : " << endl;
    cout << a << endl;
    for (i = 0; a[i] != '\0'; i++)
    {
    }
    i = i - 1;
    for (j = 0; i >= 0; i--, j++)
    {
        b[j] = a[i];
    }
    b[j] = '\0';
    cout << "reversed string : " << endl;
    cout << b;

    return 0;
}