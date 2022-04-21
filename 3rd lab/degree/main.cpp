#include <iostream>

using namespace std;

int main()
{
    int degree ;

    cout << "enter your degree";
    cin >> degree ;

    switch(degree){
    case 90 ... 100:
        cout << "your grade is A";
        break;
    case 80 ... 89:
        cout << "your grade is B";
        break;
    case 70 ... 79:
        cout << "your grade is C";
        break;
    case 60 ... 69:
        cout << "your grade is D";
        break;
    case 50 ... 59:
        cout << "your grade is F";
        break;
    default :
        cout << "out of possible";

    }
}
