#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    char a[] = "language";
    int i;
    int j;
    cout << "original string : " << endl;
    cout << a << endl;
    for (j = 0; a[j] != '\0'; j++)
    {
    }
    j = j - 1;
    cout << "reversed string" << endl;
    for (i = 0; j > i; j--, i++)
    {
        swap(a[i], a[j]);
    }
    cout << a;
    return 0;
}