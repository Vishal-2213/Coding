//Swap two numbers - A= call by address
//generic-1
#include<iostream>
using namespace std;

template<class T>
void SwapA(T *p, T *q)  //A= call by address
{
    T temp;
    temp= *p;
    *p = *q;
    *q= temp;
}
int main()
{
    int No1= 11, No2= 21;
    cout<<"Before swap data is : "<<No1<<" "<<No2<<endl;
    SwapA(&No1, &No2);
    cout<<"After swap data is : "<<No1<<" "<<No2<<endl;
   

    float fNo1= 11.10, fNo2= 21.20;
    cout<<"Before swap data is : "<<fNo1<<" "<<fNo2<<endl;
    SwapA(&fNo1, &fNo2);
    cout<<"After swap data is : "<<fNo1<<" "<<fNo2<<endl;
  
   
    char ch1= 'a', ch2='b';
    cout<<"Before swap data is : "<<ch1<<" "<<ch2<<endl;
    SwapA(&ch1, &ch2);
    cout<<"After swap data is : "<<ch1<<" "<<ch2<<endl;

    return 0;
}