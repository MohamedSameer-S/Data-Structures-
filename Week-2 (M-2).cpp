#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,1,2,2,3,3,4,4,5,5};
    int target, res = 0;
    cout<<"Enter the target value:";
    cin>>target;
    for(int i = 0; i < sizeof(arr)/sizeof(arr[0]) - 2; i++)
    {
        for(int j = i + 1; j < sizeof(arr)/sizeof(arr[0]) - 1; j++)
        {
            for(int k = j + 1; k < sizeof(arr)/sizeof(arr[0]); k++)
            {
                if(k != i && k != j)
                {
                    if(arr[i] + arr[j] + arr[k] == target)
                    {
                        res++;
                    }
                }
            }
        }
    }
    cout << res;
}
