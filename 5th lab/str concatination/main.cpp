#include <iostream>
#include <string.h>
using namespace std;

int main()
{
    char fName[15];
    char lName[15];
    char fullName [40]={""};
    int num = 0;
    int i = 0;

    cout << "enter your first name : ";
    cin >> fName;
    cout << "enter your last name : ";
    cin >> lName;

     strcpy(fullName,fName);
     strcat(strcat(fullName," "),lName);

    cout << fullName<<endl;

    while(fullName[i]!='\0'){
        num += 1;
        i++;
    }

    cout << num-1 <<endl;

}
