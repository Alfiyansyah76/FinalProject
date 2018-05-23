#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
int pricetotalafter;
int ppn;
int pilih;
int total;
int pricetotal;
//Kode menunya
int pricetag, pricetag1, pricetag2, pricetag3, pricetag4, pricetag5, pricetag6, pricetag7, pricetag8, pricetag9, pricetag10, pricetag11, pricetag12, pricetag13, pricetag14, pricetag15, pricetag16, pricetag17, pricetag18, pricetag19, pricetag20, pricetag21, pricetag22, pricetag23, pricetag24, pricetag25,
pricetag26, pricetag27, pricetag28, pricetag29, pricetag30, pricetag31, pricetag32, pricetag33, pricetag34, pricetag35, pricetag36, pricetag37, pricetag38, pricetag39, pricetag40, pricetag41, pricetag42, pricetag43, pricetag44, pricetag45, pricetag46, pricetag47, pricetag48, pricetag49, pricetag50, pricetag51, pricetag52, pricetag53, pricetag54, pricetag55;
//Kode jumlah menu, pengganti jumlah di scanf pada masing masing menu
//kodenya berurutan
int tag, tag1, tag2, tag3, tag4, tag5, tag6, tag7, tag8, tag9, tag10, tag11, tag12, tag13, tag14, tag15, tag16, tag17, tag18, tag19, tag20, tag21, tag22, tag23, tag24, tag25, tag26, tag27, tag28, tag29, tag30, tag31, tag32, tag33, tag34, tag35, tag36, tag37, tag38, tag39, tag40, tag41, tag42, tag43, tag44, tag45, tag46, tag47, tag48, tag49, tag50, tag51, tag52, tag53, tag54, tag55;
time_t waktu;
int uang;
unsigned int kembalian;


void logo()
{
//memakai converter text to ASCII
printf("     ================================================================================\n");
printf("     =  =====  =======  ==========  =================       =========================\n");
printf("     =   ===   =======  ==========  =================  ====  ========================\n");
printf("     =  =   =  =======  ==========  =================  ====  ==============  ========\n");
printf("     =  == ==  ==   ==  =====   ==  ==   ===   ======  ===   ==   ===   ==    ==   ==\n");
printf("     =  =====  =     =    ==  =  =  =     =  =  =====      ===  =  =  =  ==  ==     =\n");
printf("     =  =====  =  =  =  =  ====  =  =  =  ==    =====  ====  =     ==  ====  ==  =  =\n");
printf("     =  =====  =  =  =  =  ==    =  =  =  ====  =====  ====  =  ======  ===  ==  =  =\n");
printf("     =  =====  =  =  =  =  =  =  =  =  =  =  =  =====  ====  =  =  =  =  ==  ==  =  =\n");
printf("     =  =====  ==   ==    ===    =  ==   ===   ======  ====  ==   ===   ===   ==   ==\n");
printf("     ================================================================================\n");
}
int reset()
{
    pricetag=0, pricetag1=0, pricetag2=0, pricetag3=0, pricetag4=0, pricetag5=0, pricetag6=0, pricetag7=0, pricetag8=0, pricetag9=0, pricetag10=0, pricetag11=0, pricetag12=0, pricetag13=0, pricetag14=0, pricetag15=0, pricetag16=0, pricetag17=0, pricetag18=0, pricetag19=0, pricetag20=0, pricetag21=0, pricetag22=0, pricetag23=0, pricetag24=0, pricetag25=0,
    pricetag26=0, pricetag27=0, pricetag28=0, pricetag29=0, pricetag30=0, pricetag31=0, pricetag32=0, pricetag33=0, pricetag34=0, pricetag35=0, pricetag36=0, pricetag37=0, pricetag38=0, pricetag39=0, pricetag40=0, pricetag41=0, pricetag42=0, pricetag43=0, pricetag44=0, pricetag45=0, pricetag46=0, pricetag47=0, pricetag48=0, pricetag49=0, pricetag50=0, pricetag51=0, pricetag52=0, pricetag53=0, pricetag54=0, pricetag55=0;
    tag=0, tag1=0, tag2=0, tag3=0, tag4=0, tag5=0, tag6=0, tag7=0, tag8=0, tag9=0, tag10=0, tag11=0, tag12=0, tag13=0, tag14=0, tag15=0, tag16=0, tag17=0, tag18=0, tag19=0, tag20=0, tag21=0, tag22=0, tag23=0, tag24=0, tag25=0, tag26=0, tag27=0, tag28=0, tag29=0, tag30=0, tag31=0, tag32=0, tag33=0, tag34=0, tag35=0, tag36=0, tag37=0, tag38=0, tag39=0, tag40=0, tag41=0, tag42=0, tag43=0, tag44=0, tag45=0, tag46=0, tag47=0, tag48=0, tag49=0, tag50=0, tag51=0, tag52=0, tag53=0, tag54=0, tag55=0;
}

//fungsi help
void help ()
{
    logo();
    printf ("\t\tSelamat datang di Menu Bantuan\n");
    printf ("     --------------------------------------------------------------------------------\n");
    printf ("\t\tSilahkan pilih menu di bawah ini\n");
    printf ("\t\t[1]. FAQ\n");
    printf ("\t\t[2]. Info Menu\n");
    printf ("\t\t[3]. About this program\n");
    printf ("\t\t[4]. Back\n");
    printf ("     --------------------------------------------------------------------------------\n");
    scanf ("%d", &pilih);
    system ("cls");
    switch (pilih)
    {
        case 1 : faq(); break;
        case 2 : info(); break;
        case 3 : prog(); break;
        case 4 : main(); break;
        default: printf ("Maaf inputan anda salah, silahkan coba lagi\n"); system("PAUSE"); system("cls"); help(); break;
    }
}


