//1. Write a user define functions

#include<stdio.h>
#include<ctype.h>

void mystrcpy(char *dest, char *src){
    while(*dest++ = *src++);
}
int mystrlen(char *s){
    int i=0; while(s[i]) i++; return i;
}
int mystrcmp(char *s1, char *s2){
    while(*s1 && (*s1==*s2)) { s1++; s2++; }
    return *s1 - *s2;
}
void mystrcat(char *dest, char *src){
    while(*dest) dest++;
    while(*dest++ = *src++);
}
void mystrncpy(char *dest, char *src, int n){
    int i; for(i=0;i<n;i++){ dest[i]=src[i]; if(src[i]==0) break; } dest[n]='\0';
}
void mystrupper(char *s){
    while(*s){ *s=toupper(*s); s++; }
}
void mystrlower(char *s){
    while(*s){ *s=tolower(*s); s++; }
}
void mystrrev(char *s){
    int i,j; char t; for(i=0,j=mystrlen(s)-1;i<j;i++,j--){ t=s[i]; s[i]=s[j]; s[j]=t; }
}
char* mystrstr(char *s, char *sub){
    int i,j; for(i=0;s[i];i++){
        for(j=0;sub[j];j++) if(s[i+j]!=sub[j]) break;
        if(!sub[j]) return s+i;
    }
    return NULL;
}
int mystrcasecmp(char *s1, char *s2){
    while(*s1 && toupper(*s1)==toupper(*s2)){ s1++; s2++; }
    return toupper(*s1)-toupper(*s2);
}
char* mystrchr(char *s, char c){
    while(*s){ if(*s==c) return s; s++; } return NULL;
}
char* mystrrchr(char *s, char c){
    char *res=NULL; while(*s){ if(*s==c) res=s; s++; } return res;
}
int mystrncmp(char *s1, char *s2, int n){
    int i=0; while(i<n && s1[i] && s1[i]==s2[i]) i++;
    if(i==n) return 0; return s1[i]-s2[i];
}
char* mystrnstr(char *s, char *sub, int n){
    int i,j; for(i=0;i<n && s[i];i++){
        for(j=0;j<n-i && sub[j];j++) if(s[i+j]!=sub[j]) break;
        if(!sub[j]) return s+i;
    } return NULL;
}
void mystrncat(char *dest, char *src, int n){
    while(*dest) dest++;
    int i; for(i=0;i<n && src[i]; i++) dest[i]=src[i];
    dest[i]='\0';
}
int mystrncasecmp(char *s1, char *s2, int n){
    int i=0; while(i<n && s1[i] && toupper(s1[i])==toupper(s2[i])) i++;
    if(i==n) return 0; return toupper(s1[i])-toupper(s2[i]);
}

int main(){
    char str1[50]="Hello", str2[50]="World", str3[50];

    mystrcpy(str3,str1);
    printf("mystrcpy: %s\n",str3);

    printf("mystrlen: %d\n",mystrlen(str1));

    printf("mystrcmp: %d\n",mystrcmp(str1,str2));

    mystrcat(str1,str2);
    printf("mystrcat: %s\n",str1);

    mystrncpy(str3,str2,3);
    printf("mystrncpy: %s\n",str3);

    mystrupper(str3);
    printf("mystrupper: %s\n",str3);

    mystrlower(str3);
    printf("mystrlower: %s\n",str3);

    mystrrev(str3);
    printf("mystrrev: %s\n",str3);

    char *p=mystrstr(str1,"loWo");
    printf("mystrstr: %s\n",p?p:"Not found");

    printf("mystrcasecmp: %d\n",mystrcasecmp("abc","ABC"));

    p=mystrchr(str1,'o');
    printf("mystrchr: %s\n",p?p:"Not found");

    p=mystrrchr(str1,'o');
    printf("mystrrchr: %s\n",p?p:"Not found");

    printf("mystrncmp: %d\n",mystrncmp("hello","heLlo",3));

    p=mystrnstr(str1,"loW",7);
    printf("mystrnstr: %s\n",p?p:"Not found");

    mystrncat(str3,"ABCD",2);
    printf("mystrncat: %s\n",str3);

    printf("mystrncasecmp: %d\n",mystrncasecmp("abcD","ABcd",4));
}

