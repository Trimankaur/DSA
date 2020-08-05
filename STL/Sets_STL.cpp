#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	set<int> a;//Why set ? Insertion of a new element is done in a sorted manner in log(N) time 
	a.insert(1);
	a.insert(3);
	a.insert(6);
	a.insert(2);
	a.insert(7);
	for(int x:a)//
	{
		cout<<x<<" ";
	}
	cout<<endl;
	set<int>::iterator it = a.find(10);//auto can be written inplace of set<int>::iterator
	if(it!=a.end())
	{
		cout<<"Element Found";
	}
	else
	{
		cout<<"Element Not Found";
	}
	cout<<endl;
	auto it1 = a.upper_bound(0);//1>0 
	auto it2 = a.lower_bound(6);//6<=6
	cout<<*it1<<endl<<*it2;
	return 0;
}
