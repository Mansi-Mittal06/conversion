
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int arr[32];
    int n,i=0,j;
    std::cout<<"enter decimal number";
    std::cin>>n;
    while(n>=1)
    {
        arr[i]=n%2;
        n=n/2;
        i++;

    }
    std::cout<<"binary equivalent of given no. is: \n";
    for(j=i-1;j>=0;j--)
    {
     std::cout<<arr[j];
     std::cout<<std::endl;
    }
     return 0;
}
