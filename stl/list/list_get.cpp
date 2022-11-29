#include <iostream>
#include <list>

using namespace std;

int main()
{
    list<int> l{1,2,3,4,5};

    cout<<l.front()<<endl;

    cout<<l.back()<<endl;

    cout<<l.empty()<<endl;


    l.reverse();
    /* now the list becomes 5,4,3,2,1 */
    for (int x : l) {
		std::cout << x << ' ';
	}cout << std::endl;
}