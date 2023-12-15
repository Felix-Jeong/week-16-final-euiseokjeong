// debug2.c
// 이 프로그램의 목적은 정수를 읽고 이를 인쇄하는 것입니다. 그러나 프로그램 세그먼트 오류가 발생했습니다. 
// gdb를 사용하여 오류를 찾으십시오.
#include <stdio.h>
#define EXIT_SUCCESS 0

int main(int argc, char* argv[]){
  int x;
  printf("Please enter an integer : ");
  scanf("%d", &x);
  printf("the integer entered was %d \n", x);
  return EXIT_SUCCESS;
} 


/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?

.\debug2.c: In function 'main':
.\debug2.c:7:3: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
    7 |   printf("Please enter an integer : ");
      |   ^~~~~~
.\debug2.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
  +++ |+#include <stdio.h>
    1 | // debug2.c
.\debug2.c:7:3: warning: incompatible implicit declaration of built-in function 'printf' [-Wbuiltin-declaration-mismatch]
    7 |   printf("Please enter an integer : ");
      |   ^~~~~~
.\debug2.c:7:3: note: include '<stdio.h>' or provide a declaration of 'printf'
.\debug2.c:8:3: warning: implicit declaration of function 'scanf' [-Wimplicit-function-declaration]
    8 |   scanf("%d", x);
      |   ^~~~~
.\debug2.c:8:3: note: include '<stdio.h>' or provide a declaration of 'scanf'
.\debug2.c:8:3: warning: incompatible implicit declaration of built-in function 'scanf' [-Wbuiltin-declaration-mismatch]
.\debug2.c:8:3: note: include '<stdio.h>' or provide a declaration of 'scanf'
.\debug2.c:10:10: error: 'EXIT_SUCCESS' undeclared (first use in this function)
   10 |   return EXIT_SUCCESS;
      |          ^~~~~~~~~~~~
.\debug2.c:1:1: note: 'EXIT_SUCCESS' is defined in header '<stdlib.h>'; did you forget to '#include <stdlib.h>'?
  +++ |+#include <stdlib.h>
    1 | // debug2.c
.\debug2.c:10:10: note: each undeclared identifier is reported only once for each function it appears in
   10 |   return EXIT_SUCCESS;
      |          ^~~~~~~~~~~~

2. 프로그램에 어떤 문제가 있었나요?

- No #include 
- No & behind scanf
- Not define EXIT_SUCCESS

3. 프로그램은 어떻게 수정하셨나요?

- add #include
- add & 
- define EXIT_SUCCESS

*/
