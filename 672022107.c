#include <stdio.h>
#include <windows.h>
#include <ctype.h>
#include <math.h>
#define PI 3.14159265358979323846
int key;

void arrowHere(int realPosition, int arrowPosition){



    if(realPosition == arrowPosition){
        printf("==> ");
    }else{
        printf("    ");
    }}
void gotoxy(int x, int y){
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

int main(){
    system("COLOR 70");

int key=0;
int p=1;
while(key!=13){
      system("cls");
      fflush(stdin);


    printf("    ===========================\n");
    printf("          Tugas Kalkulator\n");
    printf("    ===========================\n");
    arrowHere(1,p); printf("       1. PingPongLanSudo\n");
    arrowHere(2,p); printf("       2. SinCosTan\n");
    arrowHere(3,p); printf("       3. Hitung Keliling dan Luas\n");
    arrowHere(4,p); printf("       4. Hitung Akar Kuadrat\n");
    arrowHere(5,p); printf("       5. EXIT\n");
     printf("    ===========================\n");
 key=getch();
  if (key==80 && p !=5){
    p++;
  }
  else if(key==72 && p!=1){
    p--;
}
    else{
        p=p;
    }}

    if(key==13 && p==1){
    PingPoroLanSudo();
    }

else if(key==13 && p==2){
    SinCosTan();
 }
 else if(key==13 && p==3){
     HitungKeldanLuas();
 }
 else if(key==13 && p==4){
     akar();
 }
 else if(key==13 && p==5){
    system("cls");
        gotoxy(30,10);
        printf( "SAYONARA\n\n\n\n\n\n\n\n");
        exit(1);
 }
}

void PingPoroLanSudo(){
    int p=1;
    int key=0;

    while(key!=13){

      system("cls");
    printf("    ===========================\n");
    printf("          PingPogLanSudo\n");
    printf("    ===========================\n");
   arrowHere(1,p); printf("        1. Perkalian\n");
    arrowHere(2,p); printf("       2. Pembagian\n");
    arrowHere(3,p); printf("       3. Penjumlahan\n");
    arrowHere(4,p); printf("       4. Pengurangan\n");
    arrowHere(5,p); printf("       5. Back to main menu\n");
 key=getch();
  if(key==80 && p !=5){
    p++;
  }
  else if(key==72 && p!=1){
    p--;
}
    else{
        p=p;
    }}

    if(key==13 && p==1){
          perkalian();
    }
else if(key==13 && p==2){
        pembagian();
 }
 else if(key==13 && p==3){
        pertambahan();
 }
 else if(key==13 && p==4){
        pengurangan();
 }
 else if(key==13 && p==5){
    system("cls");
    main();

 }}

void perkalian(){
    int a;
    int b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("insert number: ");
    scanf("%d",&a);
    printf("insert 2nd number: ");
    scanf("%d",&b);
    printf("hasil : %d\n",a*b);
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    PingPoroLanSudo();}
                }
            }
 }

void pembagian(){


    int a;
    int b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("insert number: ");
    scanf("%d",&a);
    printf("insert 2nd number: ");
    scanf("%d",&b);
    printf("hasil : %d\n",a/b);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                goto awalmula;}
                else if(amp == 'n'){
                    system("cls");
                    PingPoroLanSudo();}
                }
            }
 }
void pertambahan(){


    int a;
    int b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("insert number: ");
    scanf("%d",&a);
    printf("insert 2nd number: ");
    scanf("%d",&b);
    printf("hasil : %d\n",a+b);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                goto awalmula;}
                else if(amp == 'n'){
                    system("cls");
                    PingPoroLanSudo();}
                }
            }
 }
void pengurangan(){
    int a;
    int b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("insert number: ");
    scanf("%d",&a);
    printf("insert 2nd number: ");
    scanf("%d",&b);
    printf("hasil : %d\n",a-b);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
        while (1){
            if ( kbhit()){
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                goto awalmula;}
                else if(amp == 'n'){
                    system("cls");
                    PingPoroLanSudo();}
                }}

 }

