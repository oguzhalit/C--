#include<iostream>
using namespace std;
int main()
{
	int b[3][2]={{1,2},
		     {2,3},
		     {3,4}};
	cout<< *(&b[0][1])+10 << endl;
}
