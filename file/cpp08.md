# page 0

## C++ - Module 08
## C++ - 모듈 08

### Templated containers, iterators, algorithms
### 템플릿 컨테이너, 이터레이터, 알고리즘

Summary: This document contains the subject for Module 08 of the C++ modules.  
요약: 이 문서에는 C ++ 모듈의 모듈 08에 대한 주제가 포함되어 있습니다.

# page 1

## Contents

| Chapter | Contents | Page |
|:---:|:---|:---:|
| I | [__General rules__]() | 2 |
| II | [__Day-specific rules__]() | 4 |
| III | [__Exercise 00: Easy find__]() |  5 |
| IV | [__Exercise 01: Span__]() |  6 |
| V | [__Exercise 02: Mutated abomination__]() |  8 |
| VI | [__Exercise 03: Open your mind, but don’t blow it up__]() |  10 |
| VII | [__Exercise 04: In Poland, expression evaluates you__]() |  12 |

<!-- 
I   General rules                                       2  
II  Day-specific rules                                  4  
III Exercise 00: Easy find                              5  
IV  Exercise 01: Span                                   6  
V   Exercise 02: Mutated abomination                    8  
VI  Exercise 03: Open your mind, but don’t blow it up   10  
VII Exercise 04: In Poland, expression evaluates you	12   
-->

# page 2

## Chapter I
## 챕터 I
## General rules
## 일반적인 규칙

- Any function implemented in a header (except in the case of templates), and any unprotected header, means 0 to the exercise.

- 헤더에 구현된 어떤 기능 (템플릿의 경우 제외) 및 보호되지 않은 헤더는 평가 과정에서 0을 의미합니다.

- Every output goes to the standard output, and will be ended by a newline, unless specified otherwise.

- 모든 출력은 표준 출력으로 전달되며 달리 지정하지 않는 한 개행으로 끝납니다.

- The imposed filenames must be followed to the letter, as well as class names, function names and method names.

- 부과된 파일 이름 뒤에는 클래스 이름, 함수 이름 및 메소드 이름뿐만 아니라 문자가 와야합니다.

- Remember: You are coding in C++ now, not in C anymore. Therefore:
  - The following functions are FORBIDDEN, and their use will be punished by a 0, no questions asked: *alloc, *printf and free.
  - You are allowed to use basically everything in the standard library. HOWEVER, it would be smart to try and use the C++-ish versions of the functions you are used to in C, instead of just keeping to what you know, this is a new language after all. And NO, you are not allowed to use the STL until you actually are supposed to (that is, until module 08). That means no vectors/lists/maps/etc... or anything that requires an include \<algorithm> until then.

- 기억하세요: 이제 당신은 더 이상 C가 아닌 C++로 코딩하고 있습니다. 따라서:
  - \*alloc, \*printf 및 free와 같은 함수는 금지되어 있으며 사용시 0으로 처벌됩니다.
  - 기본적으로 표준 라이브러리의 모든 것을 사용할 수 있습니다. 그러나 알고 있는 내용을 그대로 유지하는 대신 이것은 결국 새로운 언어이기 때문에, C에서 익숙한 함수의 C++ 버전을 사용하는 것이 현명할 것입니다. STL을 사용하기로 되어있는 모듈(cpp module 08) 전 까지는 STL 을 사용하실 수 없습니다. 즉, 그때까지 벡터/리스트/맵/등등 또는 \<algorithm> 헤더에 포함된 어떤 것도 쓸 수 없음을 의미합니다.

- Actually, the use of any explicitly forbidden function or mechanic will be punished by a 0, no questions asked.

- 실제로, 명시적으로 금지된 기능이나 방법은 가차없이 0점으로 처벌됩니다.

- Also note that unless otherwise stated, the C++ keywords "using namespace" and "friend" are forbidden. Their use will be punished by a -42, no questions asked.

- 또한 달리 명시되지 않는 한 C++ 키워드 "using namespace" 및 "friend"는 금지됩니다. 그들의 사용은 가차없이 -42로 처벌될 것입니다.

