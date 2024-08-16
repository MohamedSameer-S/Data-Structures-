#include<iostream>
using namespace std;
int main()
{
    int arr[10][10],n,m;
    int c = 0;
    int target;
    cout << "Enter the number of rows:";
    cin >> m;
    cout << "Enter the number of columns:";
    cin >> n;
    cout << "Enter target value:";
    cin >> target;
    cout << "Enter element:";
    for(int i = 0;i < m; i++)
    {
        for(int j = 0;j < n; j++)
        {

            cin>>arr[i][j];
        }
    }
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(arr[i][j] == target)
            {
                c++;
                cout << "Target is Found in the array!" << endl;
                exit(0);
            }
        }
    }
    if(c == 0)
    {
        cout << "Target not found in the array!";
    }
    return 0;
}





