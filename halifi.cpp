#include <stdio.h>
#include <iostream.h>
#include <conio.h>
main()
{

awal:


char kode,nmbuku,bns,lagi;
int harga,jumlah,potongan;
clrscr();
cout<<"\nKode buku [1|2|3]             : ";cin>>kode;
cout<<"\nJumlah Yang Akan Di beli      : ";cin>>jumlah;
cout<<"\n     **** TOKO BUKU HALIFI **** ";
cout<<"\n        JL. Keadilan No. 16 ";
cout<<"\n------------------------------------";
cout<<"\nNama Buku Yang Anda Beli      : "<<nmbuku;

switch(kode)
{

	case'1':
	{
	cout<<"sukses Belajar Borland C++"<<nmbuku;
	harga=50000;
	break;
	}
	case'2':
	{
	cout<<"Kunci Pribadi Yang Sukses"<<nmbuku;
	harga=35000;
	break;
	}
	case'3':
	{
	cout<<"Mencari Mutiara Di Dasar Hati"<<nmbuku;
	harga=45000;
	break;
	}

	default:
	{
	cout<<"\nAnda salah Memasukkan Kode";
   goto bawah;
	}
}

cout<<"\nHarga Buku                    : "<<harga;



if(jumlah>5)
{
potongan = harga*0,1;

}

else
{
potongan =0;
}

cout<<"\nPotongan                      : "<<potongan;
cout<<"\nBonus Yang Di dapat           : "<<bns;
if(jumlah>5)
{
cout<<"NOTEBOOK"<<bns;
}
else
{
cout<<"Tidak Dapat"<<bns;
}

float total;
total=harga*jumlah;
cout<<"\nTotal Harga                   : "<<total;

float ppn;
ppn=total*0,1;
cout<<"\nPPN                           : "<<ppn;
cout<<"\n-----------------------------------------";

float gtotal;
gtotal=ppn+total;
cout<<"\nGrand Total                   : "<<gtotal;



cout<<"\n****T E R I M A  K A S I H****";
cout<<endl;
bawah:

cout<<"\nINGIN INPUT LAGI Tekan [Y]    : ";cin>>lagi;


if(lagi=='Y'||lagi=='y')
{
goto awal;
}

getch();
}