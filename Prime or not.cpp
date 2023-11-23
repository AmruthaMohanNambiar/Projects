#include <iostream>
using namespace std;
int main() 
{
    int a,i,count;
    cout << "Enter a number:";
    cin>>a;
    for(i=2; i<=a;i++)
    {
        if(a%i==0)
        {
            count++;
        }
    }
    if(count==1)
    {
        cout<<"Prime"<<endl;
    }
    else
    {
        cout<<"Not Prime"<<endl;
    }

    return 0;
}