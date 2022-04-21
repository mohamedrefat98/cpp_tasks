#include <iostream>

using namespace std;

int main()
{
    int num,num1;

    int maxNum;
    int minNum;

    cout << "enter first number : ";
    cin  >> num;

    maxNum = num ;
    minNum = num ;
    for (int i = 0; i<4 ; i++){
        cout << "enter a number : ";
        cin  >> num1;

        if(num1 > maxNum){
            maxNum = num1 ;
        }
        else if(num1 < minNum){
            minNum = num1;
        }
    }

    cout << "max number is : " << maxNum << "min number is : " << minNum << endl ;


}
