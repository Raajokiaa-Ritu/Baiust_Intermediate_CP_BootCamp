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
    myVector1.push_back(7);
    myVector1.push_back(3);
    myVector1.push_back(1);
    myVector1.push_back(2);    
    myVector1.push_back(4);
    myVector1.push_back(3);
    cout<<"First Vector before sort: \n"; 
    for(auto it: myVector1)
    {
        cout<<it<<' ';
    }
    sort(myVector1.begin(), myVector1.end()); 
    cout<<"\nFirst Vector after sort: \n"; 
    for(auto it: myVector1)
    {
    	cout<<it<<' ';
    }
    sort(myVector1.rbegin(), myVector1.rend()); 
    cout<<"\nFirst Vector after reverse sort: \n"; 
    for(auto it: myVector1)
    {
    	cout<<it<<' ';
    }


    cout<<endl<<"Second Vector"; ;

    ///Declare & print
    vector<int> myVector2;
   
    int n; cin>>n;
    for(int i=1; i<=n; i++){
    	int x; cin>>x;
    	myVector2.push_back(x);
    }
	cout<<" after reverse: \n"; 
    for(auto it: myVector1)
    {
        cout<<it<<' ';
    }

    cout<<endl<<"Third Vector: \n";

    ///Declare & print
    int sz; cin>>sz;
    vector<int> vec(sz);
    
    for(int i=1; i<= vec.size(); i++)
    {
    	cin>>vec[i];
    }

    sort(vec.begin()+1, vec.end()+1); //0-bases

    for(auto it: myVector1)
    {
        cout<<it<<' ';
    }
    vec.pop_back();
    cout<<"\nNew size: "<<vec.size()<<endl;
    cout<<"\nafter delete 1 element: ";
    for(auto it: myVector1)
    {
        cout<<it<<' ';
    }
    cout<<endl;
    reverse(vec.begin()+1, vec.end()+1);
    cout<<"\nafter reverse: ";
    for(auto it: myVector1)
    {
        cout<<it<<' ';
    }   


}
