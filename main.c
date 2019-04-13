#include <stdio.h>
int bolme_islem(int,int,int *);
int main() {
    int bolunen, bolen;
    int bolum, kalan;

    printf("bolunen ve bolen degerleri giriniz:");

    scanf("%d\n%d",&bolunen,&bolen);
 //   scanf("%d ", &bolen);

    printf("bolunen=%d bolen=%d\n", bolunen, bolen);


    bolum=bolme_islem(bolunen, bolen, &kalan);
    printf("bolum:%d \nkalan:%d\n",bolum,kalan);

    getchar();
    return 0;
}
int bolme_islem(int bolunen, int bolen, int *kalan) //13,4
{
    *kalan=bolunen%bolen;// 13%4  kalan=1
    return bolunen/bolen; //3
}