#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct katilimci{
	char ad[20];
	char soyad[20];
	int kahvalti; // 0 hayir 1 evet
	int aksamyemek; // 0 hayir 1 evet
	int hotel; // 1 otel yok 2 iki yildizli 3 uc yildizli
	int yalniz; // 0 arkadasiyla 1 yalniz
	float odeme; 
};
void hotelhesapla(struct katilimci musteri[4]){
	for(int i=0;i<4;i++){
		if(musteri[i].hotel==2){
			printf("2 yildizli oteli secen musteri %s %s\n",musteri[i].ad,musteri[i].soyad);
			musteri[i].odeme+=75;
		}
		else if(musteri[i].hotel==3){
			musteri[i].odeme+=100;
		}
	}
}
void hizmethesapla(struct katilimci musteri[4]){
	for(int i=0;i<4;i++){
		if(musteri[i].yalniz==0){
			if(musteri[i].kahvalti==1|| musteri[i].aksamyemek==1){
				if(musteri[i].kahvalti==1){
					musteri[i].odeme+=(2*15);
				}
				else{
					musteri[i].odeme+=(2*30);
				}
			}
		}
		else if(musteri[i].kahvalti==1 || musteri[i].aksamyemek==1){
			if(musteri[i].kahvalti==1){
				musteri[i].odeme+=15;
			}
			if(musteri[i].aksamyemek==1){
				musteri[i].odeme+=30;
			}
		}
	}
}
void hesapdokumu(struct katilimci musteri[4]){
	for(int i=0;i<4;i++){
		printf("\n%d. MUSTERI HESAP DOKUMU : \n",i+1);
		printf("Ad Soyad : %s %s\n",musteri[i].ad,musteri[i].soyad);
		printf("Toplam Tutar : %.2f\n\n\n",musteri[i].odeme);
	}
}
int main() {
	struct katilimci musteri[4]={{"Muhammed","Yildiz",1,1,3,1,0.0},{"Samet","Yildiz",0,0,2,0,0.0},{"Ali","Yildiz",1,0,1,0,0.0},{"Ayse","Yildiz",0,1,2,0,0.0}};
	hotelhesapla(musteri);
	hizmethesapla(musteri);
	hesapdokumu(musteri);
	return 0;
}

 
