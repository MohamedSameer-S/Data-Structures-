#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s;
    cout<<"Enter string:";
    cin>>s;
    bool swapped;
    int counts1[20], res = 0, i, j, k;
    char counts2[20];
    for(i = 0; i < s.length(); i++)
    {
        for(j = 0; j < s.length(); j++)
        {
            if(s[i] == s[j])
            {
                res++;
            }
        }
        counts1[i] = res;
        counts2[i] = s[i];
        res = 0;
    }

    for (i = 0; i < s.length() - 1; i++)
    {
        swapped = false;
        for (j = 0; j < s.length() - i - 1; j++)
        {
            if (counts1[j] > counts1[j + 1])
             {
                swap(counts1[j], counts1[j + 1]);
                swap(counts2[j], counts2[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
            break;
    }
    cout << endl;
    for(i = s.length() - 1; i >= 0; i--)
    {
        cout << counts2[i];
    }
}
