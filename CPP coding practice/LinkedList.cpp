//Perform insertion, deletion, display operations of linked list.
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
struct Node* head=NULL; 
void insert()
{
    struct Node* temp = new Node;
    cin>>temp->data;
    if(head==NULL)
    {
        head=temp;
        temp->next=NULL;
    }
    else{
        struct Node* p;
        p=head;
        while(p->next!=NULL)
        {
            p=p->next;
        }
        p->next=temp;
        temp->next=NULL;
    }
}
void Delete(int x)
{
    struct Node* p;
    struct Node* prev;
    p=head;
    while(p!=NULL && x!=p->data)
    {
        prev=p;
        p=p->next;
    }
    prev->next=p->next;
    p->next=NULL;
    delete p;
}
void display(struct Node* p)
{
    struct Node* q;
    q=p;
    while(q!=NULL)
    {
        cout<<q->data<<"->";
        q=q->next;
    }
}
int main()
{
    int n,ch;
    do{
        cout<<"\nLinked List Operations:\n1.Insertion\n2.Deletion\n3.Display";
        cout<<"\nEnter your choice: ";
        cin>>ch;
        switch(ch)
        {
            case 1: cout<<"\nEnter the size of Linked list: ";
                    cin>>n;
                    cout<<"\nEnter elements: ";
                    for(int i=0;i<n;i++)
                    {
                        insert();
                    }
                    cout<<"\nElements inserted successfully!";
                    break;
            case 2: int x;
                    cout<<"Enter element you want to delete: ";
                    cin>>x;
                    Delete(x);
                    cout<<"\nElement deleted successfully!";
                    break;
            case 3: display(head);
                    break;
            case 0: cout<<"Beep!!! INVALID CHOICE!";
                    break;
        }
    }
    while(ch!=0);
    return 0;
}
/*OUTPUT:

Linked List Operations:
1.Insertion
2.Deletion
3.Display
Enter your choice: 1

Enter the size of Linked list: 3

Enter elements: 1
2
3

Linked List Operations:
1.Insertion
2.Deletion
3.Display
Enter your choice: 3
1->2->3->

Linked List Operations:
1.Insertion
2.Deletion
3.Display
Enter your choice: 0
Beep!!! INVALID CHOICE!

Linked List Operations:
1.Insertion
2.Deletion
3.Display
Enter your choice: 3
1->2->3->

Linked List Operations:
1.Insertion
2.Deletion
3.Display
Enter your choice: 2
Enter element you want to delete: 2

Linked List Operations:
1.Insertion
2.Deletion
3.Display
Enter your choice: 3
1->3->
*/