#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int kullaniciGiris(int self);
int panelGoster(int self);
int sepetGoster(int menuNo);
int urunSil(char urunNo[20]);
int urunEkle(char urunNo[20]);
int urunGoster(int menuNo);
int cikisYap(int self);
/* Teknoloji Kategorisi Ürünleri */
    char t1[50] ="Uzaktan kumandalı araba\n";
    char t2[50] ="Playstation 5\n";
    char t3[50] ="Elektronik Monopoly\n";
    char t4[50] ="F16 Savaş Uçağı\n";
    char t5[50] ="XBOX 360 Oyun Konsolu\n";
    
    int t1_d = 0;
    int t2_d = 0;
    int t3_d = 0;
    int t4_d = 0;
    int t5_d = 0;
    /* Spor Kategorisi Ürünleri */
    char s1[30] = "Türkiye Kupası Futbol Topu\n";
    char s2[28] = "5 Numara Kaleci Eldiveni\n";
    char s3[36] = "Fenerbahçe İç Saha Forması XL\n";
    char s4[30] = "Minyatür Golf Çantası\n";
    char s5[21] = "Tenis Raket Takımı\n";
    
    int s1_d = 0;
    int s2_d = 0;
    int s3_d = 0;
    int s4_d = 0;
    int s5_d = 0;
    /* Kitap Kategorisi Ürünleri */
    char k1[50] = "Cengiz Aytmatov / Beyaz  Gemi\n";
    char k2[50] = "Oğuz Atay / Tutanamayanlar\n";
    char k3[50] = "Hemingway / Çanlar Kimin İçin Çalıyor\n";
    char k4[50] = "Charles Disckens / İki Şehrin Hikayesi\n";
    char k5[50] = "Cengiz Erşahin / Sır\n";
    
    int k1_d = 0;
    int k2_d = 0;
    int k3_d = 0;
    int k4_d = 0;
    int k5_d = 0;
    /* Hobi Kategorisi Ürünleri */
    char h1[50] = "1000 Parça Puzzle\n";
    char h2[50] = "Türkçe Scrabble\n";
    char h3[50] = "4 Kişilik Twister Oyunu\n";
    char h4[50] = "Jenga\n";
    char h5[50] = "6 Parça Bateri Seti\n";
    
    int h1_d = 0;
    int h2_d = 0;
    int h3_d = 0;
    int h4_d = 0;
    int h5_d = 0;
    
int main()
{
    
    
    int kullaniciGiris_cek;
    kullaniciGiris_cek = kullaniciGiris(2);
   
    return 0;
}

int kullaniciGiris(int d_self){
     system("clear");
     int username; 
    int password; 
    int girisKontrol;
    
      printf("Lütfen giriş ID giriniz:\n"); 
    scanf("%d",&username); 
    printf("Lütfen şifrenizi giriniz:\n"); 
    scanf("%d",&password);
   
    int panelGosterd;
    if(username == 123){ 
        if(password == 321){ 
            system("clear");
      printf("Giriş Başarılı!\n\n");
      panelGosterd = panelGoster(2);
        }else{ 
    printf("\nwŞifreniz Yanlış");
}
    }else{ 
    printf("\nBu kullanıcı bulunamadı");
}     
}

int cikisYap(int d_self){
  int giriscek;
  giriscek = kullaniciGiris(2);
}

