//Accept number from user and return its factorial
// much better cpp 
#include<iostream>
using namespace std;
class Number
{
    private:
        int iNo; //Characteristics of class

    public:
        //Behaviours
        void Accept()   //Setter
        {
            cout<<"Enter the value :"<<endl;
            cin>>this->iNo;
        }

        void Display()  //Getter
        {
            cout<<"Value is :"<<this->iNo<<endl;
        }

        int Factorial()
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
    int iRet=0;
    
    nobj.Accept();
    nobj.Display();
   
    iRet=nobj.Factorial();

    return 0;
}
