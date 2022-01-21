/*Given a singly linked list. The task is to find the length of the linked list,
where length is defined as the number of nodes in the linked list.
Example 1:
I/p: 1->2->3->4->5
O/p: 5
*/
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;
void insert(int n)
{
    struct node* temp = new node;
    temp->data=n;
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }
    else{
        struct node* p;
        p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        temp->next=NULL;
    }
}
void countLength(struct node* p)
{
    struct node* q;
    int count=0;
    q=p;
    while(q!=NULL)
    {
        count++;
        q=q->next;
    }
    cout<<count;
}
int main()
{
    int a[5];
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
        insert(a[i]);
    }
    //insert();
    countLength(head);
    return 0;
}