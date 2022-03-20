## Exercise 00: A few functions
## 연습 문제 00: 몇 가지 함수들

```
Exercise : 00
Exercise 00: A few functions
Turn-in directory : ex00/
Files to turn in : whatever.hpp, main.cpp and a Makefile
Allowed functions : None
```

```
연습 문제 : 00
연습 문제 00: 몇 가지 함수들
제출 디렉터리 : ex00/
제출할 파일 : whatever.hpp, main.cpp and a Makefile
허용 함수 : 없음
```

Write the following function templates:  

다음 함수 템플릿을 작성합니다:  

- swap: Swaps the values of two arguments. Does not return anything.
- min: Compares the two arguments and returns the smallest one. If the two arguments are equal, then it returns the second one.
- max: Compares the two arguments and returns the biggest one. If the two arguments
are equal, then it returns the second one.

- swap : 두 인수의 값을 바꿉니다. 아무것도 반환하지 않습니다.
- min : 두 인수를 비교하여 가장 작은 인수를 반환합니다. 두 인수가 같으면 두 번째 인수를 반환합니다.
- max : 두 인수를 비교하여 가장 큰 인수를 반환합니다. 두 인수가 같으면 두 번째 인수를 반환합니다.

Templates must be defined in header files. You must turn in a main.cpp containing tests
for your program. This file can and will be changed during evaluation. These functions
can be called with any type of argument, with the condition that the two arguments have
the same type and supports all comparison operators. Provide enough code to compile
an executable that proves that everything works as intended.  

템플릿은 반드시 헤더 파일에 정의되어야합니다. 프로그램은 반드시 테스트가 포함된 main.cpp를 제출해야합니다. 이 파일은 평가 중에 변경되거나 변경될 수 있습니다. 이러한 함수들은 두 인수들이 동일한 타입이며 모든 비교 연산자를 지원하는 조건 하에서 모든 타입의 인수를 호출 할 수 있어야 합니다. 모든 것이 의도한대로 작동함을 증명하는 실행 파일을 컴파일하기에 충분한 코드로 제공할 수 있어야 합니다.  

# page 5

The following code:  
다음 코드 :  

```c++
int main( void ) {
int a = 2;
int b = 3;
::swap( a, b );
std::cout << "a = " << a << ", b = " << b << std::endl;
std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
std::string c = "chaine1";
std::string d = "chaine2";
::swap(c, d);
std::cout << "c = " << c << ", d = " << d << std::endl;
std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
return 0;
}
```

Should output the following if you did well:  
잘 해냈다면 다음을 출력해야합니다:  

```sh
a = 3, b = 2
min(a, b) = 2
max(a, b) = 3
c = chaine2, d = chaine1
min(c, d) = chaine1
max(c, d) = chaine2
```

# page 6

## Chapter III
## 챕터 III
## Exercise 01: Iter
## 연습 문제 01: Iter

```
Exercise : 01
Exercise 01: Iter
Turn-in directory : ex01/
Files to turn in : iter.hpp, main.cpp and a Makefile
Allowed functions : None
```

```
연습 문제 : 01
연습 문제 01: Iter
제출 디렉터리 : ex01/
제출할 파일 : iter.hpp, main.cpp and a Makefile
허용 함수 : 없음
```

Write a function template iter that take 3 parameters and returns nothing. The first
parameter is the address of an array, the second one is the length of the array and the
third one is a function that is called on each element of the array.  

3개의 매개 변수를 사용하고 아무것도 반환하지 않는 `function template iter`를 작성하세요. 첫번째 매개 변수는 배열의 주소이고, 두번째는 배열의 길이이며 세 번째는 배열의 각 요소에서 호출되는 함수입니다.  

Wrap your work in an executable that proves that your function template iter works with any type of array and/or with an instantiated function template as a third parameter.  

당신의 `function template iter`가 모든 유형의 배열 및/또는 인스턴스화된 함수 템플릿을 세 번째 매개변수로서 작동함을 보여주는 실행 파일을 만들어 마무리 하세요.  

# page 7

## Chapter IV
## 챕터 IV
## Exercise 02: Array
## 연습 문제 02: 배열

```
Exercise 02: Array
Turn-in directory : ex02/
Files to turn in : Array.hpp, main.cpp and a Makefile
Allowed functions : None
```

```
연습 문제 02: 배열
제출 디렉터리 : ex02/
제출할 파일 : Array.hpp, main.cpp and a Makefile
허용 함수 : 없음
```

Write a class template Array that contains elements of type T and that allows the
following behavior:  

T 타입의 요소를 포함하고 다음 동작을 만족하는 `class template Array`를 작성해봅시다:  

- Construction with no parameter: creates an empty array.

- 매개변수가 없는 생성자: 빈 배열을 생성합니다.

- Construction with an unsigned int n as a parameter: creates an array of n elements, initialized by default. (Tip: try to compile int * a = new int();, then display *a.)

- `unsigned int n`을 매개 변수로 사용하는 생성자: 기본적으로 초기화되는 n 요소의 배열을 생성합니다. (팁 : `int * a = new int ();`로 컴파일 한 다음 `*a`를 출력해보세요.)

- Construction by copy and assignment operator. In both cases, modifying one of the two arrays after copy/assignment won’t affect anything in the other array.

- 복사 및 할당 연산자에 의한 생성자. 두 경우 모두 복사/할당 후 두 배열 중 하나를 수정해도 다른 배열에는 영향을 주지 않습니다.

- You MUST use the operator new[] for your allocation. You must not do preventive allocation. Your code must never access non allocated memory.

- 할당에 `new[]` 연산자를 반드시 사용해야합니다. 예방 할당을 해서는 안됩니다. 코드는 할당되지 않은 메모리에 액세스해서는 안됩니다.

- Elements are accessible through the operator[].

- `operator[]`를 통해 요소에 접근 가능 할 수 있어야 합니다.

- When accessing an element with the operator[], if this element is out of the limits, a std::exception is thrown.

- `operator[]`로 요소에 접근 할 때 이 요소가 제한을 밖에 있으면 `std::exception`이 발생합니다.

- A member function size that returns the number of elements in the array. This member function takes no parameter and does not modify the current instance in any way.

- `member function size`는 배열의 요소 수를 반환합니다. 이 멤버 함수는 매개 변수를 갖지 않으며 어떤 식으로든 현재 인스턴스를 수정하지 않습니다.

Wrap your work into an executable that proves that your class template works as intended.  

당신의 `class template`이 의도한대로 작동함을 보여주는 실행 파일을 만들어 마무리 하세요.  