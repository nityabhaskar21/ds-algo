#include<iostream>    
#include<algorithm>
using namespace std;
int main()
{  
    //array initialisation
    int demo[5] = {5, 9, 3, 8, 1};
    
    int len = sizeof(demo)/sizeof(demo[0]);
     
    cout<<"Before sorting array : ";
    for(int i=0; i<len; i++)
    {
        cout<<" "<<demo[i];
    }
     
    std::sort(demo, demo + len);//Sorting demo array
     
    cout<<"\n\nAfter sorting array : ";
    for(int i=0; i<len; i++)
    {
        cout<<" "<<demo[i];
    }

    std::sort(demo, demo + len, greater<int>());//Sorting demo array descending
     
    cout<<"\n\nAfter sorting array descending: ";
    for(int i=0; i<len; i++)
    {
        cout<<" "<<demo[i];
    }

    return 0;
}