// debug1.c
// 이 잘못된 프로그램을 디버그하세요.
#include <stdio.h>

int factorial(int x);

int main() {
  // 5의 계승값을 구하세요.
  // 5의 계승은 5 x 4 x 3 x 2 x 1이다(5!로 표시).
  
  int x = 5;
  
  printf("The factorial of %d is: %d", x, factorial(x));
  // 예측 출력: The factorial of 5 is 120.
  
  return 0;
}

int factorial(int x) {
  int result = 1;
  for (int i = 1; i <= x; ++i) {
    result = result * i;
  }
  return result;
}

/*
질문에 답해 주세요.

1. 컴파일할 때 어떤 오류 메시지가 나타났나요?

//There are not #include <stdio.h> at first.
//need () in line 18. 

.\debug1.c: In function 'main':
.\debug1.c:18:3: warning: implicit declaration of function 'printf' [-Wimplicit-function-declaration]
   18 |   printf("The factorial of %d is: %d", x, factorial(x);
      |   ^~~~~~
.\debug1.c:1:1: note: include '<stdio.h>' or provide a declaration of 'printf'
  +++ |+#include <stdio.h>
    1 | // debug1.c
.\debug1.c:18:3: warning: incompatible implicit declaration of built-in function 'printf' [-Wbuiltin-declaration-mismatch]
   18 |   printf("The factorial of %d is: %d", x, factorial(x);
      |   ^~~~~~
.\debug1.c:18:3: note: include '<stdio.h>' or provide a declaration of 'printf'
.\debug1.c:18:55: error: expected ')' before ';' token
   18 |   printf("The factorial of %d is: %d", x, factorial(x);
      |         ~                                             ^
      |                                                       )
.\debug1.c:21:12: error: expected ';' before '}' token
   21 |   return 0;
      |            ^
      |            ;
   22 | }
      | ~

2. 프로그램에 어떤 문제가 있었나요?

//There are not #include <stdio.h> at first.
//need () in line 18. 

3. 프로그램은 어떻게 수정하셨나요?

//add #include <stdio.h>
//add ) in line 18 

*/