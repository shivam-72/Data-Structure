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
struct node *movetohead(struct node *p, int key){
    struct node*q;
    while(p!=NULL){
    if(key==p->data){
     q->next=p->next;
     p->next=first;
     first=p;
    }

        q = p;
        p = p->next;
         }
    

}
void display(struct node *p)
{
    while (p != NULL)
    {
        cout << "link list element are";
        cout << p->data << endl;
        p = p->next;
    }
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
    temp = movetohead(first, key);
    if (temp)
    {
        cout << "key is found" << temp->data;
    }
    else
    {
        cout << "not found";
    }
    display(first);
    return 0;
}