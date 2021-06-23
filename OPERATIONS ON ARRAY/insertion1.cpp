#include <iostream>
using namespace std;
int main()
{
    int n, length, index, i, x;
    int A[n];
    cout << "enter the size of array"<<endl;
    cin >> n;
    cout << "no. of element you want to insert:"<<endl;
    cin >> length;
    if (length <= n)
    {
        cout<<"elements of array"<<endl;
        for (i = 0; i < length; i++)
        {
            cin >> A[i];
        }
        cout << "enter the index where u want to insert"<<endl;
        cin >> index;
        //to insert at given index
        if (index > n)
        {
            cout << "overflow";
        }
        else
        {
            for (i = length; i > index; i--)
            {
                A[i] = A[i - 1];
            }
            cout<<"no. you want to insert";
            cin>>x;
            A[index] = x;
            length++;
            for (i = 0; i < length; i++)
            {
                cout << A[i] << endl;
            }
        }
    }
    else
    {
        cout << "length is more reduce ur length length cant be more than size of array";
    }

    return 0;
}
