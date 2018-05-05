#include <stdio.h>
#include <stdlib.h>


int main()
{
    // diziyi baska bir diziye ikinci bir parametre olarak gönderen ve secili kelimeyi silen
    // fonksiyonu yazin


    char arr_cumle[100], arr_kelime[20];
    printf("cumle giriniz\n");
    gets(arr_cumle);


    printf("kelime girin\n");
    gets(arr_kelime);

    printf(" cumle : %s    kelime : %s",arr_cumle,arr_kelime);

    sil(arr_cumle,arr_kelime);
}

void sil(char *cumle, char *kelime)
// char *cumle=arr_cumle;
{
 //  printf("\n%c",*(cumle+1));
   int cumle_boyutu=0;

  int i=0, j=0;
 /* for(i=0;*(cumle+i)!='\0';i++)
  {
     printf("\n%c",*(cumle+i));

  }
*/
int a=0;
// kelime lengthi alma
    for(a=0;*(kelime+a)!='\0';a++)
  {

  }
int kelime_length=a;

//bitis
// bunu açarsın int baslangic_indisi=0, bitis_indisi=0;
int indis_sayaci=0;

while(*(cumle+i)!='\0')
{
    while(*(kelime+j)!='\0')
    {
     if(*(cumle+i)==*(kelime+j))
        {
            if(j!=kelime_length-1)
            {
           i++;
            j++;
            break;
             }
             else
             {
                 //i=6 ve j=2 iken girdim.
            // burayı açarsın    baslangic_indisi=i-j;
             // burayı açarsın   bitis_indisi=i;

           indis_sayaci++;
                 i++;
                 j=0;

                 break;
             }
        }
        else
        {
            i++;
            j=0;
            break;
        }
    }
}

printf("\n%d\n\n",indis_sayaci);

int baslangic_indisleri[indis_sayaci];
int bitis_indisleri[indis_sayaci];

int c=0;

indis_sayaci=0;


i=0;
j=0;
while(*(cumle+i)!='\0')
{
    while(*(kelime+j)!='\0')
    {
     if(*(cumle+i)==*(kelime+j))
        {
            if(j!=kelime_length-1)
            {
           i++;
            j++;
            break;
             }

             else
             {
                 //i=6 ve j=2 iken girdim.
            // burayı açarsın    baslangic_indisi=i-j;
             // burayı açarsın   bitis_indisi=i;
            baslangic_indisleri[indis_sayaci]=i-j;
            bitis_indisleri[indis_sayaci]=i;
            indis_sayaci++;
                 i++;
                 j=0;
                 break;
             }
        }
        else
        {
            i++;
            j=0;
            break;
        }
    }

}
int b=0;

printf("\n");
printf("\n%d\n\n",indis_sayaci);


for(b=0;b<indis_sayaci;b++)
{
    printf("%d\t",baslangic_indisleri[b]);
    printf("%d\n",bitis_indisleri[b]);
}

printf("\n%d\n\n",kelime_length);
// -----------------------------------------yazdırma kısmı
/* sadece ilk geçen kelimeyi sildiren tarafı
 for(b=0;b!=;b++)
{

        printf("%c",*(cumle+b));

}
b=bitis_indisi+1;
 for(b;*(cumle+b)!='\0';b++)
{

        printf("%c",*(cumle+b));

}
*/
//-----------------------------------------------yazdırma kısmı
i=0;
j=0;
int sayacc=0;


  for(i=0;*(cumle+i)!='\0';i++)
{
    if(i>=baslangic_indisleri[j]&&i<=bitis_indisleri[j])
    {
        sayacc++;
        printf(" ");
        if(sayacc==kelime_length)
        {
            j++;
        }

    }
else
{
    sayacc=0;
   printf("%c",*(cumle+i));
}
}
}
