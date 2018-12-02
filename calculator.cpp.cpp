#include<iostream>
#include<stdio.h>
using namespace std;
void calc ();
int main()
{

    cout << "You can do following operations: + (addition), - (subtraction),* (multiplication), / (division): "<<endl<<endl;
    cout << "You can Calculate here :"<<endl;
  //  for(int i=1;i<=100; i++ )

   while( true)
         {
        calc();
    }
        //{
           // calc();
       // }
}

        void calc ()
{
    double num1, num2;
    char opr;
    cout <<"Enter the numbers = ";
    cin >> num1 ;
    cin >> opr;
    cin>> num2;

    cout << endl;
    cout << num1 << " " << opr << " " << num2 << " = ";
    switch (opr)
        {
            case '+':
            cout << num1 + num2 << endl;
            break;
            case'-':
            cout << num1 - num2 << endl;
            break;
            case'/':
            cout << num1 / num2 << endl;
            break;
            case'*':
            cout << num1 * num2 << endl;
            break;

        }
   }
