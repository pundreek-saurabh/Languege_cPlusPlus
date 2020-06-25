#include <iostream>
using namespace std;
inline void swap(int &i,int &j){
    int temp= i;
    i=j;
    j=temp;
}
inline void swap(double &x, double &y){
    double temp=x;
    x=y;
    y=temp;
}
int main(){
    int m=5,n=6;
    double x=5.3, y=4.7;
    cout<< "input:"<<m<<","<<n<<endl;
    swap(m,n);
    cout<<"output:"<<m<<","<<n<<endl;
    cout<<"double inputs:"<<x<<","<<y<<endl;
    swap(x,y);
    cout<<"double output: "<<x<<","<<y<<endl;
}