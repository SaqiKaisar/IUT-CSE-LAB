#include <iostream>
#include <set>
#include <array>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    array<int,5> even{{2,4,6,8,10}};
    set<int> odd{1,3,5,7,9};
    for(auto x:even)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    for(auto x:odd)
    {
        cout<<x<<" ";
    }
    cout<<endl;
    vector<int> merged(10);
    merge(odd.begin(),odd.end(),even.begin(),even.end(),merged.begin());
    for (int i = 0; i < merged.size(); i++)
        cout << merged[i] << " ";
}   