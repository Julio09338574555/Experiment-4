// Practice of using operations in functions
#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
#include<iomanip> 

//declare variables
char op;
using namespace std;

// declare function per operator
void sum()
   {
     
    int sum = 0;
    int n1, n2;
     cout<<"enter two numbers to find sum;\n\n";
     cout<<"enter first number:";
     cin>>n1;
     cout<<"\nenter second number:";
     cin>>n2;
     sum=n1+n2;
     cout<<"\nsum is:"<<sum<<endl<<endl;	
}
void diff()
    {
     int diff;
     int n1,n2;
     cout<<"enter two numbers to find their difference:\n\n";
     cout<<"enter first number:";
     cin>>n1;
     cout<<"\nenter second number:";
     cin>>n2;
     diff=n1-n2;
     cout<<"\ndifference is:"<<diff<<endl<<endl;
     }
     
void pro()
    
    {
     int pro;
     int n1,n2;
     cout<<"enter two numbers to find their product\n\n";
     cout<<"enter first number:";
     cin>>n1;
     cout<<"\nenter second number:";
     cin>>n2;
     pro=n1*n2;
     cout<<"\nproduct is:"<<pro<<endl<<endl;
     }
     
       
 void divi()
     {
      int divi;
      int n1;
      int n2;
      cout<<"enter 2 numbers to find their quotient\n\n";
      cout<<"enter numerator:";
      cin>>n1;
      cout<<"\nenter denominator:";
      cin>>n2;
      divi=n1/n2;
      cout<<"\nquotient is:"<<divi<<endl<<endl;
      }      

 void mod ()
     {
      int mod;
      int n1;
      int n2;
      cout<<"enter 2 numbers to find their remainder\n";
      cout<<"enter numerator:";
      cin>>n1;
      cout<<"\nenter denominator:";
      cin>>n2;
      mod=n1%n2;
      cout<<"\nremainder is :" <<mod<<endl<<endl;
      }      

int main()
{   
    //declare variables
    char choice;
    bool goagain = true;
    
    // start of while loop 
    while (goagain ==true)
    {
  
	cout << "Welcome to Operation Calculator! " << endl;
    cout<<"***which operation you want to perform***\n";
    cout<<"press 1 for addition \n";
    cout<<"press 2 for subtraction\n";
    cout<<"press 3 for multiplication\n";
    cout<<"press 4 for division\n";
	cout <<"press 5 for modulus\n";
    cin>>op;

    // using of switch statement for the choices
    switch(op)
    {
              case '1':
              sum();
              break;

              case '2':
              diff();
              break;

              case '3':
              pro();
              break;

              case '4':
              divi();
			  break;

			  case '5':
              mod();
              break;
      
              default:
              cout<<"invalid input"  ;
	} // end of switch statement
	
	// declares if the program wants to continue or not
	cout << "Continue? (Y/N)" << endl;
	cin >> choice;
	
	// declare IF statement to terminate the program
	if (choice == 'N' || choice =='n')
	{
	    cout << "\nExiting..." << endl;
	    goagain = false;
	}// end of IF statement
	
	else 
	cout << " " << endl;
	
    }// end of while loop
                                                                         
    cout << endl;
                    
    getch();
	return 0;
}// end of main function