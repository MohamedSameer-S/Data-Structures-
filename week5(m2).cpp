// C++ program for the above approach
#include <iostream>
using namespace std;


string removeDuplicateLetters(string s)
{
    int cnt[26]={0};

    int vis[26]={0};

    int n = s.size();

    for (int i = 0; i < n; i++)
        cnt[s[i] - 'a']++;

    string res = " ";

    for (int i = 0; i < n; i++) {


        cnt[s[i] - 'a']--;


        if (!vis[s[i] - 'a']) {


            while (res.size() > 0 && res.back() > s[i] && cnt[res.back() - 'a'] > 0)
            {

                vis[res.back() - 'a'] = 0;
                res.pop_back();
            }


            res += s[i];
            vis[s[i] - 'a'] = 1;
        }
    }

    return res;
}

int main()
{
    string S;
    cout<<"Enter a string:";
    cin>>S;

    cout << removeDuplicateLetters(S);

    return 0;
}
