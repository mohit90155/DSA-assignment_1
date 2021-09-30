
#include <stdio.h>
#include <string.h>

int is_Char(char c)
{
    if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    return 1;
    else
    return 0;
}

int is_valid(char email[])
{

    if (is_Char(email[0])==0)
    {
//printf("acess\n");
        return 0;
    }

    int At = -1, Dot = -1;

    for (int i = 0;
         i < strlen(email); i++)
    {

        if (email[i] == '@')
        {

            At = i;
        }

        else if (email[i] == '.')
        {

            Dot = i;
        }
    }
 printf("%d ,%d \n",At,Dot);
    if (At == -1 || Dot == -1)
        return 0;

    if (At - Dot >= 1){
        
        return 0;
        
    }
if(Dot>=strlen(email)-1)
return 0;
  
  return 1;
}

int main()
{
    char email[100];
    printf("enter email\n");
    scanf("%s", email);
    char s1[] = "valid";
    char s2[] = "invalid";

    int ans = is_valid(email);

    if (ans)
    {
        printf("%s", s1);
    }
    else
    {

        printf("%s  ", s2);
    }

    return 0;
}