void SinCosTan(){
    int p=1;
    int key=0;

    while(key!=13){

      system("cls");
   printf("    ===========================\n");
    printf("             SinCosTan\n");
    printf("    ===========================\n");
   arrowHere(1,p); printf("        1. Sinus\n");
    arrowHere(2,p); printf("       2. Cosinus\n");
    arrowHere(3,p); printf("       3. Tangen\n");
    arrowHere(4,p); printf("       4. Back to main menu\n");
 key=getch();
  if(key==80 && p !=4){
    p++;
  }
  else if(key==72 && p!=1){
    p--;
}
    else{
        p=p;
    }}

    if(key==13 && p==1){
          sinus();
    }
else if(key==13 && p==2){
        cosinus();
 }
 else if(key==13 && p==3){
        tangen();
 }
 else if(key==13 && p==4){
        system("cls");
        main();
  }
}

void sinus(){
    float a,radian;
    char amp;
    char ch;

  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan derajat sinus: ");
    scanf("%f",&a);
    radian = a*(PI/180.0);
    printf("hasil : %.2f\n",sin(radian));
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    SinCosTan();}
                }
            }
}

void cosinus(){
    float a,radian;
    char amp;
    char ch;

  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan derajat Cos: ");
    scanf("%f",&a);
    radian = a*(PI/180.0);
    printf("hasil : %.2f\n",cos(radian));
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    SinCosTan();}
                }
            }
}

void tangen(){
    float a,radian;
    char amp;
    char ch;

  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan derajat Tan: ");
    scanf("%f",&a);
    radian = a*(PI/180.0);
    printf("hasil : %.2f\n",tan(radian));
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    SinCosTan();}
                }
            }
}

void HitungKeldanLuas(){
    int p=1;
    int key=0;

    while(key!=13){

      system("cls");
    printf("    ===========================\n");
    printf("      Hitung Keliling dan Luas\n");
    printf("    ===========================\n");
   arrowHere(1,p); printf("        1. Hitung Keliling Bangun Datar\n");
    arrowHere(2,p); printf("       2. Hitung Luas Bangun Datar\n");
    arrowHere(3,p); printf("       3. Hitung Volume Bangun ruang\n");
    arrowHere(4,p); printf("       4. Return Menu Utama\n");
 key=getch();
  if(key==80 && p !=4){
    p++;
  }
  else if(key==72 && p!=1){
    p--;
}
    else{
        p=p;
    }}

    if(key==13 && p==1){
          keliling();
    }
else if(key==13 && p==2){
        Luas();
 }
 else if(key==13 && p==3){
        Volume();
 }
 else if(key==13 && p==4){
        system("cls");
        main();
 }


 }

void keliling(){
    int p=1;
    int key=0;

    while(key!=13){

      system("cls");
    printf("    ===========================\n");
    printf("      Keliling bangun datar\n");
    printf("    ===========================\n");
   arrowHere(1,p); printf("        1. Keliling Persegi\n");
    arrowHere(2,p); printf("       2. Keliling Trapesium\n");
    arrowHere(3,p); printf("       3. Keliling Layang2\n");
    arrowHere(4,p); printf("       4. Keliling Lingkaran\n");
    arrowHere(5,p); printf("       5. Kembali ke menu");
 key=getch();
  if(key==80 && p !=5){
    p++;
  }
  else if(key==72 && p!=1){
    p--;
}
    else{
        p=p;
    }}

    if(key==13 && p==1){
          segi();
    }
else if(key==13 && p==2){
        trapesium();
 }
 else if(key==13 && p==3){
        layang();
 }
 else if(key==13 && p==4){
        lingkaran();
 }
 else if (key==13 && p==5){
    system("cls");
        main();
        }
 }

void segi(){
    int a;
    int b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan panjang: ");
    scanf("%d",&a);
    printf("masukan lebar: ");
    scanf("%d",&b);
    printf("hasil : %d\n",(a+b)*2);
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    keliling();}
                }
            }
}