void faq()
{
	printf("----FAQ----\n\n");
	printf("Q: Apakah harga sudah termasuk PPN?\n");
	printf("A: Tidak, harga belum termasuk PPN sebesar 10%.\n\n");
	printf("Q: Bagaimana cara memesan?\n");
	printf("A: [1] Pilih angka 1 untuk menu maknan seperti Pizza, Alacarte, dan Drink.\n");
	printf("       Pilih angka 2 untuk melihat paket promo terbatas dari kami.\n");
	printf("       Pilih angka 3 untuk melihat paket spesial yang kami tawarkan.\n");
	printf("   [2] Saat anda sudah memilih salah satu opsi diatas anda sudah bisa memesan dengan selera anda.\n\n");
	printf("Q: Bagaimana saya melihat list menu apa saja yang telah saya pilih?\n");
	printf("A: Setelah anda memesan maka anda akan langsung diarahkan ke list belanja anda dan anda pun bisa memilih\n");
	printf("   menu lagi dengan menekan tombol y.\n");
	printf("Q: Bagaaimana jika saya salah menekan menu pembelian?\n");
	printf("A: Jika anda salah, ketik saja angka 0 pada jumlah pemesanan sehingga pesanan anda tidak tercatat pada rincian pembayaran.\n\n");
	printf("Tekan angka 1 untuk kembali. . .\n");
	scanf("%d", &pilih);
	system("cls");
	return help();

}
void info()
{
	printf ("----Info Menu----\n\n");
	printf("Berikut adalah info menu yang kamim daftarkan!\n");
	printf("[1] Mix Pizza!\n");
	printf("[2] Alacarte\n");
	printf("[3] Drink\n");
	printf("[4] Menu Spesial\n");
	printf("[5] Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih){
		case 1:
		printf("-----Mix Pizza-----\n\n");
		printf("[1] Ini adalah menu dimana anda bisa memilih Pizza anda sesuai dengan size yang anda inginkan!\n");
		printf("[2] Pada menu ini ditawarkan pula berbagi macam jenis topping yang menarik seperti pepperoni, cheese, meat, dan lain-lain!\n");
		printf("[3] Anda diperkenankan memilih sesuai dengan kebutuhan selera anda, dan Pizza hangat dan enak akan menghampiri anda!\n\n");
		printf("Tekan 1 untuk kembali...\n");
		back();
		break;
		case 2:
		printf("-----Alacarte-----\n\n");
		printf("[1] Alacarte adalah menu yang menyediakan side-sied menu seperti Burger, Fried Chicken, Side menu lainnya.\n");
		printf("[2] Pada menu burger kami menyediakan beberapa jenis burger yaitu:\n");
		printf("    -Burger Reguler        : Burger dengan roti empuk isi chocken nugget dengan potongan kol dengan mayonaise manis.\n");
		printf("    -Cheese Burger         : Burger dengan potongan daging sapi dengan lembaran keju cheddar.\n");
		printf("    -Double-double         : Burger dengan dua potong daging sapi dan 2 lembar keju cheddar.\n");
		printf("    -Fish Fillet           : Burger dengan daging cincang ikan segar.\n");
		printf("    -Smoked Beef           : Burger dengan daging sapi asap.\n");
		printf("[3] Pada menu fried chicken kami menyediakan beberapa jenis fried chicken yaitu:\n");
		printf("    -Original Chicken      : Ayam goreng krispi dengan bumbu original Mobalog.\n");
		printf("    -Spicy Chicken         : Ayam goreng krispi yang dilumuri dengan bumbu pedas membara.\n");
		printf("    -Boneless Chicken Wings: Daging sayap krispi tanpa tulang dengan bumbu original Mobalog.\n");
		printf("    -Salted Egg Chicken    : Ayam goreng krispi yang dilumuri bumbu salted egg yang mantap.\n");
		printf("    -Chicken Cheez         : Ayam goreng krispi yang dilumuri keju mozarella.\n");
		printf("[4] Pada menu side menu kami menawarkan menu-menur ringan sebagai sandingan makan anda yaitu:\n");
		printf("    -French Fries          : Kentang goreng renyah tersedia dalam ukuran reguler, large, dan xtra large.\n");
		printf("    -Onion Ring            : Bawang bombai yang digoreng krispi dan sangat renyah.\n");
		printf("    -Perkedel              : Mash potato yang digoreng renyah namun lembut di dalam.\n");
		printf("    -Soup                  : Soup bening dengan sayur pilihan.\n");
		printf("    -Cream Soup            : Soup dengan cream dan sayur pilihan serta potongan daging ayam.\n");
		printf("    -Pudding               : Pudding manis rasa cokelat.\n");
		printf("    -Ice Cream             : Ice cream stroberi yang manis dan menyegarkan.\n\n");
		printf("Tekan 1 untuk kembali...\n");
		back();
		break;
		case 3:
		printf("-----Drink-----\n\n");
		printf("[1] Menu ini menyediakan anda pilihan minuman-minuman yang akan meredakan haus anda.\n");
		printf("[2] Kami menyediakan berbagai minuman yaitu: \n");
		printf("    -Pepsi       : Minuman karbonasi dari pepsi yang tersedia dalam ukuran reguler, large, xtra large\n");
		printf("    -Mocha Float : Mocha dengan scoop es krim diatasnya.\n");
		printf("    -Orange Float: Jus jeruk dengan scoop krim diatasnya.\n");
		printf("    -Root Beer   : Beer dingin dari akar ginseng yang menyegarkan tubuh.\n\n");
		printf("Tekan 1 untuk kembali...\n");
		back();
		case 4:
		printf("-----Menu Spesial-----\n\n");
		printf("[1] Pada menu ini kami menawarkan menu original dari restoran kami yang unik dan berbeda!\n");
		printf("[2] Kami menyediakan beberapa menu yaitu: \n");
		printf("    -Crispy Beef Burger   : Burger dengan daging sapi pilihan krispi dengan sayur segar dengan mayonaise.\n");
		printf("    -Seaweed Fried Chicken: Ayam krispi yang digoreng dengan bumbu rumput laut dan cita rasa laut yang segar.\n");
		printf("    -Wedang Jahe          : Minuman sari jahe tradisoinal yang menghangatkan tubuh.\n");
		printf("    -Cheezy French Fries  : French Fries yang dilumuri keju mozarella.\n");
		printf("    -Capcin Soda          : Cappuchino Cincau dengan campuran soda yang segar.\n");
		printf("Tekan 1 untuk kembali...\n\n");
		back();
		case 5:
			help();
		default: ("Input Error\n");
	}
}
//fungsi program
int prog()
{
	printf ("----About Our Program----\n\n");
	printf("Program ini adalah program yang diciptakan untuk mempermudah pembeli dalam memesan makanan.\n\n");
	printf("Tekan 1 untuk kembali. . .\n");
	scanf("%d", &pilih);
	switch(pilih){
		case 1: system("cls"); return main(); break;
		default: ("ERROR");
	}
}
void back()
{
	int a=1;
	scanf("%d", &a);
	system("cls");
	if(a==1)
    {

		return info();
	}
}
//fungsi menu
void menu ()
{
    logo();
    printf ("     ----------------------------------__MOBALOG RESTO__-----------------------------\n");
    printf ("     --------------------------------------------------------------------------------\n");
    printf ("\n\n\t\t\t         SELAMAT DATANG DI RESTORAN KAMI!!\n");
    printf ("\n\n      -------------------------------------------------------------------------------\n");
    printf ("      Pelanggan terhormat, Silahkan pilih menu dibawah ini\n\n");
    printf ("\t [1]. Menu Makanan dan Minuman\n");
    printf ("\t [2]. Rincian Pembayaran\n");
    printf ("\t [3]. Help!\n");
    printf ("\t [4]. Exit\n");
    printf ("      --------------------------------------------------------------------------------\n");
    scanf ("%d", &pilih);
    system("cls");
    switch (pilih)
    {
        case 1 : list();break;
        case 2 : price();break;
        case 3 : help(); break;
        case 4 : out(); break;
        default : main();
    }
}

