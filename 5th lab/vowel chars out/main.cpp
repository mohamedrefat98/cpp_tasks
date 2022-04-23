#include <iostream>

using namespace std;

int main()
{
    char str[30];

    cout << "please inter a word : ";
    cin >> str;

    while((str[0] != 'a'&&str[0]!='A') && (str[0] != 'e'&&str[0]!='E') && (str[0] != 'o'&&str[0]!='O') &&(str[0] != 'i'&&str[0]!='I')&&(str[0] != 'u'&&str[0]!='U')){
        cout << str <<endl ;
        cout << "please inter a word : ";
        cin >> str;
    }
}
