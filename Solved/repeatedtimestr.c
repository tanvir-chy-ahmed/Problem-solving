


#include <stdio.h>

int rep(int x,char* s)
{
    printf("Enter Repeted Time: ");
    scanf("%d",&x);

    printf("Enter Your String: ");
    scanf("%s",s);

    for (int i = 0; i < x; i++)
    {
        printf("%s",s);
    }
    
}

int main(){
    int x;
    char s[20];
    rep(x,s);
  
    return 0;
}