void trapesium(){
    int a;
    int b;
    int c;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan sisi atas: ");
    scanf("%d",&a);
    printf("masukan sisi bawah: ");
    scanf("%d",&b);
    printf("masukan sisi miring: ");
    scanf("%d",&c);
    printf("hasil : %d\n",a+b+(c*2));
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    keliling();}
                }
            }
}

void layang(){
    int a;
    int b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan panjang: ");
    scanf("%d",&a);
    printf("masukan lebar: ");
    scanf("%d",&b);
    printf("hasil : %d\n",(a+b)*2);
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    keliling();}
                }
            }
}

void lingkaran(){
    float a;
    float b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan diameter: ");
    scanf("%f",&a);
    printf("masukan jari-jari; ");
    scanf("%f",&b);
    printf("hasil diameter: %.2f\n",(a*PI));
    printf("hasil jari-jari: %.2f\n",(2*PI*b));
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    keliling();}
                }
            }
}

void Luas(){
    int p=1;
    int key=0;

    while(key!=13){

      system("cls");
     printf("    ===========================\n");
    printf("      Hitung Keliling dan Luas\n");
    printf("    ===========================\n");
   arrowHere(1,p); printf("        1. Luas Persegi\n");
    arrowHere(2,p); printf("       2. Luas Trapesium\n");
    arrowHere(3,p); printf("       3. Luas Layang-Layang\n");
    arrowHere(4,p); printf("       4. Luas Ligkaran\n");
    arrowHere(5,p); printf("       5. Back to main menu\n");
 key=getch();
  if(key==80 && p !=5){
    p++;
  }
  else if(key==72 && p!=1){
    p--;
}
    else{
        p=p;
    }}

    if(key==13 && p==1){
       Lpersegi();
    }
else if(key==13 && p==2){
        Ltrapesium();

 }
 else if(key==13 && p==3){
        Llayang();
 }
 else if(key==13 && p==4){
        Llingkaran();
 }
 else if(key==13 && p==5){
        system("cls");
        main();
 }
}

void Lpersegi(){
    int a;
    int b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan panjang: ");
    scanf("%d",&a);
    printf("masukan lebar: ");
    scanf("%d",&b);
    printf("Luas Persegi : %d\n",(a*b));
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    Luas();}
                }
            }
}

void Ltrapesium(){
    int a;
    int b;
    int c;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan sisi atas: ");
    scanf("%d",&a);
    printf("masukan sisi bawah: ");
    scanf("%d",&b);
    int d= a+b;
    printf("masukan Tingginya: ");
    scanf("%d",&c);
    printf("hasil : %d\n",(c*d)/2);
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    keliling();}
                }
            }
}

void Llayang(){
    int a;
    int b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan diagonal panjang: ");
    scanf("%d",&a);
    printf("masukan diagonal lebar: ");
    scanf("%d",&b);
    printf("hasil : %d\n",(a*b)/2);
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    keliling();}
                }
            }
}

void Llingkaran(){
    float a;
    float b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan diameter: ");
    scanf("%f",&a);
    printf("masukan jari-jari: ");
    scanf("%f",&b);
    printf("hasil diameter: %.2f\n",(PI*(a*a))/4);
    printf("hasil jari-jari: %.2f\n",(PI*(b*b)));
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    keliling();}
                }
            }
}

void Volume(){
    int p=1;
    int key=0;

    while(key!=13){

      system("cls");
    printf("    ===========================\n");
    printf("      Volume Bangun Datar\n");
    printf("    ===========================\n");
   arrowHere(1,p); printf("        1. Volume Kubus\n");
    arrowHere(2,p); printf("       2. Volume Prisma\n");
    arrowHere(3,p); printf("       3. Volume Limas\n");
    arrowHere(4,p); printf("       4. Volume Bola\n");
    arrowHere(5,p); printf("       5. Kembali ke menu");
 key=getch();
  if(key==80 && p !=5){
    p++;
  }
  else if(key==72 && p!=1){
    p--;
}
    else{
        p=p;
    }}

    if(key==13 && p==1){
          VKubus();
    }
else if(key==13 && p==2){
        VPrisma();
 }
 else if(key==13 && p==3){
        VLimas();
 }
 else if(key==13 && p==4){
        VBola();
 }
 else if (key==13 && p==5){
    system("cls");
        HitungKeldanLuas();
        }
 }

 void VKubus(){
    int a;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan sisi: ");
    scanf("%d",&a);
    printf("Luas Persegi : %d\n",(a*a*a));
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    Volume();}
                }
            }
}

