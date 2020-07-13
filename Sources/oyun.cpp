#include <stdio.h>
#include <stdlib.h>
/******************************************************
Author           : Mehmed Can DEMIREL
School           : Hacettepe University
Depertmant       : Computer Science and Engineering
Program Name     : YONMOKU
Program Language : ANSI C

*******************************************************/

int main()
{   /*####################DEGISKENLER##############################*/
     int game_diagnostic = 0; /* oyunun bitimini gösterecek sayaç*/
     int b_win = 0; /* siyah oyuncunun kazanma durumunda artarak siyahýn galibiyetini belirler*/
     int w_win = 0; /* beyaz oyuncunun kazanma durumunda artarak beyazin galibiyetini belirler*/
     char a[11][11]; /* oyun tablosu ve uzerinde yapilacak islemleri saglar*/
     int i,j; /* oyun tablosunun satir ve sutun sayilarini gösterir */
     char black_name[99]; /* siyah oyuncu icin isim girmesini saglar */
     char white_name[99]; /* beyaz oyuncu icin isim girmesini saglar */
     int b_counter = 0;   /* siyah oyuncunun hamle sayisini gösterir */
     int w_counter = 0;   /* beyaz oyuncunun hamle sayisini gösterir */

    /*##############################################################


                   Cyber Warrior - SANCAKTAR

    ####################OYUN ICERIGI##############################*/
        printf("\n\n\n");
        printf("----------------GAME INTRODUCTIONS------------------------------\n\n");
        printf("-> First player who plays with black stones writes a name\n \n");
        printf("-> Second player who plays with white stones writes a name\n\n");
        printf("-> First player starts to game with put a black stone on the table \nwith input row and column number\n\n");
        printf("-> After the first player second player put a white stone on the table \nwith input row and column number \n\n");
        printf("-> The purpose of each player is to place an unbroken row of four stones of \ntheir own color horizontally,vertically or diagonally \n\n");
        printf("-> Who succesed this statement first, it wins the game...\n\n");
        printf("-> In our game there aren't black or white stones.\nInstead of stones there are B and W words that reperesent to stones.\n\n");
        printf("-> In our game 0 represent 10 at row and column in the game board\n\n");
        printf("-> Now Let's start the game with Enter names for players...Good Luck !\n\n");
        printf("----------------------------------------------------------------\n");
        printf("\n \n \n");

/*####################KULLANICI ISIMLERI##############################*/

/* Bu kisimda kullanicilardan isim girilmesi istenmektedir */
printf("Please Write Your Name for Black Player\n");
    scanf("%s",black_name);
    printf("Please Write Your Name for White Player\n");
    scanf("%s",white_name);


/*####################TABLO OLUSTURMA##############################*/

/* Burda tüm dizi elemanlarina null (bosluk) degeri atiyorum...*/
    for(i=0;i<11;i++)
    {
        for(j=0;j<11;j++)
        {
            a[i][j]= ' ';
        }
    }
/* Onceden bos deger atanmis bazi dizi elemanlarina,satir ve sutun sayilarini belirleyen, yeni degerler atiyorum */
a[0][1]='1'; a[0][2]='2'; a[0][3]='3'; a[0][4]='4'; a[0][5]='5'; a[0][6]='6'; a[0][7]='7'; a[0][8]='8'; a[0][9]='9';a[0][10]=10;
a[1][0]='1'; a[2][0]='2'; a[3][0]='3'; a[4][0]='4'; a[5][0]='5'; a[6][0]='6'; a[7][0]='7'; a[8][0]='8'; a[9][0]='9'; a[10][0]='0';
/*burda tum dizi elamanlarini satir ve sutun icerisinde ekrana basiyoruz...*/
for(i=0;i<11;i++)
{
    for(j=0;j<11;j++)
    {
        if (i==0 && j==10)
        printf("%d",a[i][j]);
        printf("%c  ",a[i][j]);
    }
        printf("\n");
        printf("\n");
}

   do{ /* oyunun surekli bir dongu icerisinde kalmasini sagliyorum */

/*####################SIYAH OYUNCU HAMLE ISLEMLERI##############################*/

/* Siyah oyuncudan satir ve sutun sayilarini girmesi isteniyor */
printf("%s <B> for the row : ",black_name);
scanf("%d",&i);
printf("%s <B> for the column : ",black_name);
scanf("%d",&j);
if ( a[i][j]=='B' || a[i][j]=='W') /* girilen satir ve sutuna denk gelen yerde onceden baska tas var ise tekrardan oynamasini sagliyor */
{printf("There is already a stone.Please move another place...\n");
continue;}
else if (i<1 || i>10 || j<1 || j > 10)
{printf("Between 1-10,include 1 and 10, Please!\n");/* 1 den kucuk veya 10 dan buyuk bir deger girildiginde oyuncudan tekrar oynamasini sagliyor */
continue;}
else
a[i][j]='B'; /* ozel durumlar yasanmadigi takdirde girilen satir ve sutun yerine B degerini atiyoruz */
b_counter++;
/* Burada son hamleden sonra oyun kazanma durumu kontrol edilir ve herhangi biri saglandigi takdirde oyunu kazanacaktir */

if( (a[i][j]=='B'&& a[i][j+1]=='B'&& a[i][j+2]=='B' && a[i][j+3]=='B') || (a[i][j-1]=='B'&& a[i][j]=='B'&& a[i][j+1]=='B' && a[i][j+2]=='B') || (a[i][j-2]=='B'&& a[i][j-1]=='B'&& a[i][j]=='B' && a[i][j+1]=='B') || (a[i][j-3]=='B'&& a[i][j-2]=='B'&& a[i][j-1]=='B' && a[i][j]=='B')   )
  {game_diagnostic++;
    b_win++; break;}
else if ( (a[i][j]=='B'&& a[i+1][j]=='B'&& a[i+2][j]=='B' && a[i+3][j]=='B') || (a[i-1][j]=='B'&& a[i][j]=='B'&& a[i+1][j]=='B' && a[i+2][j]=='B') || (a[i-2][j]=='B'&& a[i-1][j]=='B'&& a[i][j]=='B' && a[i+1][j]=='B') || (a[i-3][j]=='B'&& a[i-2][j]=='B'&& a[i-1][j]=='B' && a[i][j]=='B') )
{game_diagnostic++;
    b_win++; break;}
else if ( (a[i][j]=='B'&& a[i+1][j-1]=='B'&& a[i+2][j-2]=='B' && a[i+3][j-3]=='B') || (a[i-1][j+1]=='B'&& a[i][j]=='B'&& a[i+1][j-1]=='B' && a[i+2][j-2]=='B') || (a[i-2][j+2]=='B'&& a[i-1][j+1]=='B'&& a[i][j]=='B' && a[i+1][j-1]=='B') || (a[i-3][j+3]=='B'&& a[i-2][j+2]=='B'&& a[i-1][j+1]=='B' && a[i][j]=='B')  )
    {game_diagnostic++;
    b_win++; break;}
else if (  (a[i][j]=='B'&& a[i+1][j+1]=='B'&& a[i+2][j+2]=='B' && a[i+3][j+3]=='B') || (a[i-1][j-1]=='B'&& a[i][j]=='B'&& a[i+1][j+1]=='B' && a[i+2][j+2]=='B') || (a[i-2][j-2]=='B'&& a[i-1][j-1]=='B'&& a[i][j]=='B' && a[i+1][j+1]=='B') || (a[i-3][j-3]=='B'&& a[i-2][j-2]=='B'&& a[i-1][j-1]=='B' && a[i][j]=='B')                    )
     {game_diagnostic++;
    b_win++; break;}

printf("\n");

/* burada tablonun tekrar ekrana basilmasini sagliyoruz */
for(i=0;i<11;i++)
{
    for(j=0;j<11;j++)
    {
        if (i==0 && j==10)
        printf("%d",a[i][j]);
        printf("%c  ",a[i][j]);
    }
        printf("\n");
        printf("\n");
}

/*####################BEYAZ OYUNCU HAMLE ISLEMLERI##############################*/
/* Beyaz oyuncudan satir ve sutun sayilarini girmesi isteniyor */
printf("%s <W> for the column : ",white_name);
scanf("%d",&i);
printf("%s <W> for the column : ",white_name);
scanf("%d",&j);
if ( a[i][j]=='B' || a[i][j]=='W' )/* girilen satir ve sutuna denk gelen yerde onceden baska tas var ise tekrardan oynamasini sagliyor */
{

do {
printf("There is already a stone.Please move another place...\n");
printf("%s <W> for the column : ",white_name);
scanf("%d",&i);
printf("%s <W> for the column : ",white_name);
scanf("%d",&j);
if(a[i][j]==' '){
a[i][j]='W';
break;}

}while(5>4);

}
else if (i<1 || i>10 || j<1 || j > 10) /* 1 den kucuk veya 10 dan buyuk bir deger girildiginde oyuncudan tekrar oynamasini sagliyor */
{
do {
printf("Between 1-10,include 1 and 10, Please!\n");
printf("%s <W> for the column : ",white_name);
scanf("%d",&i);
printf("%s <W> for the column : ",white_name);
scanf("%d",&j);
if(  (i>1 && i<10 && j>1 && j < 10) && a[i][j]==' '   )
{
    a[i][j]='W';
    break;
}


}while((i<1 || i>10 || j<1 || j > 10) || a[i][j]!=' '  );

a[i][j]='W';
}
else
a[i][j]='W'; /* ozel durumlar yasanmadigi takdirde girilen satir ve sutun yerine W degerini atiyoruz */
w_counter++;
/* Burada son hamleden sonra oyun kazanma durumu kontrol edilir ve herhangi biri saglandigi takdirde oyunu kazanacaktir */
if( (a[i][j]=='W'&& a[i][j+1]=='W'&& a[i][j+2]=='W' && a[i][j+3]=='W') || (a[i][j-1]=='W'&& a[i][j]=='W'&& a[i][j+1]=='W' && a[i][j+2]=='W') || (a[i][j-2]=='W'&& a[i][j-1]=='W'&& a[i][j]=='W' && a[i][j+1]=='W') || (a[i][j-3]=='W'&& a[i][j-2]=='W'&& a[i][j-1]=='W' && a[i][j]=='W')   )
   {game_diagnostic++;
    w_win++; break;}
else if ( (a[i][j]=='W'&& a[i+1][j]=='W'&& a[i+2][j]=='W' && a[i+3][j]=='W') || (a[i-1][j]=='W'&& a[i][j]=='W'&& a[i+1][j]=='W' && a[i+2][j]=='W') || (a[i-2][j]=='W'&& a[i-1][j]=='W'&& a[i][j]=='W' && a[i+1][j]=='W') || (a[i-3][j]=='W'&& a[i-2][j]=='W'&& a[i-1][j]=='W' && a[i][j]=='W') )
    {game_diagnostic++;
    w_win++; break;}
else if ( (a[i][j]=='W'&& a[i+1][j-1]=='W'&& a[i+2][j-2]=='W' && a[i+3][j-3]=='W') || (a[i-1][j+1]=='W'&& a[i][j]=='W'&& a[i+1][j-1]=='W' && a[i+2][j-2]=='W') || (a[i-2][j+2]=='W'&& a[i-1][j+1]=='W'&& a[i][j]=='W' && a[i+1][j-1]=='W') || (a[i-3][j+3]=='W'&& a[i-2][j+2]=='W'&& a[i-1][j+1]=='W' && a[i][j]=='W')  )
    {game_diagnostic++;
    w_win++; break;}
else if (  (a[i][j]=='W'&& a[i+1][j+1]=='W'&& a[i+2][j+2]=='W' && a[i+3][j+3]=='W') || (a[i-1][j-1]=='W'&& a[i][j]=='W'&& a[i+1][j+1]=='W' && a[i+2][j+2]=='W') || (a[i-2][j-2]=='W'&& a[i-1][j-1]=='W'&& a[i][j]=='W' && a[i+1][j+1]=='W') || (a[i-3][j-3]=='W'&& a[i-2][j-2]=='W'&& a[i-1][j-1]=='W' && a[i][j]=='W')                    )
     {game_diagnostic++;
    w_win++; break;}
printf("\n");
/* burada tablonun tekrar ekrana basilmasini sagliyoruz */


for(i=0;i<11;i++)
{
    for(j=0;j<11;j++)
    {
        if (i==0 && j==10)
        printf("%d",a[i][j]);


        printf("%c  ",a[i][j]);
    }
        printf("\n");
        printf("\n");
}
} while(game_diagnostic!=1); /* oyun bitimini saglayacak durumlarda game_diagnostic degeri 1 artarak 0 dan 1 e yükselir ve donguden cikilmasini saglar */
/*####################OYUN BITIS ISLEMLERI##############################*/
printf("\n");
/* burada tablonun tekrar ekrana basilmasini sagliyoruz */
for(i=0;i<11;i++)
{
    for(j=0;j<11;j++)
    {
        if (i==0 && j==10)
        printf("%d",a[i][j]);
        printf("%c  ",a[i][j]);
    }
        printf("\n");
        printf("\n");
}
if (b_win==1) /* Siyah oyuncunun kazanmasi durumu kontrol edilip saglandiginda b_win degeri 0 dan 1 e yukselir ve buradaki if sartinin gerceklesmesini saglar */
printf(" Congratulations! %s < B > Wins...\n",black_name);
else if(w_win==1) /* Beyaz oyuncunun kazanmasi durumu kontrol edilip saglandiginda w_win degeri 0 dan 1 e yukselir ve buradaki if sartinin gerceklesmesini saglar */
printf(" Congratulations! %s < W > Wins...\n",white_name);

printf("\n\n------------------------------------\n");

/*####################OYUN ANALIZ ISLEMLERI##############################*/

printf("Game Notes\n");
printf("%s rush forward %d times\n",black_name,b_counter); /* Siyah oyuncunun hamle sayisini gösterir */
printf("%s rush forward %d times\n",white_name,w_counter); /* Beyaz oyuncunun hamle sayisini gösterir */

system("PAUSE");
return 0;
}

