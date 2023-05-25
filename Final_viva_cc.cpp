#include<bits/stdc++.h>
using namespace std;

int solve(string &jewels, string &stones)
{
        map<int,int>m;
        for(auto s:stones)
            m[s]++;
        int count=0;
        for(int i=0;i<jewels.size();i++)
            count+=m[jewels[i]];
        return count;
}

int main()
{
    string jewels = "aA" , stones ="aAAbbbbb";
    // cin>> jewels >> stones;s
    int ans = solve(jewels , stones);
    cout<<ans<<endl;
    return 0;
}