- Files associated with a class will always be ClassName.hpp and ClassName.cpp, unless specified otherwise.

- 클래스와 연관된 파일은 달리 지정하지 않는 한 항상 ClassName.hpp 및 ClassName.cpp입니다.

- Turn-in directories are ex00/, ex01/, . . . , exn/.

- 제출 디렉토리는 ex00 /, ex01 /,. . . , exn/ 입니다.

- You must read the examples thoroughly. They can contain requirements that are not obvious in the exercise’s description. If something seems ambiguous, you don’t understand C++ enough.

- 예제를 철저히 읽어야합니다. 여기에는 연습 설명에서 명확하지 않은 요구 사항이 포함될 수 있습니다. 모호해 보이는 것이 있으면 C++를 충분히 이해하지 못하는 것입니다.

- Since you are allowed to use the C++ tools you learned about since the beginning, you are not allowed to use any external library. And before you ask, that also means no C++11 and derivates, nor Boost or anything your awesomely skilled friend told you C++ can’t exist without.

- 처음부터 배운 C++ 도구를 사용할 수 있으므로 외부 라이브러리를 사용할 수 없습니다. 미리 말씀드리지만, C++11, Boost, 프로그래밍을 잘하는 친구가 c++은 이거 없으면 시체라고 추천한 툴들을 포함한 그 어떤 외부 라이브러리도 사용할 수 없습니다

# page 3

- You may be required to turn in an important number of classes. This can seem tedious, unless you’re able to script your favorite text editor.

- 상당한 수의 클라스들을 제출해야 할 수도 있습니다. 좋아하는 텍스트 편집기를 스크립팅 할 수 없다면 지루해 보일 수 있습니다.

- Read each exercise FULLY before starting it! Really, do it.

- 시작하기 전에 각 연습 문제를 완전히 읽으십시오! 정말로, 하세요.

- The compiler to use is clang++.

- 사용할 컴파일러는 clang ++입니다.

-  Your code has to be compiled with the following flags : -Wall -Wextra -Werror.

- 다음 플래그를 사용하여 코드를 컴파일해야합니다: -Wall -Wextra -Werror.

- Each of your includes must be able to be included independently from others. Includes must contains every other includes they are depending on, obviously.

- 각 includes는 다른 것들과 독립적으로 포함될 수 있어야합니다. Includes는 분명히 그들이 의존하는 다른 모든 include를 포함해야합니다.

- In case you’re wondering, no coding style is enforced during in C++. You can use any style you like, no restrictions. But remember that a code your peer-evaluator can’t read is a code she or he can’t grade.

- 혹시 궁굼할까봐 말씀드리지만, C++에서는 코딩 스타일이 강제되지 않습니다. 제한없이 원하는 스타일을 사용할 수 있습니다. 하지만 동료 평가자가 읽을 수 없는 코드는 점수를 매길 수 없는 코드라는 점을 기억하세요.

- Important stuff now : You will NOT be graded by a program, unless explictly stated in the subject. Therefore, you are afforded a certain amount of freedom in how you choose to do the exercises. However, be mindful of the constraints of each exercise, and DO NOT be lazy, you would miss a LOT of what they have to offer !

- 지금 중요한 사항 : 서브젝트에 명시적으로 언급되지 않는 한 프로그램에 의해 평가되지 않습니다. 따라서 연습 문제를 선택하는 방법에 있어 어느 정도의 자유가 주어집니다. 그러나 각 연습 문제의 제약을 염두에 두고 게을러지지 마세요, 그들이 제공해야하는 많은 것을 놓칠 것입니다 !

- It’s not a problem to have some extraneous files in what you turn in, you may choose to separate your code in more files than what’s asked of you. Feel free, as long as the result is not graded by a program.

- 제출한 파일에 관련없는 파일이 있는 것은 문제가 되지 않습니다. 요청한 것보다 더 많은 파일에서 코드를 분리하도록 선택할 수 있습니다. 결과가 프로그램에 의해 평가되지 않는한 자유롭게 평가하시면 됩니다.

