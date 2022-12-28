#include <iostream>

// include the unordered set header file
#include <unordered_set>
using namespace std;

int main() {
	
	// create a new empty unordered set of integers and initialize it
	unordered_set<int> s1 = {1,8,10,3,6,18,1};
	
	// initialize the iterator pointing to the beginning of the unordered set
	auto itr = s1.begin();
	
	// start while loop to begin iterating until we reach the ending iterator 
	while(itr != s1.end()){
	    
	    // output the current element
	    cout<<*itr<<" ";
	    
	    // increase the iterator
	    // itr++;
        advance(itr, 1);
	    
	}
	
	return 0;
}