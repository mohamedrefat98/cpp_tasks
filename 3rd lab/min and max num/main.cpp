#include <iostream>

using namespace std;

int main()
{
    int num, num1, maxNum, minNum, timesNum;

    cout << "how many numbers you want to compare";
    cin >> timesNum ;

    cout << "enter your initial number";
    cin >> num ;

    maxNum = num;
    minNum = num;
    for(int i=1; i<timesNum; i++){
        cout << "enter a number";
        cin >> num1;

        if(num1 < minNum){
            minNum = num1;
        }else if(num1 > maxNum){
            maxNum = num1;
        }
    }
    cout << "the max number i :" << maxNum << "the minimum number is : " << minNum;
}
