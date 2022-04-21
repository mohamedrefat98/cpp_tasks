#include <iostream>

using namespace std;

int main()
{
    int num, sum;
    sum = 0 ;
     while(sum<100){
        cout << "enter a number";
        cin >> num ;
        sum += num;
     }
     cout << "you reached the limit";
}
