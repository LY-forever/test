#include<iostream>
#include<cstring>
int main()
{
    using namespace std;
    char animal[20] = "bear";
    const char *bird = "wren";
    char *ps;
    cout<<animal<<" and ";
    cout<<bird<<"\n";
    cout<<"Enter a kind of animal:";
    cin>>animal;
    ps = animal;
    cout<<ps<<"s!\n";
    cout<<"Before using strcopy():\n";
    cout<<animal<<" at "<<(int *)animal<<endl;
    cout<<ps<<" at "<<(int *)ps<<endl;

    ps = new char[strlen(animal)+1];  //get new storage
    strcpy(ps,animal);                //copy string to new storage
    cout<< "After using strcopy():\n";
    cout<<animal<<" at "<<(int *)animal<<endl;
    cout<<ps<<" at "<<(int *)ps <<endl;
    delete [] ps;
    return 0;
}
