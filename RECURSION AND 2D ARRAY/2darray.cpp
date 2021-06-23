#include <iostream>
using namespace std;
int main()
{
    int a[4][3] = {{1, 2, 3}, {
                                  3,
                                  4,
                                  5,
                              },
                   {5, 6, 7},
                   {8, 9, 10}};
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout<<a[i][j]<<endl;
        }
    }

    return 0;
}