int panelGoster(int d_self){
    int menu_no;
    system("clear");
   printf("İşlem yapmak istediğiniz numarayı giriniz:\n\n1- Sepete Ürün Ekle\n2- Sepetten Ürün Sil\n3- Sepeti Göster\n4- Ürünleri Göster\n5- Çıkış\n");
   scanf("%d",&menu_no);
   if(menu_no == 1){
       system("clear");
         int uruneklecek;
    uruneklecek = urunGoster(2);
   }else if(menu_no == 2){
       system("clear");
       int sepetcek3;
    sepetcek3 = sepetGoster(2);
    

   }else if(menu_no == 3){
       system("clear");
        int sepetgostercek;
        sepetgostercek = sepetGoster(1);
   }else if(menu_no == 4){
    
      int urungoster;
        urungoster = urunGoster(1);
   }else if(menu_no == 5){
      
      int giriscek;
        giriscek = cikisYap(2);
   }else{
      
       printf("Böyle bir menü bulunmamaktadır!\n");
        int panelGoster_cek;
        panelGoster_cek = panelGoster(2);
   }
  
} 
int sepetGoster(int menuNo){
   if (menuNo == 1)
   {
        printf("Sepetiniz Aşağıdadır\n");
    printf("--------------------------\n");
    int panelgostercek2;
    if(h1_d == 1){
       printf("No h1 = %s",h1);
   } if(h2_d == 1){
       printf("No h2 = %s",h2);
   } if(h3_d == 1){
       printf("No h3 = %s",h3);
   } if(h4_d == 1){
       printf("No h4 = %s",h4);
   } if(h5_d == 1){
       printf("No h5 = %s",h5);
   }if(t1_d == 1){
       printf("No t1 = %s",t1);
   } if(t2_d == 1){
       printf("No t2 = %s",t2);
   } if(t3_d == 1){
       printf("No t3 = %s",t3);
   } if(t4_d == 1){
       printf("No t4 = %s",t4);
   } if(t5_d == 1){
       printf("No t5 = %s",t5);
   }if(s1_d == 1){
       printf("No s1 = %s",s1);
   } if(s2_d == 1){
       printf("No s2 = %s",s2);
   } if(s3_d == 1){
       printf("No s3 = %s",s3);
   } if(s4_d == 1){
       printf("No s4 = %s",s4);
   } if(s5_d == 1){
       printf("No s5 = %s",s5);
   }if(k1_d == 1){
       printf("No k1 = %s",k1);
   } if(k2_d == 1){
       printf("No k2 = %s",k2);
   } if(k3_d == 1){
       printf("No k3 = %s",k3);
   } if(k4_d == 1){
       printf("No k4 = %s",k4);
   } if(k5_d == 1){
       printf("No k5 = %s",k5);
   }
   panelgostercek2 = panelGoster(2);
   }
   else if(menuNo == 2)
   {
       printf("Sepetiniz Aşağıdadır\n");
    printf("--------------------------");
    int panelgostercek2;
    if(h1_d == 1){
       printf("No h1 = %s",h1);
   } if(h2_d == 1){
       printf("No h2 = %s",h2);
   } if(h3_d == 1){
       printf("No h3 = %s",h3);
   } if(h4_d == 1){
       printf("No h4 = %s",h4);
   } if(h5_d == 1){
       printf("No h5 = %s",h5);
   }if(t1_d == 1){
       printf("No t1 = %s",t1);
   } if(t2_d == 1){
       printf("No t2 = %s",t2);
   } if(t3_d == 1){
       printf("No t3 = %s",t3);
   } if(t4_d == 1){
       printf("No t4 = %s",t4);
   } if(t5_d == 1){
       printf("No t5 = %s",t5);
   }if(s1_d == 1){
       printf("No s1 = %s",s1);
   } if(s2_d == 1){
       printf("No s2 = %s",s2);
   } if(s3_d == 1){
       printf("No s3 = %s",s3);
   } if(s4_d == 1){
       printf("No s4 = %s",s4);
   } if(s5_d == 1){
       printf("No s5 = %s",s5);
   }if(k1_d == 1){
       printf("No k1 = %s",k1);
   } if(k2_d == 1){
       printf("No k2 = %s",k2);
   } if(k3_d == 1){
       printf("No k3 = %s",k3);
   } if(k4_d == 1){
       printf("No k4 = %s",k4);
   } if(k5_d == 1){
       printf("No k5 = %s",k5);
   }

   char silincekNo[5];
    printf("Yukarıdaki sepetinizdeki bir ürünü silmek için seçiniz!\n");
    printf("Lütfen no giriniz(Örnek: h1): "); 
    scanf("%s",silincekNo);
    int urunsilcek;
    urunsilcek = urunSil(silincekNo);

   }
 
  
}
int urunSil(char urunNo[20]){
    
     if(strcmp( urunNo, "h1") == 0){
         h1_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",h1);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   }  if(strcmp( urunNo, "h2") == 0){
         h2_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",h2);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   }  if(strcmp( urunNo, "h3") == 0){
         h3_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",h3);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   }  if(strcmp( urunNo, "h4") == 0){
         h4_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",h4);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   }  if(strcmp( urunNo, "h5") == 0){
         h5_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",h5);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   }  if(strcmp( urunNo, "t1") == 0){
         t1_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",t1);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "t2") == 0){
         t2_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",t2);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "t3") == 0){
         t3_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",t3);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "t4") == 0){
         t4_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",t4);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "t5") == 0){
         t5_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",t5);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "k1") == 0){
         k1_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",k1);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "k2") == 0){
         k2_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",k2);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "k3") == 0){
         k3_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",k3);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "k4") == 0){
         k4_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",k4);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "k5") == 0){
         k5_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",k5);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "s1") == 0){
         s1_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",s1);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "s2") == 0){
         s2_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",s2);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "s3") == 0){
         s3_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",s3);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "s4") == 0){
         s4_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",s4);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } if(strcmp( urunNo, "s5") == 0){
         s5_d = 0;
         char bas[3];
       printf("\nSilinen ürün = %s \n",s5);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = panelGoster(2);
        }
   } 
}
int urunEkle(char urunNo[20]){
    
     if(strcmp( urunNo, "h1") == 0){
         h1_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",h1);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   }  if(strcmp( urunNo, "h2") == 0){
         h2_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",h2);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   }  if(strcmp( urunNo, "h3") == 0){
         h3_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",h3);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   }  if(strcmp( urunNo, "h4") == 0){
         h4_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",h4);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   }  if(strcmp( urunNo, "h5") == 0){
         h5_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",h5);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   }  if(strcmp( urunNo, "t1") == 0){
         t1_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",t1);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "t2") == 0){
         t2_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",t2);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "t3") == 0){
         t3_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",t3);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "t4") == 0){
         t4_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",t4);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "t5") == 0){
         t5_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",t5);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "k1") == 0){
         k1_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",k1);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "k2") == 0){
         k2_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",k2);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "k3") == 0){
         k3_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",k3);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "k4") == 0){
         k4_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",k4);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "k5") == 0){
         k5_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",k5);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "s1") == 0){
         s1_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",s1);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "s2") == 0){
         s2_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",s2);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "s3") == 0){
         s3_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",s3);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "s4") == 0){
         s4_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",s4);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } if(strcmp( urunNo, "s5") == 0){
         s5_d = 1;
         char bas[3];
       printf("\nEklenen ürün = %s \n",s5);
       printf("Geri gitmek için bir tuşa basınız!");
        scanf("%s",bas);
        if(bas != NULL){
           int panelg;
            panelg = urunGoster(2);
        }
   } 
}
int urunGoster(int menuNo){
  
 if (menuNo == 1)
 {
     
       int kat;
    printf("Kategoriler: \n\n1-Teknoloji\n2-Spor\n3-Kitap\n4-Hobi\n5-Geri Dön \n");
    printf("Lütfen seçmek istediğiniz kategoriyi yazınız: ");
    scanf("%d",&kat);
    if(kat == 1){
        printf("Teknoloji Kategorisi Ürünleri:\n\n %s\n%s\n%s\n%s\n%s\n",t1,t2,t3,t4,t5);
        int urungostertekrar;
        urungostertekrar = urunGoster(1);
    }else if(kat == 2){
         printf("Spor Kategorisi Ürünleri:\n\n %s\n%s\n%s\n%s\n%s\n",s1,s2,s3,s4,s5);
           int urungostertekrar;
        urungostertekrar = urunGoster(1);
    }else if(kat == 3){
         printf("Kitap Kategorisi Ürünleri:\n\n %s\n%s\n%s\n%s\n%s\n",k1,k2,k3,k4,k5);
           int urungostertekrar;
        urungostertekrar = urunGoster(1); 
    }else if(kat == 4){
         printf("Hobi Kategorisi Ürünleri:\n\n %s\n%s\n%s\n%s\n%s\n",h1,h2,h3,h4,h5);
           int urungostertekrar;
        urungostertekrar = urunGoster(1);
    }else if(kat == 5){
         int panelg;
            panelg = panelGoster(2);
    }else
    {
         int panelg;
            panelg = panelGoster(2);
    }
 }
 else if (menuNo = 2)
 {  
         printf("No h1 = %s\n",h1);
  
       printf("No h2 = %s\n",h2);
 
       printf("No h3 = %s\n",h3);
  
       printf("No h4 = %s\n",h4);
  
       printf("No h5 = %s\n",h5);
  
       printf("No t1 = %s\n",t1);
   
       printf("No t2 = %s\n",t2);
   
       printf("No t3 = %s\n",t3);
  
       printf("No t4 = %s\n",t4);
   
       printf("No t5 = %s\n",t5);
  
       printf("No s1 = %s\n",s1);
  
       printf("No s2 = %s\n",s2);
  
       printf("No s3 = %s\n",s3);
 
       printf("No s4 = %s\n",s4);
  
       printf("No s5 = %s\n",s5);
   
       printf("No k1 = %s\n",k1);
   
       printf("No k2 = %s\n",k2);
   
       printf("No k3 = %s\n",k3);
  
       printf("No k4 = %s\n",k4);
   
       printf("No k5 = %s\n",k5);
     
        char eklenenu[50];
       printf("\nLütfen eklemek istediğiniz ürünü seçiniz(Örnek h1): ");
       scanf("%s",eklenenu);
       int panelgit;
       panelgit = panelGoster(1);
 }else if (menuNo == 3)
 {

       printf("No h1 = %s\n",h1);
  
       printf("No h2 = %s\n",h2);
 
       printf("No h3 = %s\n",h3);
  
       printf("No h4 = %s\n",h4);
  
       printf("No h5 = %s\n",h5);
  
       printf("No t1 = %s\n",t1);
   
       printf("No t2 = %s\n",t2);
   
       printf("No t3 = %s\n",t3);
  
       printf("No t4 = %s\n",t4);
   
       printf("No t5 = %s\n",t5);
  
       printf("No s1 = %s\n",s1);
  
       printf("No s2 = %s\n",s2);
  
       printf("No s3 = %s\n",s3);
 
       printf("No s4 = %s\n",s4);
  
       printf("No s5 = %s\n",s5);
   
       printf("No k1 = %s\n",k1);
   
       printf("No k2 = %s\n",k2);
   
       printf("No k3 = %s\n",k3);
  
       printf("No k4 = %s\n",k4);
   
       printf("No k5 = %s\n",k5);
     
    int urung;
    urung = urunGoster(2);
 }
 else
 {
       int panelg;
            panelg = panelGoster(2);
 }
 
    
}