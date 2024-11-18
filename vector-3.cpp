#include<bits/stdc++.h>
using namespace std;
#define pb push_back
 
int i,j,n,m,e,s;
vector<int>v;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    int n; cin>>n;
    vector<int>v(n);

    for(int i=0; i<n; i++)
    {
    	cin>>v[i];
    }
    for(auto it: v)
    {
    	cout<<it<<' ';
    }
    cout<<endl;
    v.erase(v.begin()+3);
    for(auto it: v)
    {
    	cout<<it<<' ';
    }
    v.erase(v.begin(), v.begin()+2);
    cout<<endl;   
    for(auto it: v)
    {
    	cout<<it<<' ';
    }
    cout<<endl;  
    vector<int>v1;
    swap(v1, v );
    for(auto it: v1)
    {
    	cout<<it<<' ';
    }
    cout<<endl; 
    v.clear();
    v1.clear();
    cout<<v.size()<<' '<<v1.size()<<endl;
    cout<<v.empty()<<endl;
    if(v.empty() == true)
    {
    	cout<<"vector is empty\n";
    }




}
