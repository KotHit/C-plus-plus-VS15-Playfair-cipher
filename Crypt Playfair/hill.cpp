#include<iostream>
//#include<cstring>
//#include<windows.h>

using namespace std;

int main()
{
	char abc[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char input[] = "KUDRINSKI";
	int intstr[9];
	int intstrResult[9];
	char rezult[]= "KUDRINSKI";
	char cr[]= "KUDRINSKI";
	int key[3][3] = {{6, 24, 1},{13, 16, 10},{20, 17, 15}};
	int keyDet = -1;
	int keyInv[3][3]={{8, 5, 10},{21, 8, 21},{21, 12, 8}};
	int N=0, X=0, Y=0;
	int X1=10, Y1=10, X2=10, Y2=10;

	for(int i=0; i<9; i++)
		for(int j=0; j<26; j++)
			if(input[i]==abc[j]) intstr[i]=j;
		
		
	for(int k=0; k<9; k+=3)
	{
		for(int i=0; i<3; i++)
		{
			rezult[k+i]=abc[(key[i][0]*intstr[k]+key[i][1]*intstr[k+1]+key[i][2]*intstr[k+2])%26];
		}
	}
	cout << "begin..." << endl;
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++)
			cout<< keyInv[i][j] << " ";
		cout << " " << endl;
		cout << " " << endl;
	}
	cout << "Rezult..." << endl;
	for(int i=0; i<9; i++)
		cout << rezult[i];
	
	for(int i=0; i<9; i++)
		for(int j=0; j<26; j++)
			if(rezult[i]==abc[j]) intstrResult[i]=j;
	
	for(int k=0; k<9; k+=3)
	{
		for(int i=0; i<3; i++)
		{
			cr[k+i]=abc[(keyInv[i][0]*intstrResult[k]+keyInv[i][1]*intstrResult[k+1]+keyInv[i][2]*intstrResult[k+2])%26];
		}
	}
	cout << " " << endl;
		for(int i=0; i<9; i++)
		cout << cr[i];
		system("Pause");
	return 0;
}
