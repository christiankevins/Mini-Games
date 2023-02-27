#include <iostream>
#include<string>
#include<time.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int main()
{
	printf("Mind Games\n");
	printf("1. Pikirkan suatu angka antara 10 - 99 (misal 10)\n2. Tambahkan kedua angka tersebut (1 + 0 = 1) \n3. Jadikan angka hasil penjumlahan menjadi bil pengurang (10 - 1 = 9) \n4. Konsentrasikan pikiran anda pada karakter dari angka anda (angka anda = 9)\n,\n");
	
	srand(time(NULL));
	int bilangan = 99;
	
	char input[100];
	char simbol[15];
	int x  = 33;
	
	for(int a=0;a<=15;a++)
	{
		simbol[a]=x;
		x=x+1;
	}
	simbol[1] = rand()%15 + 33;
	
	for(int a=0;a<=9;a++)
	{
		for(int b=0;b<=9;b++)
		{
			if (a+b==9)
			{
				printf("%d = %c ",bilangan,simbol[1]);
				bilangan=bilangan-1;
			}
			else if(a<9)
			{
				int acak = rand()%16;
				printf("%d = %c  ",bilangan,simbol[acak]);
				bilangan=bilangan-1;
			}
			else if(a==9)
			{
			int acak = rand()%16;
			printf(" %d = %c  ",bilangan,simbol[acak]);
			bilangan=bilangan-1;
			}
		}
		printf("\n");

	}
	printf("Tiap angka di atas mewakili sebuah karakter\nTekan Enter untuk Melihat Karakter Dari Angka Yang Anda Pikirkan !!!");
	
	scanf("%c",&input);
	printf("Karakter yang ada konsentrasikan adalah %c",simbol[1]);
}
