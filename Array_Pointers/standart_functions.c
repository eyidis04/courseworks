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
char * my_strcpy(char* pdest, const char *psource)
{
    char * ptemp = pdest;
    while(*psource){
        *pdest++ = *psource++;
    }
    *pdest = '\0';
    return ptemp;

    /*Then I learn a better idiom. Here it is;*/
      char * ptemp = pdest;
      while(*pdest++ = *psource++)
        ;
        return ptemp;
}
char * my_strcat (char* pdest, const char* psource)
{
    size_t len = strlen(pdest);
    strcpy(pdest + len, psource);
    return pdest;
}
int my_strcmp(const char* pleft, const char* pright)
{
    /* This is my own complicated version. First I find which array has less elements for not take any "out of bonds" error.
    Then I compared every corresponding element of each array then return the function to comparison result.  */
    
    size_t left_len  = strlen(pleft);
    size_t right_len = strlen(pright);
    size_t smallone  = left_len < right_len ? left_len : right_len;

        for(size_t i = 0; i < smallone; ++i){
            if(pleft[i] > pright[i])
                return 1;

            if(pright[i] > pleft[i])
                return -1;
        }
        if(left_len > right_len)
            return 1;

        if(right_len > left_len )
            return -1;

        return 0;
}
/* This is much more beautiful way for do that. While loop is using for prevent "out of bonds" error. If pleft array reach null
   then it means both arrays are equal. Return value can be any positive or negative value. So writing like that is make sense.   */

    while{*pleft == *pright}{
        if(*pleft == '\0')
            return 0;
        ++pleft;
        ++pright;
    }

    return (int)*pleft - (int)*pright;
