//Accept number from user and display it
//generic
#include<iostream>
using namespace std;

template<class T>
void Display(T Arr[], int size)
{
    int i=0;
    for(i=0;i<size;i++) 
    {
        cout<<Arr[i]<<endl;
    }
}
int main()
{
    int Brr[]={10,20,30,40,50};
    Display(Brr,4);

    float Crr[]={10,20,30,40,50,60};
    Display(Crr,5);
    
    return 0;
}