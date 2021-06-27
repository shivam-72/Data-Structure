// here i m counting spaces between number so i have taken counter from 1
// so words are (space + 1). due to white space(more then one space )
//so i put and(&)operator to check more than one space.
#include<iostream>
using namespace std;
int main()
{
    char a[]="you are doing this thing";
    int counter = 1;
    for (int i=0; a[i]!='\0';i++){
        if(a[i]==' ' && a[i-1]!=' '){
            counter=counter+1;
        }
        
    }
    cout << "No. of words are : " << counter << endl;
    return 0;
}