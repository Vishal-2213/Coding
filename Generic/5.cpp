//Addition of 2 numbers
//generic 
#include<iostream>
using namespace std;

template<class T>
int Addition(T A , T B)
{
    T Ans;
    Ans= A+B;
    return Ans;
}
int main()
{
    int iNo1= 11, iNo2=21;
    int ret=0;
    ret = Addition(iNo1,iNo2);
    cout<<"Addition: "<<ret<<endl;

    float fNo1= 11.01, fNo2=21.01;
    float ret2=0.0;
    ret2 = Addition(fNo1,fNo2);
    cout<<"Addition: "<<ret2<<endl;

    return 0;
}