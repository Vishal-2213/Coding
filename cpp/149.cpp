//Accept numbers from user and return its sum

#include<iostream>
using namespace std;
class ArrayX
{
    private:
        int *Arr;
        int iSize;

    public:
        ArrayX(int iValue)  //parameterised constructor
        {
            this->iSize=iValue;
            Arr = new int[iSize];    //allocate the resource
        }

        ~ArrayX()   //destructer
        {
            delete[]Arr;
        }

        void Accept()
        {
            int iCnt=0;
            cout<<"Enter the elements "<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt=0;
            cout<<"Elements of array are "<<endl;
            for(iCnt=0;iCnt<iSize;iCnt++)
            {
                cout<<Arr[iCnt]<<endl;
            }

        }
        int Summation()
        {
            int iSum =0;
            for(int i=0;i<=iSize;i++)
            {
                iSum=iSum+Arr[i]; 
            }
            return iSum;
        }
};


int main()
{  
    int iRet=0;
    
    ArrayX obj1(5);

    obj1.Accept();
    obj1.Display();
   
    iRet=obj1.Summation();

    cout<<"Addition is : "<<iRet<<endl;

    return 0;
}
