#include <iostream>
#include <string>
using namespace std;
int main()
{
	int mat[5][3] = {{2,1,2}, {5,1,3}, {1,5,4}, {3,4,5}, {5,4,3}}, r = 5;
/*	int mat[100][100];
	int r,c;
	cout<<"enter number of rows"<<endl;
	cin>>r;
	cout<<"enter number of cols"<<endl;
	cin>>c;
	cout<<"enter the input state table"<<endl;
	for(int i=0;i<r;i++)
	{
		for(int j=0;j<c;j++)
		{
			cin>>mat[i][j];
		}
	}
*/	
	string input;
	cout<<"Enter the input sequence: "<<endl;
	cin>>input;
	int state = 1, l = 0;
	while(l<input.length())
	{
		char c = input[l++];
		state = mat[state-1][c-'0'];	
		cout<<"State after input "<< c <<" is: " << (char)((state-1)+'A')<< endl;	
	}
	cout<<"The final state is: " << (char)((state-1)+'A')<< endl;
	if(state == r)
		cout<<"Input Accepted"<<endl;
	else 	
		cout<<"Input Rejected"<<endl;

	return 0;
}

