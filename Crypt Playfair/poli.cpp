#include<iostream>
using namespace std;

int main()
{
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char input[] = "CREATEWHEATHERTODAYY";
	char array_i[4][5];
	char array_crypt[4][5];
	int key_crypt[5]={0, 3, 4, 1, 2};
	
	
	for(int i=0; i<25; i++)
		if(i==0)
			array_i[0][i%5]=input[i];
		else
			array_i[i/5][i%5]=input[i];

	for(int i=0; i<4;i++)
	{
		for(int j=0; j<5;j++)
			cout << array_i[i][j] << " ";
		cout << " " << endl;
	}
	cout <<" " <<endl;
	
	for(int i=0; i<5; i++)
		for(int j=0; j<5; j++)
			array_crypt[i][key_crypt[j]]=array_i[i][j];

	
	for(int i=0; i<4;i++)
	{
		for(int j=0; j<5;j++)
			cout << array_crypt[i][j] << " ";
		cout << " " << endl;
	}
	for(int i=0; i<25; i++)
		if(i==0)
			input[i]=array_crypt[0][i%5];
		else
			input[i]=array_crypt[i % 5][i / 5];

	cout << " " << endl;
		for(int i=0; i<25; i++)
		cout << input[i];
		system("pause");
	return 0;
}
