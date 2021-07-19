#include <stdio.h>
#include <stdlib.h>

/* Pemrograman string */
typedef struct //deklarasi untuk struct
{
	long int nip;
	char nama[50];
	char alamat[50];
	
}data_dosen;
data_dosen dosen1,dosen2; //deklarasi variabel struct
main()
{
	//untuk input
	printf("Data Dosen Pertama :\n");
	printf("------------\n");
	printf("Nip :"); scanf("%li",&dosen1.nip);
	printf("Nama :"); fflush(stdin); gets(dosen1.nama);
	printf("Alamat :"); fflush(stdin); gets(dosen1.alamat);
	printf("\n\n");
	printf("Data dosen kedua :\n");
	printf("------------\n");
	printf("Nip :"); scanf("%li",&dosen2.nip);
	printf("Nama :"); fflush(stdin); gets(dosen2.nama);
	printf("Alamat :"); fflush(stdin); gets(dosen2.alamat);
	printf("\n\n");
	//out put
	printf("Data dosen pertama :\n");
	printf("------------\n");
	printf("Nip :%li\n",dosen1.nip);
	printf("Nama :%s\n",dosen1.nama);
	printf("alamat :%s\n",dosen1.alamat);
	printf("\n\n");
	printf("Data dosen kedua :\n");
	printf("------------\n");
	printf("Nip :%li\n",dosen2.nip);
	printf("Nama :%s\n",dosen2.nama);
	printf("alamat :%s\n",dosen2.alamat);
	printf("\n\n");
	
}
