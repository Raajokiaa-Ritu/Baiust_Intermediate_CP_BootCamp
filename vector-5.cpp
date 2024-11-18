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

    ///2D vector
    int n; cin>>n;
    vector<vector<int>>myVector(n);

    for(int i=0; i< n; i++)
    {
        int m; cin>>m;
        for(int j=0; j<m; j++){
            int value; cin>>value;
            myVector[i].push_back(value);
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<myVector[i].size(); j++)
        {
            cout<<myVector[i][j]<<' ';
        }cout<<endl;
    }
    cout<<endl;
    for (vector<int> vect1D : myVector)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }    
        cout << endl;
    }

 
}
