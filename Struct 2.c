#include <stdio.h>
#include <stdlib.h>

/* Pemrograman string */
typedef struct{
	int tanggal;
	char bulan[15];
	int tahun;
}data_tanggal;
typedef struct{
	long int nip;
	char nama[50];
	char alamat[60];
	data_tanggal tanggal_lahir;
}data_dosen;
data_dosen dosen;
main(){
	//untuk input
	printf("Nip :"); scanf("%li",&dosen.nip);
	printf("Nama :"); fflush(stdin); gets(dosen.nama);
	printf("Alamat :"); fflush(stdin); gets(dosen.alamat);
	printf("Tanggal lahir :");
	scanf("%i",&dosen.tanggal_lahir.tanggal);
	printf("Bulan lahir :");
	scanf("%s",dosen.tanggal_lahir.bulan);
	printf("Tahun lahir :");
	scanf("%i",&dosen.tanggal_lahir.tahun);
	printf("\n\n");
	
	//out put
	printf("Nip :%li\n",dosen.nip);
	printf("Nama :%s\n",dosen.nama);
	printf("alamat :%s\n",dosen.alamat);
	printf("Tanggal lahir : %i\n", dosen.tanggal_lahir.tanggal);
	printf("Bulan lahir : %s\n", dosen.tanggal_lahir.bulan);
	printf("Tahun lahir : %i\n", dosen.tanggal_lahir.tahun);
	printf("\n\n");
}

