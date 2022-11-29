#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l{1,2,3,4,5};
    
    l.push_back(6);
    l.push_back(7);
    /* now the list becomes 1,2,3,4,5,6,7 */
    for (int x : l) {
		std::cout << x << ' ';
	}cout << std::endl;

    
    l.push_front(8);
    l.push_front(9);
    /* now the list becomes 9,8,1,2,3,4,5,6,7 */

    for (int x : l) {
		std::cout << x << ' ';
	}cout << std::endl;

}