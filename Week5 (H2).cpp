#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;

string removeStars(string s) {
        stack<char>f;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]!='*'){
                 f.push(s[i]);
            }
            else{
                f.pop();
            }

        }
        string h="";
        while(!f.empty()){
            h+=f.top();
            f.pop();
        }
        reverse(h.begin(),h.end());
        return h;
    }


int main()
{
 string sr;
 cout<<"Enter the string:";
 cin>>sr;
 cout<<removeStars(sr);
 return 0;

}
