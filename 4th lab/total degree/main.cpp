#include <iostream>

using namespace std;

int main()
{
    int totalGrade=0;
    int classAvg=0;
    int classTotal=0;
    int grades [4][3];
    int degree, student;

     for(degree=0 ; degree<4; degree++){
        for(student=0 ; student<3;student++){
            cout << "enter degree of subject "<<(degree+1)<< "for student"<<(student+1)<<endl;
            cin >> grades[degree][student];
        }
     }

    for(degree=0 ; degree<4; degree++){
        for(student=0 ; student<3; student++){
            classTotal += grades[degree][student];
        }
        classAvg =classTotal/3;
        classTotal=0;
        cout<< "avg class degree "<<(degree+1)<<"="<< classAvg<<endl;
        }

      for(student=0 ; student<3; student++){
            for(degree=0 ; degree<4; degree++){
                totalGrade += grades[degree][student];
            }
            cout<< "total student degree "<<(student+1)<<"="<< totalGrade<<endl;
            totalGrade=0;
        }
}
