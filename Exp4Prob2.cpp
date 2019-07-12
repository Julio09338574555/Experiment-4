// Sorting elements of arrays using selection sort
#include<iostream>
#include<conio.h>

using namespace std;

//declare variables in a function
template <class T>
void s_sort(T arr[],int n)
{
    //Using selection sort
     int i,j,t;
     for(i=0;i<n;i++)
     {
        for(j=i+1;j<n;j++)
        {
            if(arr[j]<arr[i]) //for descending order use if(a[j]>a[i]) 
             {
                 t=arr[i];
                 arr[i]=arr[j];
                arr[j]=t;
             }
         }
     }
}

// start of main function
int main()
{
    //declare variables
    int arr[100],i,n;
    cout<<"Enter the number of elements:\n";
    cin>>n;
    
    cout<<"\nEnter " << n <<" elements:\n";
    
    //use selection sorting
    for(i=0;i<n;i++)
    {
    cout<<"\nEnter:";
    cin>>arr[i];
    }
    
    // applying the function stated
    s_sort(arr,n);
    cout<<"\nAfter Sorting...\n";
    
    for(i=0;i<n;i++)
    {
    cout<<arr[i]<<"\t";
    }
    
    getch();
    return 0;
}//end of main function