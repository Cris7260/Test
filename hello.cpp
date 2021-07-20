#include <iostream>
using namespace std;
int main()
{
	cout<<"Hello World!"<<endl;
	string instr;
	cin>>instr;
	if(instr=="Nokia")
		cout<<"Hello Nokia!"<<endl;
	else
		cout<<"Oops! Unknown \""<<instr<<"\""<<endl;
	return 0;
}
