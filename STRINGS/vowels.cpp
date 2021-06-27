// to check vowel and consonent.
#include<iostream>
using namespace std;
int main()
{
    char a[]="you are theif";
    int counter1=0; int counter2=0;
    for (int i = 0; a[i] != '\0'; i++)
    {
      if(a[i]=='a'|| a[i]=='i'|| a[i]=='e' || a[i]=='o'|| a[i]=='u'){

        counter1=counter1 + 1;
      }
      else if(a[i]>=97 && a[i]<=122){
          counter2=counter2 +1;
      }
    }
    cout<<"vowels are : "<<counter1<<endl;
    cout<<"consonents are : "<<counter2;
        return 0;
}