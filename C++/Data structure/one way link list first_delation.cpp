//###########One Way Linked List##############

#include <iostream>
using namespace std;

typedef struct ListNode{

        int data;
        struct ListNode *next;

    }* nodeptr;

nodeptr head = NULL, curr;

void AddData(int item)
 {
     nodeptr newNode = new ListNode;
     newNode -> data = item;
     newNode -> next = NULL;

    if(head == NULL)
    {
        head = newNode;
    }
    else
    {
        curr -> next = newNode;
    }
    curr = newNode;
 }

void first_node_dlt()
{
	nodeptr ptr= head;
	head = ptr->next;
	delete(ptr);
}


 void Display()
 {
     nodeptr ptr = head;

     while(ptr != NULL)
     {
         cout << ptr -> data<<" ";
            ptr = ptr -> next;
     }
 }

int main()
{
    int i,n,item;

    cout << "Enter number of nodes: ";
        cin >> n;

    cout << "Enter item: " << endl;
        for(i=0; i<n; i++)
        {
            cin >> item;
            AddData(item);
        }   
		  
        first_node_dlt();
        cout<<"Enter first delation..."<<endl;
        Display();

    return 0;
}
