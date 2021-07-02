#include<iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
}*first;
void create(int a[],int n){
    int i;
    struct node*t,*last;
    first=new node;
    first->data=a[0];
    first->next=NULL;
    last=first;
    for(int i=1;i<n;i++){
        t=new node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }

}
void displayr(struct node *p)
{
    if (p != NULL)
    {
        cout << "link list element are";
        cout << p->data ;
        cout<<endl;
        displayr( p->next);
    }
}

    int main()
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        create(a, n);
        displayr(first);

        return 0;
    }