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

void Last_node_dlt()
{
	nodeptr ptr= head, dptr;
	while(ptr->next->next!=NULL)
		ptr=ptr->next;
	dptr = ptr->next;
	ptr->next = NULL;
	delete(dptr);
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
    	Last_node_dlt();
        cout<<"Enter last delation..."<<endl;
        Display();

    return 0;
}
