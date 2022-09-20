//display 5 times hello on screen
#include<stdio.h>
//demonstration of sequence
void Display();   //function declaration

void Display(int iEnter)          //function definition
{                               
  int iCnt=0;
  if(iEnter<0)
  {
      iEnter=-iEnter;
  }
  for(iCnt=1;iCnt<=iEnter;iCnt++){
      printf("Hello\n");
  }
}
int main()
{
    int iNum=10;
    printf("Enter number?");
   // scanf("%d",&iNum);

   Display(iNum);       //function call
   return 0; 
}
