#include <iostream>
#include <stdlib.h>
using namespace std;
struct node
{
    int data;
    node *next;
};
struct node *head; // global varible can be accessed anywhere
void insert_beg(int x)
{
    node *temp = new node(); // equilent to (node*)malloc(sizeof(struct node));
    temp->data = x;
    temp->next = head;
    head = temp;
}
void delete_nth( int pos)
{
    node *temp1 = head;
    
    int count = 1;
    if (pos == 1)
    {
        
        head=temp1->next;
        free(temp1);
        return;
    }
    while(count!=pos-1)
    {
        temp1=temp1->next;
        count++;
    }
    node*temp2=temp1->next;
    temp1->next=temp2->next;
    free(temp2);
    
}
void insert_nth(int x, int pos)
{
    node *temp1 = head;
    int count = 1;
    if (pos == 1)
    {

        node *temp2 = new node();
        temp2->data = x;
        temp2->next = head;
        head = temp2;
        return;
    }
    while (count != pos - 1)
    {
        temp1 = temp1->next;
        count++;
    }
    node *temp2 = new node();
    temp2->data = x;
    temp2->next = temp1->next;
    temp1->next = temp2;
}
void Print()
{
    node *temp = head;
    cout << "The list is as follows: " << endl
         << "| ";
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "|" << endl;
}
int main()
{
    head = NULL; // empty list
    cout << "-------------------------create a link list---------------------------------------" << endl;
    cout << "What is the size of link list you want to create " << endl;
    int n, x;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th value" << endl;
        cin >> x;
        insert_beg(x);
        Print();
    }
    while (1)
    {
        cout << "------------------------------------MENU-------------------------------------------" << endl;
        cout << "1)To insert an element at nth position in the link list" << endl;
        cout << "2)To delete an element at nth position in the link list" << endl;
        cout << "3)Exit" << endl;
        int dec;
        cin >> dec;
        if (dec == 1)
        {
            cout << "which position you want to insert a element" << endl;
            int y;
            cin >> y;
            cout << "Enter the data you want ot insert : " << endl;
            int h;
            cin >> h;
            insert_nth(h, y);
            Print();
        }
        else if (dec == 2)
        {
            cout << "which position you want to delete a element" << endl;
            int y;
            cin >> y;
            delete_nth( y);
            Print();
        }
        else if (dec == 3)
        {
            break;
        }
    }
    return 0;
}