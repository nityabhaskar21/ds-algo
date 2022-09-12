#include <iostream>
using namespace std;

int main() {
  char profession[12];
  
  cout << "Enter your profession: ";

  //The getline() function is used to read a string entered by the user. 
  // The getline() function extracts characters from the input stream. 
  // It adds it to the string object until it reaches the delimiting character. 
  // The default delimiter is \n. 
  // The delimiter could either be a character or the number of characters a user can input.

  // We will take maximum 12 characters as input
  cin.getline(profession, 12);
  
  cout << "Your profession is: " << profession<<endl;



  //Alternatively
  string name; 
  std::cout << "Enter your name :" << std::endl;  
  getline(cin,name); // implementing a getline() function  
  cout<<"Hello "<<name;  
  
  return 0;
}