- Even if the subject of an exercise is short, it’s worth spending some time on it to be absolutely sure you understand what’s expected of you, and that you did it in the best possible way.

- 연습 문제의 주제가 짧더라도 자신에게 기대되는 바를 이해하고 가능한 최선의 방법으로 수행했는지 확인하기 위해 시간을 할애 할 가치가 있습니다.

- By Odin, by Thor! Use your brain!!!

- 오딘, 토르! 머리를 써라!!!

# page 4

## Chapter II
## 챕터 II
## Day-specific rules
## 날짜 별 규칙

- You will notice that in this particular subject, a lot of the problems you are asked to solve can be solved by NOT using standard containers and NOT using standard algorithms. However, using those is precisely the goal, and if you do not make every effort to use standard containers and algorithms wherever it’s appropriate, you WILL get a very bad grade, however functional your work may be. Please don’t be so lazy.

- 이 특정 주제에서 해결하도록 요청 받은 많은 문제들은 표준 컨테이너를 사용하지 않고 표준 알고리즘을 사용하지 않음으로써 해결할 수 있음을 알 수 있습니다. 그러나 그것들을 사용하는 것이 목표이며, 적절한 곳에서 표준 컨테이너와 알고리즘을 사용하기 위해 모든 노력을 기울이지 않으면 매우 나쁜 점수를 받게 될 것입니다. 너무 게으르지 마세요.

# page 5

## Chapter III
## 챕터 III
## Exercise 00: Easy find
## 연습 문제 00: 쉽게 찾기

```
Exercise : 00
Easy find
Turn-in directory : ex00/
Files to turn in : easyfind.hpp main.cpp
Forbidden functions : None
```

```
연습 문제 : 00
쉽게 찾기
제출 디렉터리 : ex00/
제출할 파일 : easyfind.hpp main.cpp
금지 된 기능 : 없음
```

An easy one to start off on the right foot...  

쉬운 성공적인 시작을 위해...  

Make a template function called easyfind, templated on a type T, that takes a T and an int.  

easyfind라는 템플릿 함수를 만들고, T와 int를 받는 T 타입을 템플릿으로 만듭니다.  

Assume the T is a container of int, and find the first occurence of the second parameter in the first parameter.  

T가 int의 컨테이너라고 가정하고 첫번째 매개 변수에서 두번째 매개 변수의 첫 번째 항목을 찾습니다.  

If it can’t be found, handle the error either using an exception or using an error return value. Take ideas from how standard containers work.  

찾을 수 없는 경우 예외를 사용하거나 오류 반환 값을 사용하여 오류를 처리합니다. 표준 컨테이너의 작동 방식에서 아이디어를 얻으십시오.  

Of course, you will provide a main function that tests it thoroughly.  

물론 당신은 철저하게 테스트하는 main 함수을 제공해야 합니다.  

# page 6

## Chapter IV
## 챕터 IV
## Exercise 01: Span
## 연습 문제 01: 간격

```
Exercise : 01
Span
Turn-in directory : ex01/
Files to turn in : span.cpp span.hpp main.cpp
Forbidden functions : None
```

```
연습 문제 : 01
간격
제출 디렉터리 : ex01/
제출할 파일 : span.cpp span.hpp main.cpp
금지 된 기능 : 없음
```

Make a class in which you can store N ints. N will be an unsigned int, and will be passed to the constructor as its only parameter.  

N개의 정수를 저장할 수 있는 클래스를 만드세요. N은 ```unsigned int```이며 생성자에게 유일한 매개변수로 전달됩니다.  

This class will have a function to store a single number (addNumber), that will be used to fill it. Attempting to add a new number if there are already N of them stored in the object is an error and should result in an exception.  

이 클래스는 단일 숫자를 저장하기 위한 함수(addNumber)를 갖으며, 숫자들을 채우는데 사용됩니다. 객체에 이미 N 개가 저장 되어있는 경우 새 번호를 추가하려고 하면 오류가 발생하고 예외가 발생합니다.  

