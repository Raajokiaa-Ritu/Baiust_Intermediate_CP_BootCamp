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
 
    vector<vector<int>>myVector(5);
   
    myVector[0].push_back(10);
    myVector[0].push_back(10);

    myVector[1].push_back(20);
    myVector[1].push_back(20);
    myVector[1].push_back(10);

    myVector[2].push_back(30);
    myVector[3].push_back(67);
    myVector[4].push_back(89);
    
    for (vector<int> vect1D : myVector)
    {
        for (int x : vect1D)
        {
            cout << x << " ";
        }    
        cout << endl;
    }

 
}