void out()
{
	return 0;
}

//fungsi menu
void list()
{
	logo();
	printf("     --------------------------SELAMAT MEMESAN--------------------------\n\n");
	printf("     [1] Mix Your Pizza!!\n");
	printf("     [2] Alacarte\n");
	printf("     [3] Paket Promo\n");
	printf("     [4] Menu Special\n");
	printf("     [5] Drink\n");
	printf("     [6] Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih){
		case 1: pizza(); break;
		case 2: alacarte(); break;
		case 3: paketpromo();break;
		case 4: menuspesial();break;
		case 5: drink();break;
		case 6: menu();
		default: printf ("-------- MAAF INPUTAN ANDA SALAH ---------"); system("PAUSE"); system("cls"); list();
	}
}
void pizza()
{
    logo();
    printf("     Pilih size pizza anda: \n");
	printf("      [1]. Personal [25000]\t (for 1-2 person)\n");
	printf("      [2]. Regular  [50000]\t (for 2-3 person)\n");
	printf("      [3]. Large    [75000]\t (for 3-4 person)\n");
	printf("      [4]. Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih){
		case 1 : personal(); break;
		case 2 : regular(); break;
		case 3 : large(); break;
		case 4 : return list();
		default: pizza();
	}
}

void personal ()
{
    logo();
	printf("     Silahkan pilih topping anda\n");
	printf("     [1]. Pepperoni                       [+5000]\n");
	printf("     [2]. Meat                            [+7500]\n");
	printf("     [3]. Extra Cheese                    [+7500]\n");
	printf("     [4]. Pepperoni + Meat                [+12500]\n");
	printf("     [5]. Pepperoni + Extra Cheese        [+12500]\n");
	printf("     [6]. Meat + Extra Cheese             [+12500]\n");
	printf("     [7]. Pepperoni + Meat + Extra Cheese [+20000]\n");
	printf("     [8]. Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih){
	case 1:
		printf("Personal + Pepperoni\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag);
		pricetag = 30000;
		pricetag = pricetag * tag;
		printf("Beli lagi? (y/n)");
		again();
		break;
	case 2:
		printf("Personal + Meat\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag1);
		pricetag1 = 32500;
		pricetag1 = pricetag1 * tag1;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 3 :
        printf("Personal + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag2);
		pricetag2 = 32500;
		pricetag2 = pricetag2 * tag2;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 4 :
        printf("Personal + Pepperoni + Meat\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag3);
		pricetag3 = 37500;
		pricetag3 = pricetag3 * tag3;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 5 :
        printf ("Personal + Pepperoni + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag4);
        pricetag4 = 37500;
        pricetag4 = pricetag4 * tag4;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 6 :
        printf ("Personal + Meat + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag5);
        pricetag5 = 40000;
        pricetag5 = pricetag5 * tag5;
        printf("Beli lagi? (y/n)");
		again();
		break;
    case 7 :
        printf ("Personal + Pepperoni + Meat + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag6);
        pricetag6 = 45000;
        pricetag6 = pricetag6 * tag6;
        printf("Beli lagi? (y/n)");
		again();
		break;
    case 8 :
        list();
        break;
    default:     printf ("\t--- Maaf inputan anda salah ---\n");
                 Sleep(1000);
                 printf ("\t------Silahkan Coba Lagi-----\n");
                 Sleep (1000);
                 system ("PAUSE");
                 system ("cls");
                 personal();


}
}
void regular()
{
	logo();
	printf("     Silahkan pilih topping anda: \n");
	printf("     [1]. Pepperoni                       [+5000]\n");
	printf("     [2]. Meat                            [+7500]\n");
	printf("     [3]. Extra Cheese                    [+7500]\n");
	printf("     [4]. Pepperoni + Meat                [+12500]\n");
	printf("     [5]. Pepperoni + Extra Cheese        [+12500]\n");
	printf("     [6]. Meat + Extra Cheese             [+12500]\n");
	printf("     [7]. Pepperoni + Meat + Extra Cheese [+20000]\n");
	printf("     [8]. Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih){
	case 1:
		printf("Regular + Pepperoni\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag7);
		 pricetag7 = 55000;
        pricetag7 = pricetag7 * tag7;
		printf("Beli lagi? (y/n)");
		again();
		break;
	case 2:
		printf("Regular + Meat\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag8);
		 pricetag8 = 57500;
        pricetag8 = pricetag8 * tag8;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 3 :
        printf("Regular + Extra cheese\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag9);
		 pricetag9 = 57500;
        pricetag9 = pricetag9 * tag9;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 4 :
        printf("Regular + Pepperoni + Meat\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag10);
		 pricetag10 = 62500;
        pricetag10 = pricetag10 * tag10;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 5 :
        printf ("Regular + Pepperoni + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag11);
		 pricetag11 = 62500;
        pricetag11 = pricetag11 * tag11;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 6 :
        printf ("Regular + Meat + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag12);
		 pricetag12 = 65000;
        pricetag12 = pricetag12 * tag12;
		printf("Beli lagi? (y/n)");
		again();
		break;
     case 7 :
        printf ("Regular + Pepperoni + Meat + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag13);
		 pricetag13 = 67500;
        pricetag13 = pricetag13 * tag13;
		printf("Beli lagi? (y/n)");
		again();
		break;
     case 8 :
        list();
        break;
	default: printf ("\t--- Maaf inputan anda salah ---\n");
             Sleep(1000);
             printf ("\t------Silahkan Coba Lagi-----\n");
             Sleep (1000);
             system ("PAUSE");
             system ("cls");
             regular();
}
}
void large()
{
	logo();
	printf("     Silahkan pilih topping anda: \n");
	printf("     [1]. Pepperoni                       [+5000]\n");
	printf("     [2]. Meat                            [+7500]\n");
	printf("     [3]. Extra Cheese                    [+7500]\n");
	printf("     [4]. Pepperoni + Meat                [+12500]\n");
	printf("     [5]. Pepperoni + Extra Cheese        [+12500]\n");
	printf("     [6]. Meat + Extra Cheese             [+12500]\n");
	printf("     [7]. Pepperoni + Meat + Extra Cheese [+20000]\n");
	printf("     [8]. Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih){
    case 1:
		printf("Large + Pepperoni\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag14);
		 pricetag14 = 80000;
        pricetag14 = pricetag14 * tag14;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 2:
		printf("Large + Meat\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag15);
		 pricetag15 = 82500;
        pricetag15 = pricetag15 * tag15;
		printf("Beli lagi? (y/n)");
		again();
		break;
     case 3 :
        printf("Large + Extra cheese\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag16);
		 pricetag16 = 82500;
        pricetag16 = pricetag16 * tag16;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 4 :
        printf("Large + Pepperoni + Meat\n");
		printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag17);
		 pricetag17 = 92500;
        pricetag17 = pricetag17 * tag17;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 5 :
        printf ("Large + Pepperoni + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag18);
		 pricetag18 = 92500;
        pricetag18 = pricetag18 * tag18;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 6 :
        printf ("Large + Meat + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag19);
		 pricetag19 = 95000;
        pricetag19 = pricetag19 * tag19;
		printf("Beli lagi? (y/n)");
		again();
		break;
    case 7 :
        printf ("Large + Pepperoni + Meat + Extra cheese\n");
        printf("Masukkan jumlah pesanan : \n");
		scanf("%d", &tag20);
		pricetag20 = 97500;
        pricetag20 = pricetag20 * tag20;
        printf("Beli lagi? (y/n)");
		again();
		break;
    case 8 :
        list();
        break;
    default: printf ("\t--- Maaf inputan anda salah ---\n");
             Sleep(1000);
             printf ("\t------Silahkan Coba Lagi-----\n");
             Sleep (1000);
             system ("PAUSE");
             system ("cls");
             large();
	}

}
void alacarte()
{
	logo();
	printf("      Pilih menu alacarte: \n");
	printf("      [1] Burger\n");
	printf("      [2] Fried Chicken\n");
	printf("      [3] Side Menu\n");
	printf("      [4] Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih)
	{
	case 1: burger(); break;
	case 2: fried(); break;
	case 3: side(); break;
	case 4: return list();
	default: printf ("\t--- Maaf inputan anda salah ---\n");
             Sleep(1000);
             printf ("\t------Silahkan Coba Lagi-----\n");
             Sleep (1000);
             system ("PAUSE");
             system ("cls");
             alacarte();
	}
}
void burger()
{
	logo();
	printf("     Pilih Burger Anda: \n");
	printf("     [1]. Burger Reguler [8000]\n");
	printf("     [2]. Cheese Burger  [12000]\n");
	printf("     [3]. Double-double  [23500]\n");
	printf("     [4]. Fish Fillet    [14000]\n");
	printf("     [5]. Smoked Beef    [16000]\n");
	printf("     [6]. Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih)
	{
		case 1:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag21);
			pricetag21 = 8000;
            pricetag21 = pricetag21 * tag21;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 2:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag22);
			pricetag22 = 12000;
            pricetag22 = pricetag22 * tag22;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 3:
			printf("Jumlah Pemesann: \n");
			scanf("%d", &tag23);
			pricetag23 = 23500;
            pricetag23 = pricetag23 * tag23;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 4:
			printf("Jumlah Pemesann: \n");
			scanf("%d", &tag24);
			pricetag24 = 14000;
            pricetag24 = pricetag24 * tag24;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 5:
			printf("Jumlah Pemesann: \n");
			scanf("%d", &tag25);
			pricetag25 = 16000;
            pricetag25 = pricetag25 * tag25;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 6:
            list();
            break;
		default:
                 printf ("\t--- Maaf inputan anda salah ---\n");
                 Sleep(1000);
                 printf ("\t------Silahkan Coba Lagi-----\n");
                 Sleep (1000);
                 system ("PAUSE");
                 system ("cls");
                 burger();
	}

}
void fried()
{
	logo();
	printf("     Pilih Menu Ayam Anda: \n");
	printf("     [1]. Original Chicken      [15000]\n");
	printf("     [2]. Spicy Chicken         [17500]\n");
	printf("     [3]. Boneless Chicken Wings[19000]\n");
	printf("     [4]. Salted Egg Chicken    [20000]\n");
	printf("     [5]. Chicken Cheeze        [21000]\n");
	printf("     [6]. Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih){
		case 1:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag26);
            pricetag26 = 16000;
            pricetag26 = pricetag26 * tag26;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 2:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag27);
			pricetag27 = 16000;
            pricetag27 = pricetag27 * tag27;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 3:
			printf("Jumlah Pemesann: \n");
			scanf("%d", &tag28);
			pricetag28 = 19000;
            pricetag28 = pricetag28 * tag28;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 4:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag29);
			pricetag29 = 20000;
            pricetag29 = pricetag29 * tag29;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 5:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag30);
			pricetag30 = 21000;
            pricetag30 = pricetag30 * tag30;
			printf("Beli lagi? (y/n)");
			again();
			break;
        case 6:
            list();
            break;
		default: printf ("\t--- Maaf inputan anda salah ---\n");
                 Sleep(1000);
                 printf ("\t------Silahkan Coba Lagi-----\n");
                 Sleep (1000);
                 system ("PAUSE");
                 system ("cls");
                 fried();
	}
}
void side()
{
	logo();
	printf("     Pilih Side Menu Anda: \n");
	printf("     [1] French Fries (Regular)    [10000]\n");
	printf("     [2] French Fries (Large)      [15000]\n");
	printf("     [3] French Fries (Xtra Large) [20000]\n");
	printf("     [4] Onion Ring                [10000]\n");
	printf("     [5] Perkedel                  [8000]\n");
	printf("     [6] Soup                      [8000]\n");
	printf("     [7] Cream Soup                [8000]\n");
	printf("     [8] Pudding                   [9000]\n");
	printf("     [9] Ice Cream                 [6500]\n");
	printf("     [10]Back\n");
	scanf ("%d", &pilih);
	system("cls");
	switch (pilih)
	{
	    case 1:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag31);
			pricetag31 = 10000;
            pricetag31 = pricetag31 * tag31;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 2:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag32);
			pricetag32 = 15000;
            pricetag32 = pricetag32 * tag32;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 3:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag33);
			pricetag33 = 20000;
            pricetag33 = pricetag33 * tag33;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 4:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag34);
			pricetag34 = 10000;
            pricetag34 = pricetag34 * tag34;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 5:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag35);
			pricetag35 = 8000;
            pricetag35 = pricetag35 * tag35;
			printf("Beli lagi? (y/n)");
			again();
			break;
        case 6:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag36);
			pricetag36= 8000;
            pricetag36 = pricetag36 * tag36;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 7:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag37);
			pricetag37 = 9000;
            pricetag37 = pricetag37 * tag37;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 8:
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag38);
			pricetag38 = 8000;
            pricetag38 = pricetag38 * tag38;
			printf("Beli lagi? (y/n)");
			again();
			break;
        case 9:
            printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag39);
			pricetag39 = 6500;
            pricetag39 = pricetag39 * tag39;
			printf("Beli lagi? (y/n)");
			again();
			break;
        case 10:
            list();
            break;
        default: printf ("\t--- Maaf inputan anda salah ---\n");
                 Sleep(1000);
                 printf ("\t------Silahkan Coba Lagi-----\n");
                 Sleep (1000);
                 system ("PAUSE");
                 system ("cls");
                 side();

            }
}
void drink()
{
	logo();
	printf("     Pilih Minuman anda: \n");
	printf("     [1]. Pepsi (regular)    [7000] \n");
	printf("     [2]. Pepsi (Large)      [12000] \n");
	printf("     [3]. Pepsi (Xtra Large) [15000]\n");
	printf("     [4]. Mocha float        [10000]\n");
	printf("     [5]. Orange float       [10000]\n");
	printf("     [6]. Root Beer          [14700]\n");
	printf("     [7]. Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih)
	{
		case 1: printf("Pepsi (regular)\n");
                printf("Jumlah Pemesanan: \n");
                scanf("%d", &tag40);
                pricetag40 = 7000;
                pricetag40 = pricetag40 * tag40;
                printf("Beli lagi? (y/n)");
                again();
                break;
		case 2: printf("Pepsi (Large)\n");
                printf("Jumlah Pemsanan: \n");
                scanf("%d", &tag41);
                pricetag41 = 12000;
                pricetag41 = pricetag41 * tag41;
                printf("Beli lagi? (y/n)");
                again();
                break;
        case 3 :printf("Pepsi (Xtra Large)\n");
                printf("Jumlah Pemsanan: \n");
                scanf("%d", &tag42);
                pricetag42 = 15000;
                pricetag42 = pricetag42 * tag42;
                printf("Beli lagi? (y/n)");
                again();
                break;
        case 4 :printf("Mocha float\n");
                printf("Jumlah Pemsanan: \n");
                scanf("%d", &tag43);
                pricetag43 = 10000;
                pricetag43 = pricetag43 * tag43;
                printf("Beli lagi? (y/n)");
                again();
                break;
        case 5 :printf("Orange Float\n");
                printf("Jumlah Pemesanan: \n");
                scanf("%d", &tag44);
                pricetag44 = 10000;
                pricetag44 = pricetag44 * tag44;
                printf("Beli lagi? (y/n)");
                again();
                break;
        case 6 :printf("Root Beer\n");
                printf("Jumlah Pemesanan: \n");
                scanf("%d", &tag45);
                pricetag45 = 14700;
                pricetag45 = pricetag45 * tag45;
                printf("Beli lagi? (y/n)");
                again();
                break;
        case 7 :
            list();
            break;
		default: printf ("\t--- Maaf inputan anda salah ---\n");
                 Sleep(1000);
                 printf ("\t------Silahkan Coba Lagi-----\n");
                 Sleep (1000);
                 system ("PAUSE");
                 system ("cls");
                 drink();
	}
}
void paketpromo()
{
	logo();
	printf("     Silahkan Pilih Menu Promo Dari Kami!\n");
	printf("     Berlaku hanya sampai tanggal 30 mei 2018!!! :D\n");
	printf("     [1]. Burger Reguler + French Fries (Regular)      [15000]\n");
	printf("     [2]. Original Chicken + Root Beer                 [27000]\n");
	printf("     [3]. Cheese Burger + Spicy Chicken + Orange Float [36000]\n");
	printf("     [4]. 5 Cheese Burgers                             [65000]\n");
	printf("     [5]. Double-double + Boneless Chicken Wings       [35000]\n");
	printf("     [6]. Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih){
		case 1	:printf("Burger Reguler + French Fries (Reguler)\n");
				 printf("Jumlah Pemesanan: \n");
				 scanf("%d", &tag46);
				 pricetag46 = 15000;
				 pricetag46 = pricetag46*tag46;
				 printf("Beli lagi? (y/n)");
				 again();
				 break;
		case 2	:printf("Original Chicken + Root Beer\n");
				 printf("Jumlah Pemesanan: \n");
				 scanf("%d", &tag47);
				 pricetag47 = 27000;
				 pricetag47 = pricetag47*tag47;
				 printf("Beli lagi? (y/n)");
				 again();
				 break;
		case 3	:printf("Cheese Burger + Spicy Chicken + Orange Float\n");
				 printf("Jumlah Pemesanan: \n");
				 scanf("%d", &tag48);
				 pricetag48 = 36000;
				 pricetag48 = pricetag48*tag48;
				 printf("Beli lagi? (y/n)");
				 again();
				 break;
		case 4	:printf("5 Cheese Burger\n");
				 printf("Jumlah Pemesanan: \n");
				 scanf("%d", &tag49);
				 pricetag49 = 65000;
				 pricetag49 = pricetag49*tag49;
				 printf("Beli lagi? (y/n)");
				 again();
				 break;
		case 5	:printf("Diuble-double + Boneless Chicken Wings\n");
				 printf("Jumlah Pemesanan: \n");
				 scanf("%d", &tag50);
				 pricetag50 = 35000;
				 pricetag50 = pricetag50*tag50;
				 printf("Beli lagi? (y/n)");
				 again();
				 break;
        case 6  :list();
                 break;
		default	: printf ("\t--- Maaf inputan anda salah ---\n");
                 Sleep(1000);
                 printf ("\t------Silahkan Coba Lagi-----\n");
                 Sleep (1000);
                 system ("PAUSE");
                 system ("cls");
                 paketpromo();

	}
}

void menuspesial()
{
	logo();
	printf("     Silahkan pilih menu spesial dari kami!\n");
	printf("     [1]. Crispy Beef Burger    [19000]\n");
	printf("     [2]. Seaweed Fried Chicken [16500]\n");
	printf("     [3]. Wedang Jahe           [6000]\n");
	printf("     [4]. Cheezy French Fries   [11000]\n");
	printf("     [5]. Capcin Soda           [6500]\n");
	printf("     [6]. Back\n");
	scanf("%d", &pilih);
	system("cls");
	switch(pilih){
		case 1:
			printf("Crispy Beef Burger\n");
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag51);
			pricetag51 = 19000;
			pricetag51 = pricetag51*tag51;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 2:
			printf("Seaweed Fried Chicken\n");
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag52);
			pricetag52 = 16500;
			pricetag52 = pricetag52*tag52;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 3:
			printf("Wedang Jahe\n");
			printf("Jumlah Pemsanan: \n");
			scanf("%d", &tag53);
			pricetag53 = 6000;
			pricetag53 = pricetag53*tag53;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 4:
			printf("Cheezy French Fries\n");
			printf("Jumlah Pemesanan: \n");
			scanf("%d",&tag54);
			pricetag54 = 11000;
			pricetag54 = pricetag54*tag54;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 5:
			printf("Capcin Soda\n");
			printf("Jumlah Pemesanan: \n");
			scanf("%d", &tag55);
			pricetag55 = 6500;
			pricetag55 = pricetag55*tag55;
			printf("Beli lagi? (y/n)");
			again();
			break;
		case 6:
			list();
			break;
		default:
                printf ("\t--- Maaf inputan anda salah ---\n");
                 Sleep(1000);
                 printf ("\t------Silahkan Coba Lagi-----\n");
                 Sleep (1000);
                 system ("PAUSE");
                 system ("cls");
                 menuspesial();
	}
}


void again()
{
	char pilih;
	scanf("%s", &pilih);
	if(pilih=='y'|| pilih=='Y')
    {
        system("cls");
		list();
	}
	else if (pilih == 'n' || pilih == 'N')
	{
	    system("cls");
		printf ("\t\t\t\t\t-----Silahkan menuju ke menu pembayaran-----\n\n");
		printf ("\t\t\t\t\t---------tekan 1 untuk melanjutkan--------\n");
		scanf("%d", &pilih);
		if(pilih==1)
        {
            system ("cls");
            menu();
        }
        else
        {
            printf ("--- Maaf inputan anda salah ---\n");
            printf ("--- Silahkan Coba Lagi ---\n");
            system ("PAUSE");
            system ("cls");
            list();
        }

    }
}

void againmenu()
{
    char pilih;
	scanf("%s", &pilih);
	if( pilih=='y' || pilih=='Y' )
    {
        system ("cls");
        list();
    }
    else if ( pilih == 'n' || pilih == 'N')
    {
        reset();
        system ("cls");
        return main();
    }
}
void price()
{
    logo();
    pricetotal = pricetag + pricetag1 + pricetag2 + pricetag3 + pricetag4 + pricetag5 + pricetag6 + pricetag7 + pricetag8 + pricetag9 + pricetag10 + pricetag11 + pricetag12 + pricetag13 + pricetag14 + pricetag15 + pricetag16 + pricetag17 + pricetag17 + pricetag18 + pricetag19 + pricetag20 + pricetag21 + pricetag22 +
    pricetag23 + pricetag24 + pricetag25 + pricetag26 + pricetag27 + pricetag28 + pricetag29 + pricetag30 + pricetag31 + pricetag32 + pricetag33 + pricetag34 + pricetag35 + pricetag36 + pricetag37 + pricetag38 + pricetag39 + pricetag40 + pricetag41 + pricetag42 + pricetag43 + pricetag44 + pricetag45 + pricetag46 + pricetag47 +
	pricetag48 + pricetag49 + pricetag50 + pricetag51 + pricetag52 + pricetag53 + pricetag54 + pricetag55;
    ppn = (0.1 * pricetotal);
    pricetotalafter = pricetotal + ppn;
    printf("\n");
    printf("_________________________________________________________________________________________________________\n");
    printf("|\t\tNAMA PESANAN\t\t| Jumlah Pesanan |\t Harga\t\t|\tTotal\t         |\n");
    printf("|=======================================|================|======================|======================  |\n");
    if (pricetag>0)
    {
        printf("|\tPersonal + Pepperoni\t\t|\t%d\t |\tRp. 30000\t|\tRp.%d           |\n",tag,pricetag);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
     if (pricetag1>0)
    {
        printf("|\t   Personal + Meat\t\t|\t%d\t |\tRp. 32500\t|\tRp.%d         |\n",tag1,pricetag1);
        printf("-----------------------------------------------------------------------------------------------------------\n");
    }
     if (pricetag2>0)
    {
        printf("|\tPersonal + Extra Cheese\t\t|\t%d\t |\tRp. 32500\t|\tRp.%d        |\n",tag2,pricetag2);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
    if (pricetag3>0)
    {
        printf("|\tPersonal + Pep + Meat\t\t|\t%d\t |\tRp. 37500\t|\tRp.%d        |\n",tag3,pricetag3);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
    if (pricetag4>0)
    {
        printf("|\tPersonal + Pep + Extra Cheese\t|\t%d\t |\tRp. 37500\t|\tRp.%d        |\n",tag4,pricetag4);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
     if (pricetag5>0)
    {
        printf("|\tPersonal + Meat + Extra Cheese\t|\t%d\t |\tRp. 40000\t|\tRp.%d        |\n",tag5,pricetag5);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
     if (pricetag6>0)
    {
        printf("|\tPersonal + Pep + Meat + Cheese\t|\t%d\t |\tRp. 45000\t|\tRp.%d        |\n",tag6,pricetag6);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
     if (pricetag7>0)
    {
        printf("|\tRegular + Pepperoni\t\t|\t%d\t |\tRp. 55000\t|\tRp.%d         |\n",tag7,pricetag7);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
     if (pricetag8>0)
    {
        printf("|\t   Regular + Meat\t\t|\t%d\t |\tRp. 57500\t|\tRp.%d         |\n",tag8,pricetag8);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
     if (pricetag9>0)
    {
        printf("|\Regular + Extra Cheese\t\t|\t%d\t |\tRp. 57500\t|\tRp.%d         |\n",tag9,pricetag9);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
     if (pricetag10>0)
    {
        printf("|\tRegular + Pep + Meat\t\t|\t%d\t |\tRp. 62500\t|\tRp.%d         |\n",tag10,pricetag10);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
     if (pricetag11>0)
    {
        printf("|\tRegular + Pep + Extra Cheese\t|\t%d\t |\tRp. 62500\t|\tRp.%d         |\n",tag11,pricetag11);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
     if (pricetag12>0)
    {
        printf("|\tRegular + Meat + Extra Cheese\t|\t%d\t |\tRp. 65000\t|\tRp.%d         |\n",tag12,pricetag12);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag13>0)
    {
        printf("|\tRegular + Pep + Meat + Cheese\t|\t%d\t |\tRp. 70000\t|\tRp.%d         |\n",tag13,pricetag13);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag14>0)
    {
        printf("|\t      Large + Pepperoni\t\t|\t%d\t |\tRp. 80000\t|\tRp.%d         |\n",tag14,pricetag14);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag15>0)
    {
        printf("|\t        Large + Meat\t\t|\t%d\t |\tRp. 82500\t|\tRp.%d         |\n",tag15,pricetag15);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag16>0)
    {
        printf("|\Large + Extra Cheese\t\t|\t%d\t |\tRp. 82500\t|\tRp.%d         |\n",tag16,pricetag16);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag17>0)
    {
        printf("|\tLarge + Pep + Meat\t\t|\t%d\t |\tRp. 87500\t|\tRp.%d         |\n",tag17,pricetag17);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag18>0)
    {
        printf("|\tLarge + Pep + Extra Cheese\t|\t%d\t |\tRp. 87500\t|\tRp.%d         |\n",tag18,pricetag18);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag19>0)
    {
        printf("|\tLarge + Meat + Extra Cheese\t|\t%d\t |\tRp. 90000\t|\tRp.%d         |\n",tag19,pricetag19);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag20>0)
    {
        printf("|\tLarge + Pep + Meat + Cheese\t\t|\t%d\t |\tRp. 95000\t|\tRp.%d         |\n",tag20,pricetag20);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag21>0)
    {
        printf("|\t\tRegular Burger\t\t|\t%d\t |\tRp. 8000\t|\tRp.%d         |\n",tag21,pricetag21);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag22>0)
    {
        printf("|\t\tCheese Burger\t\t|\t%d\t |\tRp. 12000\t|\tRp.%d         |\n",tag22,pricetag22);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag23>0)
    {
        printf("|\t\tDouble-Double\t\t|\t%d\t |\tRp. 23500\t|\tRp.%d         |\n",tag23,pricetag23);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag24>0)
    {
        printf("|\t\tFish Fillet\t\t|\t%d\t |\tRp. 14000\t|\tRp.%d         |\n",tag24,pricetag24);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag25>0)
    {
        printf("|\t\tSmoked Beef\t\t|\t%d\t |\tRp. 16000\t|\tRp.%d         |\n",tag25,pricetag25);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag26>0)
    {
        printf("|\t\tOriginal Chicken\t\t|\t%d\t |\tRp. 15000\t|\tRp.%d         |\n",tag26,pricetag26);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag27>0)
    {
        printf("|\t\tSpicy Chicken\t\t|\t%d\t |\tRp. 16000\t|\tRp.%d         |\n",tag27,pricetag27);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag28>0)
    {
        printf("|\tBoneless Chicken Wings\t\t|\t%d\t |\tRp. 19000\t|\tRp.%d         |\n",tag28,pricetag28);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag29>0)
    {
        printf("|\tSalted Egg Chicken\t\t|\t%d\t |\tRp. 20000\t|\tRp.%d         |\n",tag29,pricetag29);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag30>0)
    {
        printf("|\t\tChicken Cheezy\t\t|\t%d\t |\tRp. 21000\t|\tRp.%d         |\n",tag30,pricetag30);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag31>0)
    {
        printf("|\tFrench Fries (Reguler)\t\t|\t%d\t |\tRp. 10000\t|\tRp.%d         |\n",tag31,pricetag31);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag32>0)
    {
        printf("|\tFrench Fries (Large)\t\t|\t%d\t |\tRp. 15000\t|\tRp.%d         |\n",tag32,pricetag32);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag33>0)
    {
        printf("|\tFrench Fries (Xtra Large)\t|\t%d\t |\tRp. 20000\t|\tRp.%d         |\n",tag33,pricetag33);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag34>0)
    {
        printf("|\t\tOnion Ring\t\t|\t%d\t |\tRp. 10000\t|\tRp.%d         |\n",tag34,pricetag34);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag35>0)
    {
        printf("|\t\tPerkedel\t\t|\t%d\t |\tRp. 8000\t|\tRp.%d         |\n",tag35,pricetag35);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag36>0)
    {
        printf("|\t\tSoup\t\t\t|\t%d\t |\tRp. 8000\t|\tRp.%d         |\n",tag36,pricetag36);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag37>0)
    {
        printf("|\t\tCream Soup\t\t|\t%d\t |\tRp. 9000\t|\tRp.%d         |\n",tag37,pricetag37);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag38>0)
    {
        printf("|\t\tPudding\t\t\t|\t%d\t |\tRp. 8000\t|\tRp.%d         |\n",tag38,pricetag38);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag39>0)
    {
        printf("|\t\tIce Cream\t\t|\t%d\t |\tRp. 6500\t|\tRp.%d         |\n",tag39,pricetag39);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag40>0)
    {
        printf("|\t\tPepsi (Regular)\t\t|\t%d\t |\tRp. 7000\t|\tRp.%d         |\n",tag40,pricetag40);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag41>0)
    {
        printf("|\t\tPepsi (Large)\t\t|\t%d\t |\tRp. 12000\t|\tRp.%d         |\n",tag41,pricetag41);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag42>0)
    {
        printf("|\t\tPepsi (Xtra Large)\t|\t%d\t |\tRp. 15000\t|\tRp.%d         |\n",tag42,pricetag42);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag43>0)
    {
        printf("|\t\tMocha Float\t\t|\t%d\t |\tRp. 10000\t|\tRp.%d         |\n",tag43,pricetag43);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag44>0)
    {
        printf("|\t\tOrange Float\t\t|\t%d\t |\tRp. 10000\t|\tRp.%d         |\n",tag44,pricetag44);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag45>0)
    {
        printf("|\t\tRoot Beer\t\t|\t%d\t |\tRp. 14700\t|\tRp.%d         |\n",tag45,pricetag45);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag46>0)
    {
        printf("|\tBurger Reguler + French Fries\t|\t%d\t |\tRp. 15000\t|\tRp.%d         |\n",tag46,pricetag46);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag47>0)
    {
        printf("|\tOriginal Chicken + Root Beer\t|\t%d\t |\tRp. 27000\t|\tRp.%d         |\n",tag47,pricetag47);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag48>0)
    {
        printf("|Cheese Burg + Spicy Chic + Orange Float|\t%d\t |\tRp. 36000\t|\tRp.%d         |\n",tag48,pricetag48);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag49>0)
    {
        printf("|\t   5 Cheese Burgers\t\t|\t%d\t |\tRp. 65000\t|\tRp.%d         |\n",tag49,pricetag49);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag50>0)
    {
        printf("|Double-double + Boneless Chicken Wings |\t%d\t |\tRp. 35000\t|\tRp.%d         |\n",tag50,pricetag50);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag51>0)
    {
        printf("|\tCrispy Beef Burger\t\t|\t%d\t |\tRp. 19000\t|\tRp.%d         |\n",tag51,pricetag51);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag52>0)
    {
        printf("|\t     Seaweed Fried Chicken\t|\t%d\t |\tRp. 16000\t|\tRp.%d         |\n",tag52,pricetag52);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    } if (pricetag53>0)
    {
        printf("|\t\tWedang Jahe\t\t|\t%d\t |\tRp. 6000\t|\tRp.%d          |\n",tag53,pricetag53);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }
    if (pricetag54>0)
    {
        printf("|\t\tCheesy French Fries\t|\t%d\t |\tRp. 11000\t|\tRp.%d         |\n",tag54,pricetag54);
        printf("-----------------------------------------------------------------------------------------------------------\n");
    }
    if (pricetag55>0)
    {
        printf("|\t\tCapcin Soda\t\t|\t%d\t |\tRp. 6500\t|\tRp.%d          |\n",tag55,pricetag55);
        printf("-----------------------------------------------------------------------------------------------------------\n");

    }



    printf("\n\n");
    printf("\t\tTotal Pembayaran :Rp. %d\n", pricetotalafter);
    printf("\t\tPPN 10 persen :Rp. %d\n", ppn);
    printf("\t\tMasukkan uang anda :");
    scanf("%d", &uang);
    if (uang>=pricetotalafter)
    {
        kembalian = uang - pricetotalafter;
        printf("\t\tKembalian anda sebesar :Rp. %d\n\n", kembalian);
        printf("\t\tRecord:\n");
        time(&waktu);
        printf("\t\tWaktu/Hari : %s", ctime(&waktu));
        printf("\t\tApakah ingin memesan lagi? [y/n] \n");
        againmenu();
    }
    else
    {
        printf ("\t--- Maaf uang yang anda input kurang ---\n");
        Sleep(1000);
        printf ("\t\t-----Silahkan Coba Lagi-----\n");
        Sleep (1000);
        system ("PAUSE");
        system ("cls");
        price();
    }

}
int main()
{
    printf ("     Dibuat Oleh : Muhammad Alfiyansyah dan Saint Vithra Dhiyaulhaq\n");
    menu();
    return 0;
}