You will now make two functions, shortestSpan and longestSpan, that will find out respectively the shortest and longest span between all the numbers contained in the object, and return it. If there’s no numbers stored, or only one, there is no span to find, and you will throw an exception.  

이제 shortestSpan 및 longestSpan이라는 두 개의 함수를 만들어 각각 객체에 포함된 모든 숫자 사이의 최단 및 최장 범위를 찾아 반환합니다. 저장된 숫자가 없거나 하나만 있으면 찾을 범위가 없으며 예외가 발생합니다.  

Below is a (way too short) example of a test main and its associated output. Of course, your main will be way more thorough than this. You have to test at the very least with 10000 numbers. More would be a good thing. It would also be very good if you could add numbers by passing a range of iterators, which would avoid the annoyance of making thousands of calls to addNumber...  

아래는 main 테스트 및 관련 출력의 (너무 짧은) 예입니다. 물론, 당신의 main은 이것보다 훨씬 더 철저할 것입니다. 최소한 10000개의 숫자로 테스트해야 합니다. 더 많이 할수록 좋습니다. 반복자의 범위를 전달하여 숫자를 추가 할 수 있다면 addNumber를 수천번 호출하는 번거로움을 피할수 있어 매우 좋습니다.  

# page 7

```c++
int main()
{
Span sp = Span(5);
sp.addNumber(5);
sp.addNumber(3);
sp.addNumber(17);
sp.addNumber(9);
sp.addNumber(11);
std::cout << sp.shortestSpan() << std::endl;
std::cout << sp.longestSpan() << std::endl;
}
```

```sh
$> ./ex01
2
14
$>
```

# page 8

## Chapter V
## 챕터 V
## Exercise 02: Mutated abomination
## 연습 문제 02: 돌연변이 혐오

```
연습 문제 : 02
돌연변이 혐오
제출 디렉터리 : ex02/
제출할 파일 : mutantstack.cpp mutantstack.hpp main.cpp
금지 된 기능 : 없음
```

Now that the appetizers are done, let’s do some disgusting stuff.  

이제 애피타이저가 완성되었으니 역겨운 일을 해보겠습니다.  

The std::stack container is VERY cool, but it’s one of the only STL containers that is NOT iterable. That’s too bad. But why be okay with it, when we can simply play God and just butcher it to add some stuff we like?  

std::stack 컨테이너는 매우 멋지지만 iterable 할 수 없는 유일한 STL 컨테이너 중 하나입니다. 유감이네요. 하지만 우리가 신처럼 행동하고 우리가 좋아하는 것들을 더하기 위해 그냥 도살할 수 있는데 이것으로 만족 할 수 있겠습니까?  

You will splice this ability into the std::stack container, to repair this grave injustice.  

여러분의 신과같은 이 능력을 std::stack 컨테이너에 써서 중대한 불의를 고쳐봅시다.  

Make a MutantStack class, that will be implemented in terms of a std::stack, and offer all of its member functions, only it will also offer an iterator.  

std::stack 측면에서 구현 될 MutantStack 클래스를 만들고 모든 멤버 함수를 제공합니다.이 클래스만 반복자를 제공합니다.  

Below is an example of code, the output of which should be the same as if we replaced the MutantStack with, for example, and std::list. You will of course provide tests for all of this in your main function.  

다음은 코드의 예입니다. 출력은 예를 들어 MutantStack을 std::list로 바꾼 것과 동일해야합니다. 물론 주 기능에서이 모든 것에 대한 테스트를 제공합니다.  

# page 9

```c++
int main()
{
MutantStack<int> mstack;
mstack.push(5);
mstack.push(17);
std::cout << mstack.top() << std::endl;
mstack.pop();
std::cout << mstack.size() << std::endl;
mstack.push(3);
mstack.push(5);
mstack.push(737);
//[...]
mstack.push(0);
MutantStack<int>::iterator it = mstack.begin();
MutantStack<int>::iterator ite = mstack.end();
++it;
--it;
while (it != ite)
{
std::cout << *it << std::endl;
++it;
}
std::stack<int> s(mstack);
return 0
}
```