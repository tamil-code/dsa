

#include <iostream>
//inserting node at the begining of the linked;
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
    temp->data = value; 
    temp->next = NULL;     //storing data
    if (head == NULL)
    {
        head=temp;
        temp->next =NULL;
        return;
    }
    
    Node *temp1 = head;
  
      
    while (temp1->next!=NULL){
        temp1 =temp1->next;
    }
    temp1->next=temp;
    return;
         
         
         
}
void print()
{
    Node *x = head;
    while (x != NULL)
    {

        cout << x->data << " ";
        x = x->next;
    }
}

int main()
{
    int n, i, x;
    cout << "How many number you want to enter " ;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cout << endl
             << "Enter the number: ";
        cin >> x;
        insert(x);
    }
    print();
    return 0;
}
