#include<iostream>
using namespace std;
struct node
{
    int data;
    struct node *next;
} *first = NULL;
void create(int a[], int n)
{
    int i;
    struct node *t, *last;
    first = new node;
    first->data = a[0];
    first->next = NULL;
    last = first;
    for (int i = 1; i < n; i++)
    {
        t = new node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
    }
}
void display(struct node *p)
{
    int max=INT_MIN;
    cout<<max<<endl;
    while (p != NULL)
    {
        if(max<p->data){
          max = p->data;
        }
        p = p->next;
    }
    cout<<"max value is "<<max;
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
    display(first);

    return 0;
}