#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    float a, b, c, y;


    float x1, x2 ;


    cout << "enter a : ";
    cin  >> a;

    cout << "enter b : ";
    cin  >> b;

    cout << "enter c : ";
    cin  >> c;

    y  = (b*b) - (4*a*c);
    x1 = ((-b) + sqrt(y))/(2*a);
    x2 = ((-b) - sqrt(y))/(2*a);

    if(y > 0){
        cout << "first root is : " << x1 << "second root is : " << x2 << endl;
    }
    else if (y==0){
        cout << "the only root is : " << x1 << endl;
    }
    else if (y<0){

        cout << "first root is : " << -b/(2*a) << " + " << sqrt(-y)/(2*a)<< " imaginary " << "second root is : " << -b/(2*a) << " + " << -(sqrt(-y)/(2*a)) << " imaginary" << endl;
    }
}
