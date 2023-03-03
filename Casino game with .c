#include<stdio.h>
#include<stdlib.h>
#include<string.h>


int kurallar();

int  round1();


int main ()
    
{


kurallar();

printf("\n\n");

raund1();

return 0;

}

int round1()

{
    char ad[100];
    char soyad[100];
    int yas;
    int id;
    char tc[100];
    char adres[100];
    int tel;


    printf("Adinizi giriniz: ");
    scanf("%s",&ad);
    printf("Soyadinizi giriniz: ");
    scanf("%s",&soyad);
    printf("Yasinizi giriniz: ");
    scanf("%d",&yas);
    printf("ID numaranizi giriniz: ");
    scanf("%d",&id);
    printf("TC numaranizi giriniz: ");
    scanf("%s",&tc);
    printf("Adresinizi giriniz: ");
    scanf("%s",&adres);
    printf("Telefon numaranizi giriniz: ");
    scanf("%d",&tel);

    printf("\n\n");

    int depozito;

    printf("oyun basina alinacak depozite miktarini giriniz: ");
    scanf("%d",&depozito);

    printf("\n\n");

    printf("cari dengeniz nedir?: ",depozito);

    printf("\n\n");

    int bahis;
    printf("bahis miktarini giriniz: ");
    scanf("%d",&bahis);

    printf("\n\n");

    if(bahis>depozito)
    {
        printf("bahis miktariniz depozitodan fazla olamaz\n");
        printf("bahis miktarini tekrar giriniz: ");
        scanf("%d",&bahis);
    }

    printf("\n\n");

    int bilgisayar;

    bilgisayar = rand() % 10 + 1;

    int misafir;
    printf("misafirin tahmini sayisini giriniz 1 ila 10 arasinda: ");
    scanf("%d",&misafir);

    printf("\n\n");

    if(misafir>10)
    {
        printf("1 ile 10 arasinda bir sayi giriniz: ");
        scanf("%d",&misafir);
    }

    printf("\n\n");

    if (misafir==bilgisayar)
    {
        printf("tebrikler kazandiniz\n");
        printf("kazandiginiz miktar: %d",bahis);
        printf("\n\n");

    
int bahis2;

bahis2=bahis*2;

int yenigalibiyet;

printf("yeni bir oyun oynamak ister misiniz? 1 evet 2 hayir: ");
scanf("%d",&yenigalibiyet);

if(bahis==depozito)

{
    yenigalibiyet=bahis2+0;

}

else
{
    yenigalibiyet=bahis2+depozito;
}

printf("sen kazandin $%d",yenigalibiyet);

}

else if(misafir!=bilgisayar)

{
    printf("kaybettiniz\n");
    printf("kaybettiginiz miktar: %d",bahis);
    printf("\n\n");
    
    printf("dogru numara %d",bilgisayar);
    printf("\n\n");



    int yenikayip;

    yenikayip=depozito-bahis;

    printf("sen kaybettin $%d",yenikayip);

    printf("\n\n");

    if(yenikayip==0)

    {
        printf("kaptan , oyunu kaybettiniz\n");
        printf("sizin paraniz kalmadi ");
        printf("iyi günler");
    }

    else
    {
        int decision;

        printf("1 evet : \n");
        printf("2 hayir: \n");

        printf("yeni bir oyun oynamak ister misiniz?(evet/hayir): ");
        scanf("%d",&decision);
        printf("\n\n");


        if (decision==1)
        {
        
        kurallar();

        printf("\n\n");

        printf("cari dengeniz nedir?: ",yenikayip);

        printf("\n\n");

        int bahis3;

        printf("bahis miktarini giriniz: ");
        scanf("%d",&bahis3);
        printf("\n\n");

        if(bahis3>yenikayip)
        {
            printf("bahis miktariniz depozitodan fazla olamaz\n");
            printf("bahis miktarini tekrar giriniz: ");
            scanf("%d",&bahis3);
            
        }

        int misafir2;

        printf("misafirin tahmini sayisini giriniz 1 ila 10 arasinda: ");
        scanf("%d",&misafir2);
        printf("\n\n");

        int bilgisayar2;
        bilgisayar=9;

        if (misafir2>10)
        {
            printf(" max 1 ile 10 arasinda bir sayi girebilirsiniz:\n ");
            printf("tekrar giris yapiniz:");
            scanf("%d",&misafir2);
            printf("\n\n");

        }

        if(misafir2==bilgisayar2)

        {
            printf("tebrikler kazandiniz\n");
            printf("kazandiginiz miktar: %d",bahis3*2);
            printf("\n\n");

            int b;

            b=bahis3*2;

            int b1;

            if(bahis3==yenikayip)

            {
                b1=b+0;
            }

            else
            {
                b1=b+yenikayip;
            }

            printf("siz kazandiniz $%d",b1);

        }

        else if(misafir2=bilgisayar2)

        {
            printf("kaybettiniz\n");
            printf("kaybettiginiz miktar: %d",bahis3);
            printf("\n\n");

            int b2;
            b2=yenikayip-bahis3;

            printf("siz kaybettiniz $%d",b2);
            printf("\n\n");

            if(b2==0)

            {
                printf("kapatan , 0 tl niz var\n");
                printf("oynamak icini paraniz kalmadi\n");
                printf("iyi günler");
            }
        }
    }

 else if (decision==2)
 {
     printf("iyi günler");
 }

    }

 {

    
 }

int kurallar()

{

    printf("***************************\n");
    printf("      oyun kurallari       \n");
    printf("***************************\n");

    printf("  1. 1 ila 10 arasinda bir sayi giriniz\n");
    printf("  2. bahis miktariniz depozitodan fazla olamaz\n");
    printf("  3. bahis miktariniz 0 dan kucuk olamaz\n");
    printf("  4. bahis miktariniz 0 olamaz\n");
    printf("  5. bahis miktariniz 0 dan buyuk olmalidir\n");

    pintf("***************************\n");

}



return 0;

}

}
