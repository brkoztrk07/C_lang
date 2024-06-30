#include <stdio.h>
int topla(int a,int b){ //Donus degeri olan fonk.
    return a + b;
}
void ymh_09(){ // Donus degeri olmayan fonk. aynı zamanda parametresiz.
    printf("FZ-09\n");
}
int fak(int n) {
    if (n == 0)
    return 1;
    else 
    return n * fak(n-1);
}
// Aritmetik Ortalama alan fonk yaz.
int ort()
{
    int s,toplam = 0, sayac = 0;
    float ortalama;

    printf("Hg. Sayilari giriniz.");
    printf("Girisi durdurmak icin 0 girin.\n");

    while(1) {
        printf("Sayi girin: ");
        scanf("%d", &s);
    if(s == 0){
        break;
    }
    toplam += s;
    sayac++;
    }
    if(sayac != 0){
        ortalama = (float)toplam / sayac;
        printf("Girilen sayilarin aritmetik ortalaması: %.3f\n", ortalama);
    } else{
        printf("Sayi girilmedi.\n");
    }
    
    
}


int main(){
    //Func Prototype int topla()
    //
    printf("%d\n",topla(5,4));
    ymh_09();
    printf("%d\n",fak(5));
    ort();
}