#include<bits/stdc++.h>
using namespace std;
int main()
{
    //m-1
    string s;
    string rev;
    cout<<"Enter string: ";
    cin>>s;
    for(int i=s.size()-1; i>=0; i--)
    {
        rev+=s[i];
    }
    cout<<"Reversed string: "<<rev;

    cout<<endl;
    //m-2
    cout<<"Reversed string by M-2 :";
    reverse(s.begin(),s.end());
    cout<<s;

    return 0;
}
