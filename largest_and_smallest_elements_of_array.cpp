#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the array"<<endl;
    for (int i=1;i<n;i++)
    {
        cin>>a[i];
    }
    int largest = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>largest)
        {
            largest = a[i];
        } 
    }
    int smallest = a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]<smallest)
        {
            smallest = a[i];
        } 
    }
    cout<<"The largest value is"<<" "<<largest<<endl;
    cout<<"The smallest value is"<<" "<<smallest<<endl;
    return 0;
}
