/*Given a singly linked list with N nodes and a number X. The task
is to find the node at the given index (X) of linked list.
I/P: First line of input contains number of testcases T. For each
testcase, first line of input cotains space seperated two integers, 
length of SLL and X.
O/P: For each testcase,there will be single line of output 
containing data at Xth node
*/
#include <iostream>
using namespace std;
struct node{
    int data;
    struct node *next;
};
struct node* head=NULL;
void insert()
{
    struct node* temp = new node;
    cin>>temp->data;
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
void findNode(int x)
{
    struct node* ptr;
    int count=0;
    ptr=head;
    while(ptr!=NULL)
    {
        count++;
        if(count==x)
        {
            cout<<ptr->data;
        }
        ptr=ptr->next;
    }
}
void display(struct node* p)
{
    struct node* q;
    q=p;
    while(q!=NULL)
    {
        cout<<q->data<<"->";
        q=q->next;
    }
}
int main()
{
    int l,x,t;
    cout<<"Enter no. of test cases: ";
    cin>>t;
    for(int i=0;i<t;i++)
    {
        cout<<"\nEnter size of the SLL and \n index position of element you want to find: ";
        cin>>l>>x;
        for(int i=0;i<l;i++)
        {
            insert();
        }
        display(head);

    }
    return 0;
}