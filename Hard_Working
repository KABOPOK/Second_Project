#include <iostream>
using namespace std;
#define cub(a) double((a)*(a)*(a))
#define sqr(b) double((b)*(b))
int main (){
    int a,b,w,h;
    double x,y, f;
    w=41;
    h=21;
    char mass[h][w];
    for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            x=1.5-3.0*j/(w-1);
            y=1.5-3.0*i/(h-1);
            f = cub(sqr(x)+ sqr(y) -1) - sqr(x)*cub(y);
            cout<<((f<=0)?  "*" :  ".");
            }
            cout << endl;
        }


    /*    for (int i = 0; i < h; ++i) {
        mass [i][21] = '|';
    }
        for (int i = 0; i < w; ++i) {
        mass [11][i] = '-';
    }
     for (int i = 0; i < h; ++i)
    {
        for (int j = 0; j < w; ++j)
        {
            cout << mass[i][j];
        }
        cout << endl;
    }*/


	return 0;
}
