//Accept number from user and return its factorial
//better cpp 
#include<iostream>
using namespace std;
class Number
{
    public:
    int Factorial(int iNo)
    {
        int iFact =1;
            for(int i=1;i<=iNo;i++)
            {
                 iFact=iFact*i; // iFact*=i;
            }
        return iFact;
    }
};

int main()
{
    Number nobj;
    int iValue=0;
    int iRet=0;
    
    cout<<"Enter number"<<endl;
    cin>>iValue;

    iRet=nobj.Factorial(iValue);
    cout<<"Factorial is : "<<iRet<<endl;

    return 0;
}
