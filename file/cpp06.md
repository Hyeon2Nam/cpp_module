## Bonus rules
## 보너스 규칙

- For each exercise, any cast situation is solved by a specific cast. The evaluation will
check if your choice corresponds to the expected cast.

- 각 연습 문제에 제시된 `cast` 상황은 특정 `cast`에 의해 해결됩니다. 평가는 선택이 예상된 `cast` 동작과 일치하는지 확인하세용.

## Chapter III
## 챕터 III
## Exercise 00: Scalar conversion
## 연습 문제 00: 스칼라 변환

```
Exercise 00
Exercise 00: Scalar conversion
Turn-in directory : ex00/
Files to turn in : Any file you need and a Makefile
Allowed functions : Any function to convert from a string to an int, a float or a double. This will help, but won’t do the whole job.
```

```
연습 문제 : 00
연습 문제 00: 스칼라 변환
제출 디렉터리 : ex00/
제출할 파일 : 필요한 모든 파일과 Makefile
허용 함수 : string에서 int, float 또는 double로 변환하는 모든 함수. 이 함수들은 도움을 줄 순 있지만 전체 과제를 수행하지는 않습니다.
```

Write a program that takes a string representation of a C++ literal value (in its most common form) as a parameter. This literal must belong to one of the following a scalar types: char, int, float or double. Only the decimal notation will be used.  
C++ literal value(가장 일반적인 형식)의 `string` 표현을 매개 변수로 사용하는 프로그램을 작성합니다. 이 `literal`은 반드시 char, int, float 또는 double과 같은 스칼라 유형 중 하나에 속해야합니다. 십진수 표기법만 사용됩니다.  

Examples of char literal values: ’c’, ’a’... To simplify, please note that: non displayable characters can’t be passed as a parameter to your program, and if a conversion to char is not displayable, output a notification instead.  
`char literal value`의 예 : 'c', 'a'... 단순화하기 위해, 메모 해주세요: 표시할 수 없는 문자는 프로그램에 매개 변수로 전달할 수 없으며, `char`로의 변환이 표시될 수 없는 경우 알림을 대신 출력하세요.  

Examples of int literal values: 0, -42, 42...  
`int literal value`의 예 : 0, -42, 42 ...  

Examples of float literal values: 0.0f, -4.2f, 4.2f... You will also accept these pseudo literals as well, you know, for science: -inff, +inff and nanf.  
`float literal value`의 예: 0.0f, -4.2f, 4.2f... 과학을 위해 이러한 의사 리터럴도 허용합니다: -inff, + inff 및 nanf.  

Examples of double literal values: 0.0, -4.2, 4.2... You will also accept these pseudo literals as well, you know, for fun: -inf, +inf and nan.  
`double literal value`의 예: 0.0, -4.2, 4.2... 재미로 다음과 같은 의사 리터럴도 허용합니다: -inf, + inf 및 nan  

Your program must detect the literal’s type, acquire that literal in the right type (so it’s not a string anymore), then convert it explicitly to each of the three other types and display the results using the same formatting as below. If a conversion does not make sense or overflows, display that the conversion is impossible. You can include any header you need to handle numeric limits and special values.  
프로그램은 `literal`의 타입을 감지하고 올바른 유형의 `literal`을 획득한 다음(더 이상 문자열이 아님), 다른 세가지 유형으로 명시적으로 변환하고 아래와 같은 형식을 사용하여 결과를 표시해야합니다. 변환이 의미가 없거나 `overflow`시 변환이 불가능함을 표시하세요. 숫자 제한 및 특수 값을 처리하는 데 필요한 헤더를 포함할 수 있습니다.  


Examples:  
예:  

```sh
./convert 0
char: Non displayable
int: 0
float: 0.0f
double: 0.0
./convert nan
char: impossible
int: impossible
float: nanf
double: nan
./convert 42.0f
char: '*'
int: 42
float: 42.0f
double: 42.0
``

## Chapter IV
## 챕터 IV
## Exercise 01: Serialization
## 연습 문제 01: 직렬화

```
Exercise 01
Exercise 01: Serialization
Turn-in directory : ex01/
Files to turn in : Any file you need and a Makefile
Allowed functions : None
```

```
연습 문제 01
연습 문제 01: 직렬화
제출 디렉터리 : ex01/
제출할 파일 : 필요한 모든 파일과 Makefile
허용 함수 : 없음
```

Write a function "uintptr_t serialize(Data* ptr);". This function will return the parameter in an integer type
함수 "uintptr_t serialize(Data* ptr);"를 작성합니다. 이 함수는 매개 변수를 정수 형식으로 반환합니다.

Write a function "Data* deserialize(uintptr_t raw);". This function will return the raw data you created using "serialize" to a Data structure
함수 "Data* deserialize(uintptr_t raw);"를 작성합니다. 이 기능은 "serialize"를 사용하여 생성한 원시 데이터를 데이터 구조로 반환합니다.

Wrap these two functions in a program that proves that everything works as intended.
모든 것이 의도한 대로 작동한다는 것을 증명하는 프로그램으로 이 두 기능을 래핑하세요.

You must create a valid data structure.
올바른 데이터 구조를 만들어야 합니다.

Take a Data address use serialize on it.
데이터 주소를 직렬로 사용합니다.

Send the return value in deserialize.
반환 값을 역직렬화로 전송합니다.

Check if the return value is equal to the first pointer.
반환 값이 첫 번째 포인터와 동일한지 확인합니다.

Do not forget to include the Data structure you used
사용한 데이터 구조를 포함해야 합니다.


## Chapter V
## 챕터 V
## Exercise 02: Identify real type
## 연습 문제 02: 실제 유형 식별

```
Exercise 02
Exercise 02: Identify real type
Turn-in directory : ex02/
Files to turn in : Any file you need and a Makefile
Allowed functions : None
```

```
연습 문제 02
연습 문제 02: 실제 유형 식별
제출 디렉터리 : ex02/
제출할 파일 : 필요한 모든 파일과 Makefile
허용 함수 : 없음
```

Create a class Base that only possesses a public virtual destructor. Create three empty classes A, B and C that publicly inherit from Base.
공용 가상 소멸자만 소유하는 클래스 Base를 만듭니다. Base에서 public으로 상속되는 빈 클래스 A, B 및 C 세 개를 만듭니다.

Write a function "Base * generate(void);" that randomly instanciates A, B or C and returns the instance as a Base pointer.
A, B 또는 C를 임의로 삽입하고 인스턴스를 기준 포인터로 반환하는 함수 "Base * generate(void);"를 작성합니다.

Feel free to use anything you like for the randomness.
임의성을 위해 당신이 좋아하는 어떤 것이든 자유롭게 사용하세요.

Write a function "void identify(Base* p);" that displays "A", "B" or "C" according to the real type of p.
실제 유형의 p에 따라 "A", "B" 또는 "C"를 표시하는 함수 "void identify(Base* p);"을 작성합니다.


Write a function "void identify(Base& p);" You should never use a pointer inside this function.
함수 "void identify(Base& p);"를 작성한다. 이 함수 안에서는 포인터를 사용하면 안 된다.

that displays "A", "B" or "C" according to the real type of p.
실제 유형의 p에 따라 "A", "B" 또는 "C"를 표시한다.

Wrap these functions in a program that proves that everything works as intended.
모든 것이 의도한 대로 작동한다는 것을 증명하는 프로그램에 이러한 기능을 래핑합니다.

<typeinfo> is forbidden.
<typeinfo>는 금지되어 있습니다.
