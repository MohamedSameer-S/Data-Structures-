#include <iostream>
using namespace std;
int main()
{
    int arr[20], n, res[20], k = 0, l = 1, r, sum = 0;
    cout << "Enter the size of the array (even): ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the element:";
        cin >>arr[i];
    }
    for(int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    r = n - 1;
    for(int i = 0; i < n; i++)
    {
        if(i < n/2)
        {
            res[k] = arr[i];
            cout << arr[i] << endl;
            k+=2;
        }
        else
        {
            res[l] = arr[r];
            cout << res[l] << endl;
            r-=1;
            l+=2;
        }
    }
    for(int s = 0; s < n; s++)
    {
        cout << res[s] << "\t";
        if(s % 2 == 0)
        {
            sum += res[s]*res[s+1];
        }
    }
    cout << endl << "Minimum Sum of elements is: " << sum;
}
