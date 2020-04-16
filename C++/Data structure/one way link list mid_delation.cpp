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

void middle_node_dlt(int item)
{
	nodeptr ptr = head, dptr;
	while(ptr->next->data != item && ptr->next !=NULL){
		ptr= ptr->next;
		}
	dptr = ptr->next;
	ptr->next = ptr->next->next;
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
		Display();
		   
		cout<<"Enter mid_delt: ";
        	cin>>item;
        	
    	middle_node_dlt(item);
        cout<<"Enter mid delation..."<<endl;
        Display();

    return 0;
}
