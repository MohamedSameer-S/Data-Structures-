#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    cout << "Enter the elements:";
    for(int i = 0; i < n; i++)
    {

        cin >> arr[i];
    }
    int Unique = 1;

    for (int i = 1; i < n; i++)
    {
        int j = 0;
        for (j = 0; j < i; j++)
        {
            if (arr[i] == arr[j])
                break;
        }
        if (i == j)
            Unique++;
    }

    cout << "Number of Unique elements in the array: " << Unique;
}
