#include <iostream>
#include <cmath>
using namespace std;

class Node
{
public:
    int data;
    Node* next;
    Node* prev;
};


int main()
{
    int arr[20];
    Node* head;
    Node* curr;
    Node* tmp;
    int num, j = 0, res = 0;

    cout << "Enter the number of nodes: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        Node* after = new Node();
        if (i == 1)
        {
            curr = new Node();
            head = curr;
            cout << "Enter the value of Node " << i << ": ";
            cin >> curr -> data;
            curr -> prev = NULL;
            curr -> next = after;
            after -> prev = curr;
            curr = curr -> next;
        }

        else
        {
            cout << "Enter the value of Node " << i << ": ";
            cin >> curr -> data;

            if (i != num)
            {
                curr -> next = after;
                after -> prev = curr;
                curr = curr -> next;
            }

            else
            {
                curr -> next = head;
                head -> prev = curr;
                j++;
                delete after;
            }
        }
        if (j == 1)
        {
            break;
        }
    }

    tmp = curr;
    int n = 0;
    do
    {
        res += (pow(2, n) * tmp -> data);
        tmp = tmp -> prev;
        n++;
    }while(tmp != curr);

    cout << "Decimal value is: " << res;

}
