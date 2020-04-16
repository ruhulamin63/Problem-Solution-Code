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
 
//Insertion a new item some where in the middle

void Insert_Mid (int node,int item, nodeptr p)
{
	nodeptr newNode = new ListNode;
	newNode->data = item;	
	nodeptr ptr = head;
	while(ptr->data != node && ptr->next !=NULL)
		ptr = ptr->next;
	if(ptr->data == node)
	{
		newNode->next = ptr->next;
		ptr->next = newNode;
	}
	else
		cout<< "not found" <<endl;
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
    int i,n,item,node;

    cout << "Enter number of nodes: ";
        cin >> n;

    cout << "Enter item: " << endl;
        for(i=0; i<n; i++)
        {
            cin >> item;
            AddData(item);
        }
        Display();
        
        cout<<"After which node you want to insert: ";
    		cin>>node;
    
        cout<<"Enter mid_insert: ";
        	cin>>item;
        Insert_Mid (node, item, head);	
        cout<<"---Printing---" <<endl;
    	
    	Display();

    return 0;
}
