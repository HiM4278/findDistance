#include<iostream>
#include<cmath>
using namespace std;
double findDistance(double u ,double a , double t){
    double S = (u*t)+(0.5*a*(t*t));
    return S;
 }
    int main(){
        cout << findDistance(27.7777778,-6.9 ,1);
        return 0;
    }