#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

int main()
{
	vector <int> a;//Empty vector
	a.push_back(30);//{30}
	a.push_back(10);//{30,10}
	a.push_back(20);//{30,10,20}
	cout<<"Vector :"<<endl;
	for(int i=0;i<a.size();i++)
	{
	cout<<a[i]<<endl;	
	}
	bool i= binary_search(a.begin(),a.end(),10); //Isn't working. Why ? For binary search the vector needs to be sorted !
	cout<<"Is 10 present : "<<i<<endl;
	sort(a.begin(),a.end());
	vector<int>::iterator upper = upper_bound(a.begin(),a.end(),10);//greater than the number
	cout<<"Upper : "<<*upper<<endl;
	vector<int>::iterator lower = lower_bound(a.begin(),a.end(),10);//lesser than or equal to the number 
	cout<<"Lower : "<<*lower<<endl;
	cout<<"Sorted Vector :"<<endl;
	for(int i=0;i<a.size();i++)
	{
	cout<<a[i]<<endl;	
	}
	i= binary_search(a.begin(),a.end(),10);
	cout<<"Is 10 present : "<<i<<endl;
	return 0;
}


