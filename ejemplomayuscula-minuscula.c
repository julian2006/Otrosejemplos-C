#include <stdio.h>

int main(void) {
  char opcion, minuscula;

  printf("Solo puede introducir una letra mayuscula\n");
  scanf("%c",&opcion);

  switch(opcion)
  {
  case'A':
    printf("\nla letra minuscula es a ");
    break;
    case'B':
     printf("\nla letra minuscula es b ");
    break;
    case'C':
    printf("\nla letra minuscula es c ");
    break;
    case'D':
    printf("\nla letra minuscula es d ");
    break;
    case'E':
   printf("\nla letra minuscula es e ");
    break;
    case'F':
    printf("\nla letra minuscula es f ");
    break;
    case'G':
   printf("\nla letra minuscula es g ");
    break;
    case'H':
   printf("\nla letra minuscula es h ");
    break;
    case'I':
   printf("\nla letra minuscula es i ");
    break;
    case'J':
   printf("\nla letra minuscula es j ");
    break;
    case'K':
   printf("\nla letra minuscula es k ");
    break;
    case'L':
    printf("\nla letra minuscula es l ");
    break;
    case'M':
   printf("\nla letra minuscula es m ");
    break;
    case'N':
   printf("\nla letra minuscula es n ");
    break;
    case'O':
    printf("\nla letra minuscula es o ");
    break;
    case'P':
    printf("\nla letra minuscula es p ");
    break;
    default:
    printf("\n Error la letra %c no es una letra mayuscula", opcion);
    
    }
}