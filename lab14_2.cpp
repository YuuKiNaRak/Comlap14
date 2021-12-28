#include <iostream>
#include <cmath>
using namespace std;

const int N = 30;
const int M = 70;

void updateImage(bool [][M],int,int,int);

void showImage(const bool [][M]);

int main()
{
    bool image[N][M] = {};
    int s,x,y;
    do{
        showImage(image);
        cout << "Input your brush size and location: ";
        cin >> s >> x >> y;
        updateImage(image,s,x,y);
    }while(s != 0 || x != 0 || y != 0);
    return 0;
}
void showImage(const bool photo[][M]){
    cout << "------------------------------------------------------------------------\n";
    for(int i=0;i<N;i++){
        cout << "|";
        for(int j=0;j<M;j++){
            if(photo[i][j]==0)cout << " ";
            if(photo[i][j]==1)cout << "*";
        }
        cout << "|" << endl;
    }
    cout << "------------------------------------------------------------------------\n";
}

void updateImage(bool photo[][M],int c,int a,int b){
    for(int i=0;i<N;i++){
        for(int j=0;j<M;j++){
            if(sqrt(pow(i-a,2) + pow(j-b,2))+1<= c){
                photo[i][j]=1;
            }
        }
    }
}
