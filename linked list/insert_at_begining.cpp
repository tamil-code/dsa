

#include <iostream>
//inserting node at the begining of the linked std::list<> ;
using namespace std;
struct Node
{
    int data;
    Node *next;
};

//creating a global node pointer for head
Node *head;

//creating a insert function
void insert(int value)
{

    Node *temp = new Node(); //creating a memory space for node
    temp->data = value;  //storing data 
    temp->next = NULL;  //storing address in another field(intially while creating we put it as null)
    if(head!=NULL)temp->next =head; //if head is not empty (thans when we can do inserting in linked list)
    head = temp;
}
void print()
{
    Node *x = head;
    while (x!=NULL)
    {
        
        cout << x->data << " ";
        x = x->next;
    }
}

int main()
{
    int n, i, x;
    cout << "How many number you want to enter";
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout <<endl<< "Enter the number: ";
        cin >> x;
        insert(x);
       
    }
    print();
    return 0;
}
