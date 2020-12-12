#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

void putstar(char* p, size_t c)
{
    while(c--){
        *p++ = '*';
    }
    *p = '\0';
}

int main()
{
    const char* pnames[] = {
    "kamil", "korhan", "beril", "turhan", "ufuk", "murathan", "figen", "malik", "bulent", "cengiz",
    "baran", "nurullah", "dilber", "tuncer", "recep", "pelinsu", "cihan", "yesim", "aziz", "kazim",
    "afacan", "tevfik", "sumeyye", "hande", "aslihan", "emine", "temel", "gulsah", "hasan", "gul",
    "soner", "ayla", "cuneyt", "tekin", "binnaz", "emrecan", "yasar", "yilmaz", "feraye", "tugra",
    "melek", "garo", "yurdagul", "tarik", "derin", "handan", "aytac", "petek", "cem", "aylin",
    "gursel", "haldun", "nazife", "hulusi", "sevilay", "sabriye", "gulden", "tansel", "ege", "turgut",
    "cahit", "berk", "nazli", "aykut", "kayhan", "cemre", "murat", "kunter", "gunay", "cahide",
    "nedim", "metin", "kerim", "utku", "cumhur", "kurthan", "poyraz", "can", "candan", "hikmet",
    "izzet", "perihan", "tufan", "zahide", "samet", "melih", "hakan", "ayse", "refik", "efe",
    "belgin", "bilal", "niyazi", "fugen", "melike", "saadet", "cemile", "nahit", "arda", "ugur",
    "aynur", "yasin", "polat", "naz", "yusuf", "gulsen", "nazif", "demir", "egemen", "necmi",
    "fazilet", "celal", "ismail", "kamile", "mahir", "caner", "suleyman", "cezmi", "diana", "sadullah",
    "atif", "huseyin", "necmettin", "devlet", "sezen", "hulya", "necmiye", "ece", "julide", "onat",
    "emre", "sinem", "teoman", "irmak", "cihat", "adem", "bilgin", "muzaffer", "suphi", "pelin",
    "yalcin", "kenan", "atalay", "akin", "durmus", "haluk", "kelami", "alparslan", "busra", "kasim",
    "durriye", "tarcan", "nihal", "gizem", "bilge", "dilek", "yasemin", "fahri", "furkan", "papatya",
    "hakki", "fadime", "devrim", "abdi", "tayyip", "yurdakul", "zekai", "nagehan", "ata", "naci",
    "mert", "yelda", "cebrail", "rumeysa", "beyhan", "azize", "cemil", "sezer", "beste", "ciler",
    "enes", "cahide", "tayyar", "cansu", "burak", "ediz", "sefa", "anil", "alev", "atil", "muruvvet",
    "nefes", "cetin", "tansu", "bora", "sevim", "sarp", "fuat", "kaya", "zarife", "tanju", "sadettin",
    "su", "kerem", "handesu", "jade", "halime", "gurbuz", "okan", "azmi", "sevda", "leyla", "hilal",
    "galip", "alican", "atakan", "feramuz", "efecan", "osman", "nihat", "sefer", "zerrin", "binnur",
    "taner", "kayahan", "nalan", "tonguc", "kezban", "kaan", "abdulmuttalip", "dost", "deniz", "refika",
    "tijen", "umit", "yunus", "zahit", "melisa", "hulki", "hilmi", "edip", "muslum", "canan",
    "dogan", "berivan", "adnan", "helin", "fikret", "derya", "sidre", "abdullah", "billur", "nurdan",
    "agah", "engin", "burhan", "suheyla", "esra", "sadri", "sezai", "esen", "askin", "rupen", "pinat",
    "ercument", "birhan", "ahmet", "polathan", "tayfun", "mustafa", "zubeyde", "pakize", "nevsin", "naciye",
    "erdem", "asim", "orkun", "sami", "sade", "demet", "keriman", "yavuz", "mehmet", "muhsin",
    "saniye", "cesim", "aydan", "eda", };

    size_t size = sizeof(pnames) / sizeof(char*);
    int life = 5;
    char ch, mistake, first_entry;
    const char* chr_ret;
    char star[10];
    char guess[10];
    srand(time(NULL));
    int rand_var = rand() % size;
    const char* p = pnames[rand_var];
    putstar(star, strlen(p));

    while(life){

        printf("Gizli kelime: %s %s \n", star, p);

        second_chance:

        printf("\nKelimeyi tahmin etmek icin 'w' ye basiniz : Harf tahmin etmek icin w disinda herhangi bir tusa basiniz :");
        scanf(" %c", &first_entry);
        if(first_entry == 'w')
        {
            printf("Tahmininizi giriniz: ");
            scanf(" %s", guess);
            if(!strcmp(guess, p))
            {
                printf("Tebrikler. Gizli kelime %s bulundu. Canlarınız tekrar beşe"
                       " tamamlandı.\nYeni isim ile devam etmek istiyor musunuz? y/n\n", p);
                   goto repeat;
            }
            --life;
            printf("Hatali tahminde bulundunuz\n Kalan can: %d", life);
            goto second_chance;
        }
        printf("Harf tafmininiz: ");
        scanf(" %c", &ch);
        chr_ret = strchr(p, ch);

        if(!chr_ret)
            --life;

        while(chr_ret){
                int idx = chr_ret - p;
                star[idx] = ch;
                chr_ret = strchr(chr_ret + 1, ch);
        }
        printf("Kalan Can: %d\n", life);

        if(!strchr(star, '*')){
            life = 5;
            printf("Tebrikler. Gizli kelime %p bulundu. Canlarınız tekrar beşe"
                   " tamamlandı.\nYeni isim ile devam etmek istiyor musunuz? y/n\n", star);

repeat:
            scanf(" %c", &mistake);
            if(mistake == 'n')
                exit(0);

            else if(mistake == 'y'){
            srand(time(NULL));
            rand_var = rand() % size;
            p = pnames[rand_var];
            putstar(star, strlen(p));
            system("cls");
            }

            else{
                 printf("Yanlis bir giris yaptiniz. Yeni isim ile devam etmek istiyor musunuz? y/n\n");
                 goto repeat;
            }
        }
    }
}