void VPrisma(){
    float a,b,c,d,e,f;
    float g= e/2;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
     printf("masukan sisi persegi: ");
    scanf("%f",&a);
    printf("masukan lebar Alas Segitiga: ");
    scanf("%f",&b);
    printf("masukan Tinggi Segitiga: ");
    scanf("%f",&c);
    printf("masukan lebar Jari-Jari Lingkaran: ");
    scanf("%f",&d);
    printf("masukan Diameter Lingkaran: ");
    scanf("%f",&e);
    printf("masukan Tinggi Prisma: ");
    scanf("%f",&f);
    printf("Volume Prisma Persegi : %.0f\n",(a*a*a));
    printf("Volume Luas Prisma Segitiga : %.2f\n",(c*b*f)/2);
    printf("Volume Silinder berdasar jari-jari: %.2f\n",PI*d*d*f);
    printf("Volume Silinder berdasar Diameter: %.2f\n",PI*pow((0.5*e),2)*f);


    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    Volume();}
                }
            }
}

void VLimas(){
    float a,b,c,d,e,f;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
     printf("masukan sisi persegi: ");
    scanf("%f",&a);
    printf("masukan lebar Alas Segitiga: ");
    scanf("%f",&b);
    printf("masukan Tinggi Segitiga: ");
    scanf("%f",&c);
    printf("masukan lebar Jari-Jari Lingkaran: ");
    scanf("%f",&d);
    printf("masukan Diameter Lingkaran: ");
    scanf("%f",&e);
    printf("masukan Tinggi Limas: ");
    scanf("%f",&f);
    printf("Volume Limas Persegi : %.2f\n",(0.33*a*a*f));
    printf("Volume Limas Segitiga : %.2f\n",(0.33*b*a*f)/2);
    printf("Volume Limas Silinder berdasar jari-jari: %.2f\n",PI*d*d*f); //SKIP G JELAS G KETEMU DI GUGEL LIMAS SILINDER, BERJAM JAM NYARI PATTERN SAYA MENYERAHHHH //
    printf("Volume Limas Silinder berdasar Diameter: %.2f\n",PI*pow((0.5*e),2)*f); // INI JUGA APAAN SI AWOFGHAUGHAW9PGJAW9PGAWG//


    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    Volume();}
                }
            }
}

void VBola(){
    float a;
    float b;
    char amp;
    char ch;
  awalmula:
      fflush(stdin);
       system("cls");
    printf("masukan diameter: ");
    scanf("%f",&a);
    printf("masukan jari-jari: ");
    scanf("%f",&b);
    printf("hasil diameter: %.2f\n",(1.33*PI*b*b*b)/6);
    printf("hasil jari-jari: %.2f\n",1.33*PI*b*b*b);
    fflush(stdin);
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang perkalian?(y/n)\n");
    while (1) {
        if ( kbhit() ) {
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                perkalian();}
                else if(amp == 'n'){
                    system("cls");
                    Volume();}
                }
            }
}

void akar(){
    float a;
     char amp;
     char ch;
     fflush(stdin);
       system("cls");
    printf("Masukan angka yang akan diakar: ");
    scanf("%f",&a);
    printf(" Hasil akar dari %.2f adalah %2.f\n",a,sqrt(a));
    printf("press Enter to continue..\n");
    while (1) {
        if ( kbhit() ) {
            ch = getch();
            if (ch == 13){
                goto lanjutan;}}}
        lanjutan:
    printf("ingin mengulang akar?(y/n)\n");
        while (1){
            if ( kbhit()){
            amp = getch();
            fflush(stdin);
            if (amp == 'y'){
                system("cls");
                akar();}
                else if(amp == 'n'){
                    system("cls");
                    main();}
                }}
}



