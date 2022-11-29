#include <iostream>
#include <tuple>

using namespace std;
        
int main ()
{
   tuple<int, int, int> tuple1;   //creates tuple of integers
   tuple<int, string, string> tuple2;    // creates pair of an integer an 2 string
    
   tuple1 = make_tuple(1,2,3);  // insert 1, 2 and 3 to the tuple1
   tuple2 = make_tuple(1,"Studytonight", "Loves You");
   /* insert 1, "Studytonight" and "Loves You" in tuple2  */

   int id;
   string first_name, last_name;

   tie(id,first_name,last_name) = tuple2;
   /* ties id, first_name, last_name to 
   first, second and third element of tuple2 */

   cout << id <<" "<< first_name <<" "<< last_name;
   /* prints 1 Studytonight Loves You  */

   return 0;
}
