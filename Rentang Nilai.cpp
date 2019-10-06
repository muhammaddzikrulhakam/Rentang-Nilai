#include<iostream>
#include<conio.h>
using namespace std;
main ()
{
	ulang:
	system("cls");
double NilaiUjian;
char skor;
     
cout << "SELAMAT DATANG DI RENTANG ANGKA \n";
cout << "BY M DZIKRUL HAKAM";
     
cout<<"\n";
cout<<"\nMasukan Nilai Ujian : ";
cin>>NilaiUjian;

if(NilaiUjian >= 90)
skor= 'A' ;
else

if(NilaiUjian >= 70)
skor= 'B';
else

if(NilaiUjian >= 60)
skor= 'C';
else 

if(NilaiUjian >= 50)
skor= 'D';
else
skor= 'E';
    
cout<<" Skornya adalah : "<<skor<<endl;

cout<<"\n";
		system("pause");
		goto ulang;	
}
