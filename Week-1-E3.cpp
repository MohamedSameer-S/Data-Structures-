#include <iostream>
using namespace std;
int main()
{
    int a[20], b[20];
    int n;
    cout << "Enter the size of the array:";
    cin >> n;
    cout << "Enter the elements:";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int k = 1;
    for(int i = 0; i < n ; i++)
    {
        int j = 0;
        for(j = 0; j < i; j++)
        {
            if(a[i] == a[j])
            {
                break;
            }
        }
        if(i == j)
        {
            b[k] = a[i];
            k++;
        }
    }
    b[0] = a[0];
    cout << "Array after removing the duplicate elements is:" << endl;
    for(int i = 1; i < k; i++)
    {
        cout << b[i] << "\t";
    }

}





