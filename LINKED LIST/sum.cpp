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
int sum(struct node *p)
{ 
    int sum=0;
    while (p != NULL)
    {
        sum=sum+p->data;
        p = p->next;
    }
    return (sum);
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
    cout<<sum(first);

    return 0;
}