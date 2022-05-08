#include <iostream>
#include <string.h>

using namespace std;

int main() {
  char fname[10], lname[10];
  char* full_name;
  full_name = new char[21];

  cout << "Enter your First Name " << endl;
  cin >> fname;
  cout << "Enter your Last Name " << endl;
  cin >> lname;

  strcpy(full_name, fname);
  strcat(full_name, " ");
  strcat(full_name, lname);

  // using first method
   cout << full_name << endl;

  // using second method
   for(int i = 0; full_name[i] != '\0'; i++)
   {
     cout << full_name[i];
   }
    cout << endl;
  // using third method
  for(int i = 0; full_name[i] != '\0'; i++)
  {
    cout << *(full_name+i);
  }

   delete (full_name);

}
