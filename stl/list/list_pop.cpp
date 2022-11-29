#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l{1,2,3,4,5};
    
    l.pop_back();
    /* now the list becomes 1,2,3,4 */
    for (int x : l) {
		std::cout << x << ' ';
	}cout << std::endl;
    
    l.pop_front();
    /* now the list becomes 2,3,4 */
    for (int x : l) {
		std::cout << x << ' ';
	}cout << std::endl;
}