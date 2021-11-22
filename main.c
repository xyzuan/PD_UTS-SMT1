#include <stdio.h>
#include <math.h>

int jmlh_species, jmlh_populasi;
float jmlh_species_hewan[4];
float entropi;
float banteng, burung_merak, rusa, kerbau_liar;

void banding(){
    if (entropi <= 1){
        printf("Kesimpulannya adalah : keanekaragaman fauna pada wilayah tersebut sangat kurang");
    } else if (entropi > 1){
        printf("Kesimpulannya adalah : keanekaragaman fauna pada wilayah tersebut sangat beragam");
    }
}

int main(){
    printf("====PROGRAM PERHIUNGAN KEANEKARAGAMAN FAUNA====\n");
    printf("\nMasukkan total jumlah spesies : ");
    scanf("%d", &jmlh_species);
    printf("Masukkan total jumlah populasi hewan : ");
    scanf("%d", &jmlh_populasi);
    printf("\n\n\n");

    for(int loop = 1; loop <= jmlh_species; loop++){
        printf("Masukkan total jumlah hewan untuk spesies ke - %d : ", loop);
        scanf("%f", &jmlh_species_hewan[loop]);
    }

    // Entropi
    banteng = -(log(jmlh_species_hewan[1] / jmlh_populasi) / log(2)) * (jmlh_species_hewan[1] / jmlh_populasi);
    burung_merak = -(log(jmlh_species_hewan[2] / jmlh_populasi) / log(2)) * (jmlh_species_hewan[2] / jmlh_populasi);
    rusa = -(log(jmlh_species_hewan[3] / jmlh_populasi) / log(2)) * (jmlh_species_hewan[3] / jmlh_populasi);
    kerbau_liar = -(log(jmlh_species_hewan[4] / jmlh_populasi) / log(2)) * (jmlh_species_hewan[4] / jmlh_populasi);

    entropi = roundf((banteng + burung_merak + rusa + kerbau_liar) * 100) / 100;
    printf("\n\n\n");
    printf("Nilai entropi dari seluruh spesies dalam populasi hewan : %.2f\n", entropi);
    printf("---------------------\n");

    // Kesimpulan
    banding();
}
