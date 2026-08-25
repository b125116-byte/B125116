#include <iostream>
using namespace std;

int larger (int a, int b){
    return (a > b) ? a : b;
}
float larger (float a, float b)
{
    return (a > b) ? a : b;
}
int larger (int a , int b, int c)
{
    int max = a;

    if(b>max)
    max = b;
    if( c > max)
    max = c;

    return max;
}
int main(){
    int a,b,c;
    float x,y;

    
    cout << "Larger: "<< larger(2,3) << endl;

   
    cout << "Larger:"<< larger(1.5f,2.5f) << endl;

    
    cout << "Larger:" << larger(5,6,7) << endl;

    return 0;
}