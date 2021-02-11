#include <stdio.h>
#include<conio.h>
int main()
{
    char ch;
    printf("enter any letter from A to Z\n");
    scanf("%c",&ch);
    switch(ch)
    {
      case'a':
      case'A':
      case'e':
      case'E':
      case'i':
      case'I':
      case'o':
      case'O':
      case'u':
      case'U':
        printf("it's a vowel");
        break;
    default:
        printf("it's a consonant");
        break;
    }
}
