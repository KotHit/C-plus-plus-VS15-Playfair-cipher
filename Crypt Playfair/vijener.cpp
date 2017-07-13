#include<iostream>
using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	system("chcp 1251");
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char input[] = "KUDRINSK";
	char crypt[] = "MONDAY";
	int M, C;
	
	cout << "begin..." << endl;
	for(int i = 0; i<strlen(input); i++)
	{
		
		input[i]=toupper(input[i]);
		for(int j=0; j<strlen(alphabet); j++)
			if(crypt[i%strlen(crypt)]==alphabet[j])
				C=j;
				
		cout << input[i];
		for(int j = 0; j<strlen(alphabet); j++)
		{
			if(input[i]==alphabet[j])
			{
				M=j+C;

				input[i]=alphabet[M%strlen(alphabet)];
				break;
			}
		}
	}
	cout << "\n" << input << "\ndecrypt" << endl;
	for(int i = 0; i<strlen(input); i++)
	{
		for(int j=0; j<strlen(alphabet); j++)
			if(crypt[i%strlen(crypt)]==alphabet[j])
				C=j;
				
		for(int j = 0; j<strlen(alphabet); j++)
		{
			if(input[i]==alphabet[j])
			{
				M=j-C;
				if(M<0)
				{
					M=strlen(alphabet)+M;
				}
				input[i]=alphabet[M];
				break;
			}
		}
	}
	cout << input << endl;
	system("pause");
	return 0;
}
