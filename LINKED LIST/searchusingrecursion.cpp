#include <iostream>
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
struct node *recursivesearch(struct node *p, int key)
{
    if(p==NULL)
    return NULL;
    if(p->data==key)
    return p;
    return recursivesearch(p->next,key);
}
int main()
{
    struct node *temp;
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int key;
    cout << "enter the key u want to found ";
    cin >> key;
    create(a, n);
    temp = recursivesearch(first, key);
    if (temp)
    {
        cout << "key is found" << temp->data;
    }
    else
    {
        cout << "not found";
    }
    return 0;
}