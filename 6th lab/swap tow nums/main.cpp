#include <iostream>

using namespace std;
void swap(int *x, int *y);
int main()
{
    int a=3, b=4 ;
    swap(&a , &b);
    cout << "A = " << a << "and B = "<< b << endl;
}

void swap(int *x , int *y){
int temp ;
temp = *x;
*x = *y;
*y = temp;
}
