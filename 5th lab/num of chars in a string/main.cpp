#include <iostream>

using namespace std;

int main()
{
    char str[30];
    int i = 0;
    int num = 0;

    cout << "please enter a word: ";
    cin >> str;

    while(str[i]!='\0'){
        num += 1;
        i++;
    }

    cout << "you entered a word of " << num << " letters"<<endl;

}
