#include <stdio.h>

struct veri {
    char tarih[11];
    float kur;
};

int main() {
    
    FILE *f = fopen("\\euro.dat", "rb"); // dosya yolu

    if (f == NULL) {
        printf("Dosya acilamadi\n");
        return 0;
    }

struct veri v;
float en_dusuk = 200.0;
float en_yuksek = 0.0;    
float toplam_kur = 0.0; 
int adet = 0;        
 
    while (fread(&v, sizeof(struct veri), 1, f)) {
        if (v.kur < en_dusuk) {
            en_dusuk = v.kur;
        }
        if (v.kur > en_yuksek) {
            en_yuksek = v.kur;
        }
        toplam_kur += v.kur;
        adet++;
    }
    
    if (adet > 0) {
        printf("En Dusuk: %.4f\n", en_dusuk);
        printf("En Yuksek: %.4f\n", en_yuksek);
        printf("Ortalama: %.4f\n", toplam_kur / adet);
    }

    fclose(f);

    printf("\nCikis icin enter.");
    fflush(stdin);
    getchar();


return 0;

}
