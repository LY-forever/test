#include<iostream>
int main()
{
    using namespace std;
    short stacks[3] = {1,2,3};
    short *p = stacks;
    cout<<stacks[0]<<endl;
    cout<<stacks<<endl;
    cout<<&stacks[0]<<endl;
    cout<<*p<<endl;
    cout<<"p = "<<p<<endl;
    return 0;
}
