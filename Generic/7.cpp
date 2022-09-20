//Display mAx
//generic
#include<iostream>
using namespace std;

template<class T>
T Max(T Arr[], int size)
{
    int i=0;
    T iMax=Arr[0];
    for(i=0;i<size;i++) 
    {
        if(Arr[i]>iMax)
        {
            iMax=Arr[i];
        }
    }
return iMax;

}
int main()
{
    int Brr[]={10,20,30,40,50};
    Max(Brr,4);
    int ret=Max(Brr,4);
    cout<<"Maximum is: "<<ret<<endl;

    float Crr[]={10,20,30,40,50,60};
    Max(Crr,5);
    
    return 0;
}