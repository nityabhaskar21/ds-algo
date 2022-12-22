#include<iostream>    
#include<vector> 
using namespace std;
int main()
{  
	vector<int> vec {10,20,30,40};
	
	cout<<"Intially vector: ";
	for(auto i=vec.begin(); i<vec.end(); i++)
	{
		cout<<" "<<*i;
	}
	
	vec.insert(vec.end(),3,100);//Inserting 100, 3 times to the vector
	
	cout<<"\n\nThe modified vector is: ";
	for(auto i=vec.begin(); i<vec.end(); i++)
	{
		cout<<" "<<*i;
	}
	return 0;
}