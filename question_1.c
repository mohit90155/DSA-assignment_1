#include <stdio.h>

char* isfloatingpoint(char*ch){
   static char s1[20]="not valid";
   static char s2[10]="valid";
    for(int i=0;ch[i]!='\0';i++){
        if(ch[i]=='.')
        {
            if(ch[i+1]=='\0'||i==0)
            return s1;
            else
            return s2;
        }
    }
   return s1;
}
int main()
{
    char s[20];
    scanf("%s",s);
   printf("%s",isfloatingpoint(s));

    return 0;
}
