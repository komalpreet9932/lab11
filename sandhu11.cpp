#include<iostream>
#include<math.h>
using namespace std;
void sum()
   {
     
    int sum;
    int a;
    int b;
    int number;
    cout << "Enter two number to find their addition:"<<endl;
     cout<<"Enter first number:"<<endl;
     cin>>a;
     cout<<"Enter second number:"<<endl;
     cin>>b;
     sum=a+b;
     cout<<"additionis :"<<sum<<endl;

   }
    void sub()
    {
     int sub;
     int a,b;
     cout<<"enter two numbers to find their subtraction:"<<endl;
     cout<<"enter first number:"<<endl;
     cin>>a;
     cout<<"enter second number:"<<endl;
     cin>>b;
     sub=a-b;
     cout<<"subraction is:"<<sub<<endl;
     }
     void  mul()
    
    {
     int mul;
     int a;
     int b;
     int number;
     cout<<"Enter two number to find their multiplication:"<<endl;
     cout<<"Enter first number:"<<endl;
     cin>>a;
     cout<<"Enter second number:"<<endl;
     cin>>b;
     mul=a*b;
     
     cout<<"multiplication is:"<<mul<<endl;    
     }
        void div()
     {
      int div;
      int a;
      int b;
      cout<<"Enter 2 numbers to find their divison:"<<endl;
      cout<<"Enter numerator:"<<endl;
      cin>>a;
      cout<<"Enter denominator:"<<endl;
      cin>>b;
      div=a/b;
      cout<<"divison is:"<<div<<endl;
      }      
void sq()
     {
     float s;
     int a;
     cout<<"Enter number to find its square root:"<<endl;
     cin>>a;
     s=sqrt(a);
     cout<<"square root of "<<a<<" is :"<<s<<endl;
     }
           
void exponent()
     {
    
      double number,power, result;
    cout<<"Enter the number to raise to power: "<<endl;
    cin>>number;
    cout<<"Enter the power to raise to: "<<endl;
    cin>>power;

    result = pow(number,power);

    cout<< number <<"^"<< power<<" = "<< result <<endl;

     }
     int main()
     {
           cout<<"***-------------------------------------***"<<endl;
           cout <<"Do you want to do the Calculations"<<endl;
           cout <<"let's get started"<<endl;
           cout <<"***------------------------------------***"<<endl;
           cout<<"Enter a number to select the program you want to run:"<<endl;
           cout<<"1: Addition"<<endl;
           cout<<"2: Subtraction"<<endl;
           cout<<"3: Multiplication"<<endl;
           cout<<"4: Division"<<endl;
           cout<<"5: Sqaueroot"<<endl;
           cout<<"6: Exponential"<<endl;
           cout<<"Any other key:Exit"<<endl;

           int selection;
    cin >> selection;

    if (cin.fail() || selection < 1 || selection > 6) {
        cout << endl;
        cout << "Have a nice day, goodbye!" << endl;
        return 0;
           
     }
     if(selection == 1)

     {
           sum();

     }
     if(selection == 2)

     {
           sub();
           
     }
     if(selection == 3)

     {
           mul();
           
     }
     if(selection == 4)

     {
           div();
           
     }
     if(selection == 5)

     {
           sq();
           
     }
     if(selection == 6)

     {
           exponent();
           
     }
     return 0;
     }