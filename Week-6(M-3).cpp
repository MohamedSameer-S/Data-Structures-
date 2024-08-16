#include <iostream>
#include<string>
using namespace std;

class Node
{
public:
    string data;
    Node* next;
};

class intQ
{
public:
    Node* first;
    Node* last;

    intQ()
    {
        first = NULL;
        last = NULL;
    }

    void enqueue(int val)
    {
        Node* newNode = new Node();
        int i = 0;
        int bin[20];
        string rem = "";
        while(val > 0)
        {
            bin[i] = val % 2;
            val = val / 2;
            i++;
        }

        for(int j = i - 1; j >= 0; j--)
        {
            rem += to_string(bin[j]);
        }

        newNode -> data = rem;

        if(first == NULL)
        {
            first = newNode;
            last = newNode;
        }

        else
        {
            last -> next = newNode;
            last = newNode;
        }
    }

    void display()
    {
        cout << endl;
        cout << "The elements of the Queue are:" << endl;

        Node* temp = first;

        while(temp != NULL)
        {
            cout << temp -> data << "\t";
            temp = temp -> next;
        }
    }
};

int main()
{
    int n;
    int bin[15];
    intQ q1;

    cout << "Enter the range: ";
    cin >> n;

    for(int i = 1; i <= n; i++)
    {
        q1.enqueue(i);
    }

    q1.display();
}
