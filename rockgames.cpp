#include <iostream>
#include <conio.h>
#include<string>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	
	srand(time(NULL));
	
	printf("=========================\nATURAN PERMAINAN\n");
	printf("Komputer akan menyediakan jumlah batu secara acak ...");
	printf("\n\nPilih giliran");
	printf("\n1. Computer mulai dulu.");
	printf("\n2. Anda mulai dulu.");
	
	int batu = 4 * (rand()%11+5) ;   //4N
	//while ( input <1 || input >2 )
	
	char input=0;
	bool humanturn = true;
	while ( true )
	{
		printf("\nPilihan Anda =");
		input = getch();
		
		if ( input == '1')
		{
			batu = batu + (rand()%3+2) ;
			printf("1\n");
			humanturn = false;
			break;
		}
		else if ( input == '2')
		{
			batu = batu + 1;
			printf("2\n");
			break;
		}
		else if (input == 'o') //computer dulu
		{
			batu = batu + 1;
			printf("1\n");
			humanturn = false;
			break;
		}
		else if ( input == 'p')
		{
			batu = batu + (rand()%3+2) ;
			printf("2\n");
			break;
		}
		else
			printf("Inputan salah\n");
	}
	
	printf("Jumlah batu yang disediakan adalah = %d\n",batu);
	
	while (batu>0)
	{
		int ambil=0;
		if(humanturn==true)
		{
			printf("Jumlah batu yang ingin diambil =");
			scanf("%d",&ambil);
			humanturn = false;
			while(ambil<1||ambil>3||ambil>batu)
			{
				printf("Inputan salah\n");
				printf("Sisa batu sekarang adalah=%d\n",batu);
				printf("Jumlah batu yang ingin diambil =");
				scanf("%d",&ambil);
			}
		}
		else
		{
			if(batu %4 ==2)
				ambil = 1;
			else if(batu % 4 == 3)
				ambil = 2;
			else if (batu % 4 == 0)
				ambil = 3;
			else
				ambil = rand()%3+1;
				
			if (ambil > batu)
				ambil = batu;
			
			printf("Jumlah batu yang komputer ambil=%d\n",ambil);
			humanturn = true;
		}
		batu = batu  - ambil;
		printf("Sisa batu sekarang adalah=%d\n",batu);
	}
	
	if ( humanturn == true)
		printf("Anda menang");
	else
		printf("Computer menang");
}
