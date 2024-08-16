#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    string emp[20];
    int sal[20], n;
    bool swapped;
    cout << "Enter the number of employees: ";
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        cout << "Enter the name of the employee: ";
        cin >> emp[i];
        cout << "Enter the salary of the employee: ";
        cin >> sal[i];
    }
    cout << endl << "The salaries of the employees in increasing order:" << endl;
    for(int i = 0; i < n - 1; i++)
    {
        swapped = false;
        for(int j = 0; j < n - i - 1; j++)
        {
            if (sal[j] > sal[j + 1])
             {
                swap(sal[j], sal[j + 1]);
                swap(emp[j], emp[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    for(int i = 0; i < n; i++)
    {
        cout<<emp[i]<<" - "<<sal[i]<<endl;
        //cout << left << setw(10) << emp[i] <<"-"<< sal[i] << endl;
    }
}
