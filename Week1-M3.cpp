#include<iostream>
using namespace std;
int main()
{
    string input[20];
    string res[20];
    int result[10];
    int n, m;
    cout << "Enter the size of the input string:";
    cin >> n;
    cout << "Enter the input string:";
    for(int i = 0; i < n; i++)
    {
        cin >> input[i];
    }
    cout << "\nEnter the size of query string:";
    cin >> m;
    cout << "Enter the query string:";
    for(int i = 0; i < m; i++)
    {
        cin >> res[i];
    }
    for(int i = 0; i < m; i++)
    {
        int coun = 0;
        for(int j = 0; j < n; j++)
        {
            if(res[i] == input[j])
            {
                coun++;
            }
        }
        result[i] = coun;
        coun = 0;
    }
    cout <<"Number of occurrences of query string in input string is: " << endl;
    for(int i = 0; i < m; i++)
    {
        cout << res[i] << " - " << result[i] << "\n";
    }
}




