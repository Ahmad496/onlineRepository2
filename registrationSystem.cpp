#include<bits/stdc++.h>
using namespace std;
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
int main()
{
    optimize();
    int n;
    cin>>n;
    map<string,int>mp;
    vector<string>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    for(auto u:v)
    {
        mp[u]++;
        if(mp[u]==1)
            cout<<"OK"<<endl;
        else
            cout<<u<<mp[u]-1<<endl;
    }
 
    return 0;
}