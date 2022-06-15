#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

int main()
{
    int i, sayi,basla,bit,miktar;
    printf("baslangic degerini girin: ");
scanf("%d",&basla);
printf("bitis degerini girin: ");
scanf("%d",&bit);
printf("sayi miktarini girin: ");
scanf("%d",&miktar);
int sayilar[miktar];
    
    srand(time(NULL));
    
    for(i = 0 ; i < miktar ; i++)
    {
       s1: sayi=basla+rand()%(bit-basla);
        sayilar[i]=sayi;
        if(miktar<(bit-basla)){
        for(int a=0; a<i; a++){
        if(sayilar[i]==sayilar[a]){
            goto s1;
        }
        }
        }
        printf("%d\n",sayilar[i]);
    }
   system("pause");
    return 0;
    
}


















}
