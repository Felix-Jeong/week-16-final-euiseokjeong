// debug3.c
// 프로그램의 목적은 정수 배열을 할당하고 이를 난수로 초기화하는 것입니다.
// 그러나 프로그램 세그먼트 오류가 발생했습니다.
// gdb를 사용하여 오류를 찾으십시오.
#include <stdio.h>
#define EXIT_SUCCESS 0
#define INT_MAX 100

int main(int argc, char* argv[]){
  printf("%ld \n", INT_MAX);
  int A[INT_MAX];
  int i = 0;
  while (i<INT_MAX)
  A[i] = rand()%10;

  return EXIT_SUCCESS;
}

/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?

.\debug3.c: In function 'main':
.\debug3.c:7:3: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
    7 |   printf("%ld \n", INT_MAX);
      |   ^~~~~~
.\debug3.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
  +++ |+#include <stdio.h>
    1 | // debug3.c
.\debug3.c:7:3: warning: incompatible implicit declaration of built-in function 'printf' [-Wbuiltin-declaration-mismatch]  
    7 |   printf("%ld \n", INT_MAX);
      |   ^~~~~~
.\debug3.c:7:3: note: include '<stdio.h>' or provide a declaration of 'printf'
.\debug3.c:7:20: error: 'INT_MAX' undeclared (first use in this function)
    7 |   printf("%ld \n", INT_MAX);
      |                    ^~~~~~~
.\debug3.c:1:1: note: 'INT_MAX' is defined in header '<limits.h>'; did you forget to '#include <limits.h>'?
  +++ |+#include <limits.h>
    1 | // debug3.c
.\debug3.c:7:20: note: each undeclared identifier is reported only once for each function it appears in
    7 |   printf("%ld \n", INT_MAX);
      |                    ^~~~~~~
.\debug3.c:12:10: warning: implicit declaration of function 'rand' [-Wimplicit-function-declaration]
   12 |   A[i] = rand()%10;
      |          ^~~~
.\debug3.c:14:10: error: 'EXIT_SUCCESS' undeclared (first use in this function)
   14 |   return EXIT_SUCCESS;
      |          ^~~~~~~~~~~~
.\debug3.c:1:1: note: 'EXIT_SUCCESS' is defined in header '<stdlib.h>'; did you forget to '#include <stdlib.h>'?
  +++ |+#include <stdlib.h>
    1 | // debug3.c

2. 프로그램에 어떤 문제가 있었나요?

- There are not #include <stdio.h>
- not define INT_MAX and EXIT_SUCCESS 

3. 프로그램은 어떻게 수정하셨나요?

- add #include <stdio.h> 
- define INT_MAX and EXIT_SUCCESS

*/
