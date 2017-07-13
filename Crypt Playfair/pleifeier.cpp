#include<iostream>
#include<cstring>
//#include<windows.h>

using namespace std;

int main()
{
	char abc[][5] = {{'A','B','C','D','E'}, {'F','G','H','I','K'}, {'L','M','N','O','P'}, {'Q','R','S','T','U'},{'V','W','X','Y','Z'}};
	char input[] = "KUDRINSK";
	char crypt[] = "MONDAY";
	char abcNew[5][5];
	int N=0, X, Y;
	int X1=10, Y1=10, X2=10, Y2=10;
	
		for(int i=0; i<8; i++)
	cout << input[i];
	cout << endl;
	cout << endl;
	for(int i=0; i<(sizeof(crypt)/sizeof(crypt[0])); i++)
	{
		if(i==0)
			abcNew[0][0]=crypt[0];
		else if(i>=5)
		{
			   abcNew[i/5][i%5] = crypt[i];
		       X=int(i/5); Y=i%5;}
		else 
		{
			abcNew[i/5][i]=crypt[i];
			X=int(i/5); Y=i;
		}
	}

	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			for(int k=0; k<8; k++)
			{
				if(abc[i][j]==crypt[k])
				{
					N++;
				}
			}
			if(N==0)
			{
				abcNew[X][Y]=abc[i][j];
				if(Y==4){Y=0; X++;}
				else {Y++;}
			}
			N=0;
		}
	}
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			cout << abcNew[i][j]<< " ";
		}
		cout << " " << endl;
	}
	
	cout<<endl;
	
	for(int k=0; k<8;k+=2)
	{
		for(int i=0; i<5; i++)
		{
			for(int j=0; j<5; j++)
			{
				if(input[k]==abcNew[i][j])
				{
					X1=i; Y1=j; break;
				}
				if(X1!=10 && Y1!=10) break;
			}
		}
		for(int i=0; i<5; i++)
		{
			for(int j=0; j<5; j++)
			{
				if(input[k+1]==abcNew[i][j])
				{
					X2=i; Y2=j; break;
				}
				if(X2!=10 && Y2!=10) break;
			}
		}
		if(X1==X2)
		{	
			if(Y1==4) Y1=0;
			else Y1++;
			
			if(Y2==4) Y2=0;
			else Y2++;
		}
		else if(Y1==Y2)
		{
			if(X1==4) X1=0;
			else X1++;
			
			if(X2==4) X2=0;
			else X2++;
		}
		else 
		{
			int tempY;
			tempY=Y1; Y1=Y2; Y2=tempY;
		}
		input[k]=abcNew[X1][Y1];
		input[k+1]=abcNew[X2][Y2];
		X1=10; X2=10; Y1=10; Y2=10;
	}

	
	for(int i=0; i<8; i++)
	cout << input[i];
	cout<< endl;
	cout<< endl;
	
for(int k=0; k<8;k+=2)
	{
		for(int i=0; i<5; i++)
		{
			for(int j=0; j<5; j++)
			{
				if(input[k]==abcNew[i][j])
				{
					X1=i; Y1=j; break;
				}
				if(X1!=10 && Y1!=10) break;
			}
		}
		for(int i=0; i<5; i++)
		{
			for(int j=0; j<5; j++)
			{
				if(input[k+1]==abcNew[i][j])
				{
					X2=i; Y2=j; break;
				}
				if(X2!=10 && Y2!=10) break;
			}
		}
		if(X1==X2)
		{	
			if(Y1==0) Y1=4;
			else Y1--;
			
			if(Y2==0) Y2=4;
			else Y2--;
		}
		else if(Y1==Y2)
		{
			if(X1==0) X1=4;
			else X1--;
			
			if(X2==0) X2=4;
			else X2--;
		}
		else 
		{
			int tempY;
			tempY=Y1; Y1=Y2; Y2=tempY;
		}
		input[k]=abcNew[X1][Y1];
		input[k+1]=abcNew[X2][Y2];
		X1=10; X2=10; Y1=10; Y2=10;
	}

	
	for(int i=0; i<8; i++)
	cout << input[i];
	system("pause");
	return 0;
}

