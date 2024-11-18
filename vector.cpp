/*
vector:
push_back()
pop_back()
size()
empty()
operator[]
at()
front()
back()
begin()
end()
rbegin()
rend()
erase()
swap()
clear()
reverse()
sort()
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
#endif

    ///Declare & print
    vector<int> myVector1;
    vector<int>::iterator it1;
    myVector1.push_back(7);
    myVector1.push_back(3);
    myVector1.push_back(1);
    myVector1.push_back(2);    
    myVector1.push_back(4);
    myVector1.push_back(3);
    cout<<"First Vector sort: \n"; 
    for(it1=myVector1.begin(); it1!= myVector1.end(); it1++)
    {
    	cout<<*it1<<' ';
    }

    cout<<endl<<"Second Vector"; ;

    ///Declare & print
    vector<int> myVector2;
    vector<int>::iterator it2;

    int n; cin>>n;
    for(int i=1; i<=n; i++){
    	int x; cin>>x;
    	myVector2.push_back(x);
    }
	cout<<" after reverse: \n"; 
    for(it2=myVector2.begin(); it2!= myVector2.end(); it2++)
    {
    	cout<<*it2<<' ';
    }

    cout<<endl<<"Third Vector: \n";

    ///Declare & print
    int sz; cin>>sz;
    vector<int> vec(sz);
    
    for(int i=1; i<= vec.size(); i++)
    {
    	cin>>vec[i];
    }
    for(int i=1; i<= vec.size(); i++)
    {
    	cout<<vec[i]<<' ';
    }

    


}
