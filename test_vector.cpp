#include<vector>
#include<iostream>
using namespace std;
int main()
{
	vector<int> sample(3,5);//向量sample初始化为3个5
	vector<int> intv;
	int temp,i;
	cout<<"Enter numbers and press 0 to end"<<endl;
	cin>>temp;
	while(temp!=0)
	{
		intv.push_back(temp);				//存向向量intv中添加元素
		cin>>temp;
	}
	cout<<"There are "<<intv.size()<<"elements in intv."<<endl;
	for(i=0;i<intv.size();i++)				//输出向量intv中的元素
		cout<<intv[i]<<" ";	
	cout<<"Sample element is :";
	for(i=0;i<3;i++)
		cout<<sample[i]<<" ";
	cout<<endl;
	return 0;
}