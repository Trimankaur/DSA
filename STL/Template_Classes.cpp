#include<bits/stdc++.h>
#include<algorithm>

using namespace std;

//passing datatype as template so that we don't have to write the same code for different datatypes
template<typename T>
T Max(T x, T y)
{
	return (x>y)?x:y;
}

int main()
{
	cout<<Max<int>(1,3)<<endl;
	cout<<Max<char>('a','c')<<endl;//compares the ascii value
	return 0;
}
