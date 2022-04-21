#include <iostream>

using namespace std;

int power (int base ,int ace);
int main()
{
    int x,y;
    cout << "enter base number : ";
    cin >> x;
    cout << "enter ace number : ";
    cin >> y;

    cout <<power(x,y);
}
int power(int base ,int ace){
    int result = 0;
    if (ace != 0){
        result = base *power(base,(ace-1));
    }
    else{
        result=1;
    }
        return result;
}

