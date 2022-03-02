#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    int sum = 0;
    for (int i=1;i<n+1;i++)
    {
        sum = sum + i*i;
    }
    cout<<"Sum of"<<n<<"natural numbers is"<<sum<<endl;
return 0;
}