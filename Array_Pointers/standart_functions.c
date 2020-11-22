#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SIZE    100

size_t my_strlen(const char *p)
{
    size_t len;
    while(*p++)
        ++len;
    return len;
}
char* my_strchr(const char *p, int c)
{
    while(*p++){
        if(*p == c)
            return (char*) p;
    }
    if (!c)
        return (char*) p;

    return NULL;
}
void strallchr(char*p, int c)
{

    while(*p++){
        if(*p == c)
            *p++ = '!';
    }
}
char* my_strrchr(const char *p, int c)
{
    size_t len = strlen(p);

    while(--len){
        if(p[len] == c)
            return  (char*)(p + len);
    }
     return NULL;
}
char * my_strstr(const char* p, const char* p2)
{
    size_t len = strlen(p2);
    size_t cnt = 0;         //using for understand whether the word to be searched has come to end or not. If it is not
                            // then it set to 0 again.

    char *ptr = (char*) p2; // This pointer used for set searched word's address value to it's  start address.
                            // Lets say, we are searching "cro" in "criss-cross" word. The program will start from "cr" and it
                            // will stop on "i" letter. Then we set the ptr to "c" letter which starting letter of "cro again
                            // for search "cro" again
    while (*p){
        if((len != cnt) && (*ptr == *p++ )){
            ++ptr;
            ++cnt;
            continue;
        }
        if(len == cnt) //If we reached end of searched word then there is no need to search for other elements.
            break;

        cnt = 0;
        ptr = (char*) p2;


    }
        return (char*) p - len; // ptr holds the address of the next element after the last element of the search string.
                                  // For that reason we need to subtract the len from the ptr to access to starting
                                  // address of searched array.
}
char *remove_char(char *p, int ch)
{
    size_t len = strlen(p);

    while(len--){
        if(ch == *p++){

        }
    }
    return p;
}
char * my_strcpy(char* pdest, const char *psource)
{
    char * ptemp = pdest;
    while(*psource){
        *pdest++ = *psource++;
    }
    *pdest = '\0';
    return ptemp;

    /*Then I learn a better idiom. Here it is;
      char * ptemp = pdest;
      while(*pdest++ = *psource++)
        ;
        return ptemp;*/
}
char * my_strcat (char* pdest, const char* psource)
{
    size_t len = strlen(pdest);
    strcpy(pdest + len, psource);
    return pdest;
}
int main()
{

    char s1[SIZE];
    char s2[SIZE];
    printf(" İlk diziyi giriniz:  ");
    gets(s1);
    printf(" İkinci diziyi giriniz:  ");
    gets(s2);



    printf("[%s] dizisinin sonuna [%s] dizisi ekleniyor:", s1, s2);
    my_strcat(s1, s2);
    printf("\ns1 dizisi :  %s", s1);
}
