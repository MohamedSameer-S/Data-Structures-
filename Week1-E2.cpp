#include <iostream>
using namespace std;
int main()
{
    int arr[20];
    int occ = 0;
    int n, el;
    cout << "Enter the size of array:";
    cin>>n;
    cout << "Enter the element:";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "\nEnter the element to search in the array:";
    cin >> el;
    for(int i = 0; i < n; i++)
    {
        if(arr[i] == el)
        {
            occ++;
        }
    }
    cout << "No.of occurrences of " <<el<< " in the array is: " <<occ;
}





