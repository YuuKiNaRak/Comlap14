#include <iostream>
#include <cmath>
using namespace std;

void stat(const double[],int,double[]);

int main(){
    double A[] = {1.2,3.5,6.9,7.8,12.5,0.5};
    int N = sizeof(A)/sizeof(A[0]);
    double B[6];
    stat(A,N,B);
    cout << "Arithmetic Mean = " << B[0];
    cout << "\nStandard Deviation = " << B[1];
    cout << "\nGeometric Mean = " << B[2];
    cout << "\nHarmonic Mean = " << B[3];
    cout << "\nMax = " << B[4];
    cout << "\nMin = " << B[5];
    return 0;
}
void stat(const double a[], int N,double B[]){
    double sum=0,SD=0,GM=1,HM=0,Max=a[0],Min=a[0];
    for(int i=0;i<N;i++){
        sum+=a[i];
        SD+=pow(a[i],2);
        GM*=a[i];
        HM+= 1/a[i];
        if(a[i] > Max)Max=a[i];
        if(a[i] < Min)Min=a[i];
    }
    B[0] = sum/N;
    B[1] = sqrt((SD/N)-pow(B[0],2));
    B[2] = pow(GM , 1.0/N);
    B[3] = N / HM;
    B[4] = Max;
    B[5] =Min;
}
