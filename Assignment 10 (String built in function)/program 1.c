//1. Use around 21 built-in functions of string in program

#include<stdio.h>
#include<string.h>

int main(){
    char str1[50]="Hello";
    char str2[50]="World";
    char str3[50];
    char *ptr;
    int n;

    printf("1. strlen: %lu\n", strlen(str1));
    strcpy(str3,str1);
    printf("2. strcpy: %s\n",str3);
    strcat(str3,str2);
    printf("3. strcat: %s\n",str3);
    printf("4. strcmp: %d\n",strcmp(str1,str2));
    printf("5. strncmp: %d\n",strncmp(str1,str2,3));
    ptr=strchr(str3,'o');
    printf("6. strchr: %s\n",ptr);
    ptr=strrchr(str3,'l');
    printf("7. strrchr: %s\n",ptr);
    ptr=strstr(str3,"loWo");
    printf("8. strstr: %s\n",ptr);
    strncpy(str3,str2,3);
    str3[3]='\0';
    printf("9. strncpy: %s\n",str3);
    strncat(str3,str1,2);
    printf("10. strncat: %s\n",str3);
    printf("11. strspn: %lu\n",strspn("abcde","abc"));
    printf("12. strcspn: %lu\n",strcspn("abcde","xyd"));
    ptr=strpbrk("hello","aeiou");
    printf("13. strpbrk: %s\n",ptr);
    memset(str3,'*',2);
    str3[2]='\0';
    printf("14. memset: %s\n",str3);
    char str4[5]="abcd";
    char str5[5]="abcf";
    printf("15. memcmp: %d\n",memcmp(str4,str5,4));
    char str6[5];
    memcpy(str6,str4,4);
    str6[4]='\0';
    printf("16. memcpy: %s\n",str6);
    char str7[50]="token1,token2,token3";
    ptr=strtok(str7,",");
    printf("17. strtok: %s\n",ptr);
    ptr=strtok(NULL,",");
    printf("    %s\n",ptr);
    printf("18. strdup: %s\n",strdup(str1));
    printf("19. strcoll: %d\n",strcoll("abc","ABC"));
    char str8[50], str9[50]="abc";
    n=strxfrm(str8,str9,50);
    printf("20. strxfrm: %s (length %d)\n",str8,n);
    sprintf(str3,"Formatted %d",100);
    printf("21. sprintf: %s\n",str3);
}

