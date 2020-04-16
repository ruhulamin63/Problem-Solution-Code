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

//Insertion a new item at the beginning

void Insert_Begin(int item)
	{
	nodeptr newNode = new ListNode;
	newNode->data = item;
	newNode->next = head;
	
	head = newNode;
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
        
        cout<<"Enter first_insert item: ";
        	cin>>item;
     	
        Insert_Begin(item);
        Display();

    return 0;
}
